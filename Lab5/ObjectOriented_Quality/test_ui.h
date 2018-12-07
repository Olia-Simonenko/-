#ifndef TEST_UI_H
#define TEST_UI_H

#include <QtTest>
#include <QtWidgets>
#include <QtGui>

class Test_ui: public QObject
{
    Q_OBJECT
 private slots: // должны быть приватными
     void label();
};

#endif // TEST_UI_H
