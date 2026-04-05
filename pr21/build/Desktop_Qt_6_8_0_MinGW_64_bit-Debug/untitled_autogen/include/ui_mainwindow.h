/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *inputGroupBox;
    QFormLayout *formLayout_4;
    QLabel *textFileLabel;
    QLineEdit *textFileLineEdit;
    QLabel *binFileLabel;
    QLineEdit *binFileLineEdit;
    QGroupBox *controlGroupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *mode1RadioButton;
    QRadioButton *mode2RadioButton;
    QPushButton *execPushButton;
    QGroupBox *outGroupBox;
    QVBoxLayout *verticalLayout_3;
    QPlainTextEdit *outTextEdit;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QButtonGroup *modeButtonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(827, 435);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        inputGroupBox = new QGroupBox(centralWidget);
        inputGroupBox->setObjectName("inputGroupBox");
        formLayout_4 = new QFormLayout(inputGroupBox);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName("formLayout_4");
        textFileLabel = new QLabel(inputGroupBox);
        textFileLabel->setObjectName("textFileLabel");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, textFileLabel);

        textFileLineEdit = new QLineEdit(inputGroupBox);
        textFileLineEdit->setObjectName("textFileLineEdit");

        formLayout_4->setWidget(0, QFormLayout::FieldRole, textFileLineEdit);

        binFileLabel = new QLabel(inputGroupBox);
        binFileLabel->setObjectName("binFileLabel");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, binFileLabel);

        binFileLineEdit = new QLineEdit(inputGroupBox);
        binFileLineEdit->setObjectName("binFileLineEdit");

        formLayout_4->setWidget(1, QFormLayout::FieldRole, binFileLineEdit);


        verticalLayout_2->addWidget(inputGroupBox);

        controlGroupBox = new QGroupBox(centralWidget);
        controlGroupBox->setObjectName("controlGroupBox");
        horizontalLayout = new QHBoxLayout(controlGroupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        mode1RadioButton = new QRadioButton(controlGroupBox);
        modeButtonGroup = new QButtonGroup(MainWindow);
        modeButtonGroup->setObjectName("modeButtonGroup");
        modeButtonGroup->addButton(mode1RadioButton);
        mode1RadioButton->setObjectName("mode1RadioButton");
        mode1RadioButton->setChecked(true);

        horizontalLayout->addWidget(mode1RadioButton);

        mode2RadioButton = new QRadioButton(controlGroupBox);
        modeButtonGroup->addButton(mode2RadioButton);
        mode2RadioButton->setObjectName("mode2RadioButton");

        horizontalLayout->addWidget(mode2RadioButton);

        execPushButton = new QPushButton(controlGroupBox);
        execPushButton->setObjectName("execPushButton");
        execPushButton->setAutoDefault(true);

        horizontalLayout->addWidget(execPushButton);


        verticalLayout_2->addWidget(controlGroupBox);

        outGroupBox = new QGroupBox(centralWidget);
        outGroupBox->setObjectName("outGroupBox");
        verticalLayout_3 = new QVBoxLayout(outGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        outTextEdit = new QPlainTextEdit(outGroupBox);
        outTextEdit->setObjectName("outTextEdit");
        outTextEdit->setEnabled(true);
        outTextEdit->setReadOnly(true);

        verticalLayout_3->addWidget(outTextEdit);


        verticalLayout_2->addWidget(outGroupBox);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 827, 25));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        execPushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\260\320\272\321\202\320\270\321\207\320\265\321\201\320\272\320\260\321\217 \321\200\320\260\320\261\320\276\321\202\320\260", nullptr));
        inputGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264", nullptr));
        textFileLabel->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202\320\276\320\262\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
        binFileLabel->setText(QCoreApplication::translate("MainWindow", "\320\224\320\262\320\276\320\270\321\207\320\275\321\213\320\271 \321\204\320\260\320\271\320\273", nullptr));
        controlGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\243\320\277\321\200\320\260\320\262\320\273\320\265\320\275\320\270\320\265", nullptr));
        mode1RadioButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 1", nullptr));
        mode2RadioButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 2", nullptr));
        execPushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", nullptr));
        outGroupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
