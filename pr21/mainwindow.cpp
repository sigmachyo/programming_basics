#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QStandardItemModel>
#include <sstream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    connect(ui->execPushButton, &QPushButton::clicked, this, &MainWindow::loadData);
    // Установка соединения для кнопки сохранения
    connect(ui->execPushButton, &QPushButton::clicked, this, &MainWindow::saveData);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::loadData() {
    QString filename;
    if (ui->mode1RadioButton->isChecked()) {
        filename = QFileDialog::getOpenFileName(this, "Open Text File", "", "Text Files (*.txt)");
    } else if (ui->mode2RadioButton->isChecked()) {
        filename = QFileDialog::getOpenFileName(this, "Open Binary File", "", "Binary Files (*.bin)");
    } else {
        QMessageBox::warning(this, "Error", "Please select a mode");
        return;
    }

    if (filename.isEmpty())
        return;

    if (ui->mode1RadioButton->isChecked()) {
        loadTxtData(filename);
    } else if (ui->mode2RadioButton->isChecked()) {
        loadBinData(filename);
        // Сортировка данных по названию журналов
        std::sort(magazines.begin(), magazines.end(), [](const Magazine &a, const Magazine &b) {
            return a.getName() < b.getName();
        });
        // Перезапись в бинарный файл, чтобы сохранить отсортированные данные
        saveBinData(filename);
        // Загрузка данных из бинарного файла (теперь они отсортированы по названию)
        loadBinData(filename);
    }

    displayData();
}


void MainWindow::saveData() {
    QString filename = QFileDialog::getSaveFileName(this, "Save File", "", "Binary Files (*.bin)");
    if (filename.isEmpty())
        return;

    saveBinData(filename);
}

void MainWindow::loadTxtData(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Unable to open file");
        return;
    }

    QTextStream in(&file);
    magazines.clear();
    while (!in.atEnd()) {
        Magazine mag;
        QString line = in.readLine();
        std::istringstream iss(line.toStdString());
        iss >> mag;
        magazines.push_back(mag);
    }
    file.close();
}

void MainWindow::loadBinData(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::warning(this, "Error", "Unable to open file");
        return;
    }

    QDataStream in(&file);
    size_t len;
    in >> len;
    magazines.clear();
    for (size_t i = 0; i < len; ++i) {
        Magazine mag;
        mag.load_bin(in);
        magazines.push_back(mag);
    }
    file.close();
}

void MainWindow::saveBinData(const QString &filename) {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly)) {
        QMessageBox::warning(this, "Error", "Unable to open file");
        return;
    }

    QDataStream out(&file);
    size_t len = magazines.size();
    out << len;
    for (const auto &mag : magazines) {
        mag.save_bin(out);
    }
    file.close();
}

void MainWindow::displayData() {
    QString dataText;
    QTextStream stream(&dataText);

    for (const auto &mag : magazines) {
        stream << QString::fromStdString(mag.getName()) << "\t"
               << QString::number(mag.getPrice()) << "\t"
               << QString::number(mag.getCount()) << "\t"
               << QString::fromStdString(mag.getTypeStr()) << "\n";
    }

    ui->outTextEdit->setPlainText(dataText);
}
