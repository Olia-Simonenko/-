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
        openFile_Button->setGeometry(QRect(100, 20, 91, 23));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 70, 271, 321));
        label_averNumMethLines = new QLabel(centralWidget);
        label_averNumMethLines->setObjectName(QStringLiteral("label_averNumMethLines"));
        label_averNumMethLines->setGeometry(QRect(300, 70, 221, 21));
        calculate_Button = new QPushButton(centralWidget);
        calculate_Button->setObjectName(QStringLiteral("calculate_Button"));
        calculate_Button->setGeometry(QRect(400, 360, 111, 31));
        label_averNumModuleLines = new QLabel(centralWidget);
        label_averNumModuleLines->setObjectName(QStringLiteral("label_averNumModuleLines"));
        label_averNumModuleLines->setGeometry(QRect(300, 100, 221, 21));
        label_averNumClassLines = new QLabel(centralWidget);
        label_averNumClassLines->setObjectName(QStringLiteral("label_averNumClassLines"));
        label_averNumClassLines->setGeometry(QRect(300, 130, 221, 21));
        label_NORM = new QLabel(centralWidget);
        label_NORM->setObjectName(QStringLiteral("label_NORM"));
        label_NORM->setGeometry(QRect(300, 160, 211, 21));
        label_RFC = new QLabel(centralWidget);
        label_RFC->setObjectName(QStringLiteral("label_RFC"));
        label_RFC->setGeometry(QRect(300, 190, 211, 21));
        label_WMC = new QLabel(centralWidget);
        label_WMC->setObjectName(QStringLiteral("label_WMC"));
        label_WMC->setGeometry(QRect(300, 220, 231, 21));
        label_NOC = new QLabel(centralWidget);
        label_NOC->setObjectName(QStringLiteral("label_NOC"));
        label_NOC->setGeometry(QRect(300, 240, 191, 111));
        label_NOC->setLineWidth(1);
        label_NOC->setScaledContents(true);
        label_NOC->setWordWrap(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\236\320\261\321\212\320\265\320\272\321\202\320\275\320\276-\320\276\321\200\320\270\320\265\320\275\321\202\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265 \320\274\320\265\321\202\321\200\320\270\320\272\320\270", 0));
        openFile_Button->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", 0));
        label_averNumMethLines->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 \320\272\320\276\320\264\320\260 \320\275\320\260 \320\274\320\265\321\202\320\276\320\264:", 0));
        calculate_Button->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\264\321\201\321\207\321\221\321\202", 0));
        label_averNumModuleLines->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 \320\272\320\276\320\264\320\260 \320\275\320\260 \320\274\320\276\320\264\321\203\320\273\321\214", 0));
        label_averNumClassLines->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 \320\272\320\276\320\264\320\260 \320\275\320\260 \320\272\320\273\320\260\321\201\321\201:", 0));
        label_NORM->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\320\267\320\276\320\262\320\276\320\262 \321\203\320\264\320\260\320\273\320\265\320\275\320\275\321\213\321\205 \320\274\320\265\321\202\320\276\320\264\320\276\320\262", 0));
        label_RFC->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\320\270\320\272 \320\275\320\260 \320\272\320\273\320\260\321\201\321\201:", 0));
        label_WMC->setText(QApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\320\260\321\217 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\262\321\201\320\265\321\205 \320\274\320\265\321\202\320\276\320\264\320\276\320\262 \320\272\320\273\320\260\321\201\321\201\320\260:", 0));
        label_NOC->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
