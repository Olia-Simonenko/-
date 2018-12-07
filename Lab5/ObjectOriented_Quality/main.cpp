#include "mainwindow.h"
#include <QApplication>
#include <QTest>
#include "test_mainwindow.h"
#include "test_ui.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();
    QTest::qExec(new Test_MainWindow, argc, argv);
    QTest::qExec(new Test_ui, argc, argv);
    return a.exec();
}
