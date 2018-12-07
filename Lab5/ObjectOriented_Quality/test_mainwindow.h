#ifndef TEST_MAINWINDOW
#define TEST_MAINWINDOW

#include <QObject>

class Test_MainWindow:public QObject
{

    Q_OBJECT
private slots:
    void RFC_data();
    void RFC();
};

#endif // TEST_MAINWINDOW

