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
    QPlainTextEdit *plainTextEdit;
    QPushButton *analyseButton;
    QLabel *labelSLOC;
    QLabel *labelEL;
    QLabel *labelComments;
    QLabel *labelOnlyCode;
    QLabel *labelOperators;
    QLabel *labelOperands;
    QLabel *labelTOpertators;
    QLabel *labelTotalOperands;
    QLabel *labelLengthVoc;
    QLabel *labelLength;
    QLabel *labelCyclomatic;
    QLabel *labelCI;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(562, 363);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 271, 261));
        analyseButton = new QPushButton(centralWidget);
        analyseButton->setObjectName(QStringLiteral("analyseButton"));
        analyseButton->setGeometry(QRect(80, 310, 131, 31));
        labelSLOC = new QLabel(centralWidget);
        labelSLOC->setObjectName(QStringLiteral("labelSLOC"));
        labelSLOC->setGeometry(QRect(290, 10, 201, 16));
        labelEL = new QLabel(centralWidget);
        labelEL->setObjectName(QStringLiteral("labelEL"));
        labelEL->setGeometry(QRect(290, 40, 201, 16));
        labelComments = new QLabel(centralWidget);
        labelComments->setObjectName(QStringLiteral("labelComments"));
        labelComments->setGeometry(QRect(290, 70, 201, 16));
        labelOnlyCode = new QLabel(centralWidget);
        labelOnlyCode->setObjectName(QStringLiteral("labelOnlyCode"));
        labelOnlyCode->setGeometry(QRect(290, 100, 201, 16));
        labelOperators = new QLabel(centralWidget);
        labelOperators->setObjectName(QStringLiteral("labelOperators"));
        labelOperators->setGeometry(QRect(290, 130, 201, 16));
        labelOperands = new QLabel(centralWidget);
        labelOperands->setObjectName(QStringLiteral("labelOperands"));
        labelOperands->setGeometry(QRect(290, 160, 201, 16));
        labelTOpertators = new QLabel(centralWidget);
        labelTOpertators->setObjectName(QStringLiteral("labelTOpertators"));
        labelTOpertators->setGeometry(QRect(290, 190, 201, 16));
        labelTotalOperands = new QLabel(centralWidget);
        labelTotalOperands->setObjectName(QStringLiteral("labelTotalOperands"));
        labelTotalOperands->setGeometry(QRect(290, 220, 201, 16));
        labelLengthVoc = new QLabel(centralWidget);
        labelLengthVoc->setObjectName(QStringLiteral("labelLengthVoc"));
        labelLengthVoc->setGeometry(QRect(290, 250, 201, 16));
        labelLength = new QLabel(centralWidget);
        labelLength->setObjectName(QStringLiteral("labelLength"));
        labelLength->setGeometry(QRect(290, 280, 201, 16));
        labelCyclomatic = new QLabel(centralWidget);
        labelCyclomatic->setObjectName(QStringLiteral("labelCyclomatic"));
        labelCyclomatic->setGeometry(QRect(290, 310, 201, 16));
        labelCI = new QLabel(centralWidget);
        labelCI->setObjectName(QStringLiteral("labelCI"));
        labelCI->setGeometry(QRect(290, 340, 201, 16));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\275\320\260\320\273\320\270\320\267 \320\272\320\276\320\264\320\260", 0));
        analyseButton->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\260\320\275\320\260\320\273\320\270\320\267\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        labelSLOC->setText(QString());
        labelEL->setText(QString());
        labelComments->setText(QString());
        labelOnlyCode->setText(QString());
        labelOperators->setText(QString());
        labelOperands->setText(QString());
        labelTOpertators->setText(QString());
        labelTotalOperands->setText(QString());
        labelLengthVoc->setText(QString());
        labelLength->setText(QString());
        labelCyclomatic->setText(QString());
        labelCI->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
