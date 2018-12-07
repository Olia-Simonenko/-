/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *openFile_Button;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_averNumMethLines;
    QPushButton *calculate_Button;
    QLabel *label_averNumModuleLines;
    QLabel *label_averNumClassLines;
    QLabel *label_NORM;
    QLabel *label_RFC;
    QLabel *label_WMC;
    QLabel *label_NOC;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(611, 410);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openFile_Button = new QPushButton(centralWidget);
        openFile_Button->setObjectName(QStringLiteral("openFile_Button"));
        openFile_Button->setGeometry(QRect(10, 370, 75, 23));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 361, 341));
        label_averNumMethLines = new QLabel(centralWidget);
        label_averNumMethLines->setObjectName(QStringLiteral("label_averNumMethLines"));
        label_averNumMethLines->setGeometry(QRect(380, 10, 211, 21));
        calculate_Button = new QPushButton(centralWidget);
        calculate_Button->setObjectName(QStringLiteral("calculate_Button"));
        calculate_Button->setGeometry(QRect(100, 370, 75, 23));
        label_averNumModuleLines = new QLabel(centralWidget);
        label_averNumModuleLines->setObjectName(QStringLiteral("label_averNumModuleLines"));
        label_averNumModuleLines->setGeometry(QRect(380, 40, 211, 21));
        label_averNumClassLines = new QLabel(centralWidget);
        label_averNumClassLines->setObjectName(QStringLiteral("label_averNumClassLines"));
        label_averNumClassLines->setGeometry(QRect(380, 70, 211, 21));
        label_NORM = new QLabel(centralWidget);
        label_NORM->setObjectName(QStringLiteral("label_NORM"));
        label_NORM->setGeometry(QRect(380, 100, 211, 21));
        label_RFC = new QLabel(centralWidget);
        label_RFC->setObjectName(QStringLiteral("label_RFC"));
        label_RFC->setGeometry(QRect(380, 130, 211, 21));
        label_WMC = new QLabel(centralWidget);
        label_WMC->setObjectName(QStringLiteral("label_WMC"));
        label_WMC->setGeometry(QRect(380, 160, 211, 21));
        label_NOC = new QLabel(centralWidget);
        label_NOC->setObjectName(QStringLiteral("label_NOC"));
        label_NOC->setGeometry(QRect(380, 190, 211, 201));
        label_NOC->setLineWidth(1);
        label_NOC->setScaledContents(true);
        label_NOC->setWordWrap(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        openFile_Button->setText(QApplication::translate("MainWindow", "Open File", 0));
        label_averNumMethLines->setText(QApplication::translate("MainWindow", "Average number of method lines", 0));
        calculate_Button->setText(QApplication::translate("MainWindow", "Calculate", 0));
        label_averNumModuleLines->setText(QApplication::translate("MainWindow", "Average number of module lines", 0));
        label_averNumClassLines->setText(QApplication::translate("MainWindow", "Average number of class lines", 0));
        label_NORM->setText(QApplication::translate("MainWindow", "Number Of Remote Methods", 0));
        label_RFC->setText(QApplication::translate("MainWindow", "Response For Class", 0));
        label_WMC->setText(QApplication::translate("MainWindow", "\320\241lass method complexity", 0));
        label_NOC->setText(QApplication::translate("MainWindow", "NOC", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
