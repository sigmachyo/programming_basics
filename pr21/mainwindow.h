#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "magazine.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void loadData();
    void saveData();

private:
    Ui::MainWindow *ui;
    std::vector<Magazine> magazines;

    void loadTxtData(const QString &filename);
    void loadBinData(const QString &filename);
    void saveBinData(const QString &filename);
    void displayData();
};

#endif // MAINWINDOW_H
