#include <QTest>
#include <QtGui>
#include <QLabel>
#include "test_ui.h"
#include "mainwindow.h"

void Test_ui::label()
{
    QLabel *myLabel = new QLabel();
    myLabel->setText("text");

    QTest::keyClicks(myLabel,"text");
    QCOMPARE(myLabel->text(), QString("text"));
}
