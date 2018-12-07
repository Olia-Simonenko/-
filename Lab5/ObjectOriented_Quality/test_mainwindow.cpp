#include "test_mainwindow.h"
#include "mainwindow.h"
#include <QTest>
void Test_MainWindow::RFC_data()
{
    QTest::addColumn<QString>("clas");
    QTest::addColumn<int>("result");

    QTest::newRow("test_1")<<" class Human { human() } class Students { students() }"<<2;
    QTest::newRow("test_2")<<"class  Students { student() } class Teacher { teacher() }"<<2;
    QTest::newRow("test_3")<<"class Cat { cat() }"<<1;
    QTest::newRow("test_4")<<"class Dog { dog() }"<<1;
    QTest::newRow("test_5")<<"class Human { human() } class Woman { woman() } class Men { men() }"<<3;

}

void Test_MainWindow::RFC()
{
    MainWindow w;
    QFETCH (QString, clas);
    QFETCH (int, result);

    QCOMPARE(w.RFC(clas),result);

}
