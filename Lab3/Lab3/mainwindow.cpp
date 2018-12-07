#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QtDebug>

int n1, n2, m, N1, N2, N, Ropt;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_analyseButton_clicked()
{
    // Получаем строку из пользовательского интерфейса
    QString str = ui->plainTextEdit->toPlainText();

    // Всего строк
    int nSLOC = str.count("\n");
    MainWindow::ui->labelSLOC->setText("Всего строк: " + QString::number(nSLOC+1));

    // Пустых строк
    int nEL = str.count("\n\n");
    ui->labelEL->setText("Пустых строк: " + QString::number(nEL));

    // Комментариев
    int nCom = str.count("//");
    ui->labelComments->setText("Комментариев: "+QString::number(nCom)+" "+QString::number(((float)nCom)/(nSLOC+1)*100)+"%");

    //Строк чистого кода
    ui->labelOnlyCode->setText("Строк чистого кода: "+ QString::number((nSLOC+1)-nCom-nEL));

    //Операторы
    QStringList listOperators = str.split(" ");
    QString typesOperators = "+ - = += -= ++ -- * << >> < > != == || && & |";
    QStringList splitList = str.split(QRegExp("(void, int, string, float, double, byte)[A-Za-z0-9]*"),QString::SkipEmptyParts);
    QStringList sTypes;
    QStringList result;
    listOperators.removeDuplicates();
    sTypes = typesOperators.split(" ");

    QStringList::Iterator iter = sTypes.begin();
    for(int i = listOperators.count()-1; i>=0; --i)
    {
        const QString& item = listOperators[i];
        iter=sTypes.begin();
        while(iter!=sTypes.end())
        {
            if(item== *iter)
            {
                result<<item;
            }
            ++iter;
        }
    }
    int r = 0;
    for(int i = splitList.count()-1;i>=0;--i)
    {
        const QString& item = splitList[i];
        r=r+item.count(")\n");
    }
    Ropt=r;
    n1 = result.count();

    ui->labelOperators->setText("Видов операторов: " + QString::number(result.count()+r));

    //Операнды
    QRegExp rx("([\\w\\']+)[\\s,.;]");
    QStringList listOperands;
    int pos = 0;
    while ((pos = rx.indexIn(str, pos)) != -1) {
        listOperands << rx.cap(1);
        pos += rx.matchedLength();
    }
    listOperands.removeDuplicates ();
    QString typesOperands = "int void string double float iterator List const array for while do goto";
    QStringList ltypes;
    ltypes = typesOperands.split(" ");
    QStringList::Iterator itt = ltypes.begin();
    for(int i = listOperands.count()-1; i >= 0; --i)
    {
        const QString& item = listOperands[i];
        itt = ltypes.begin();
        while (itt != ltypes.end()){
            if(item==*itt)
                listOperands.removeAt(i);
            ++itt;}
        if ((item.toFloat()!=0)) {listOperands.removeAt(i);}

    }

    for(int i = listOperands.count()-1; i >= 0; --i)
    {
        const QString& item = listOperands[i];
        if (item=="0") {listOperands.removeAt(i);}
    }
    n2=listOperands.count();
    ui->labelOperands->setText("Видов операндов: "+QString::number(listOperands.count()));

    // Всего операторов
    QStringList listTOpertator = str.split(" ");

    QString typesTotOp = "+ - = += ++ -- * << >> < > != == || && &";
    QStringList newtypesTotOp;
    QStringList ress;
    newtypesTotOp = typesTotOp.split(" ");
    QStringList::Iterator itTotOp = newtypesTotOp.begin();
    for(int i = listTOpertator.count()-1; i >= 0; --i)
    {
        const QString& item = listTOpertator[i];
        itTotOp = newtypesTotOp.begin();
        while (itTotOp != newtypesTotOp.end()){
            if(item==*itTotOp){
                ress << item;
            }
            ++itTotOp;
        }
    }
    N1 = ress.count();
    ui->labelTOpertators->setText("Всего операторов: "+ QString::number(ress.count()+Ropt));

    // Всего операндов
    QRegExp regExp("([\\w\\']+)[\\s,.;]");
    QStringList listTotOd;
    int p = 0;
    while ((p = regExp.indexIn(str, p)) != -1) {
        listTotOd << regExp.cap(1);
        p += regExp.matchedLength();
    }

    QString types = "int void string double float iterator List const array for while do goto";
    QStringList ltypesTotOd;
    ltypesTotOd = types.split(" ");
    QStringList::Iterator itTotOd = ltypesTotOd.begin();
    for(int i = listTotOd.count()-1; i >= 0; --i)
    {
        const QString& item = listTotOd[i];
        itTotOd = ltypesTotOd.begin();
        while (itTotOd != ltypesTotOd.end()){
            if(item==*itTotOd)
                listTotOd.removeAt(i);
            ++itTotOd;}
        if ((item.toFloat()!=0)) {listTotOd.removeAt(i);}

    }

    for(int i = listTotOd.count()-1; i >= 0; --i)
    {
        const QString& item = listTotOd[i];
        if (item=="0") {listTotOd.removeAt(i);}
    }
    N2 = listTotOd.count();

    ui->labelTotalOperands->setText("Всего операндов: "+ QString::number(listTotOd.count()));

    //Продолжительность программы
    m=n1+n2+Ropt;
    ui->labelLengthVoc->setText("Видов слов: "+ QString::number(m));

    N=N1+N2+Ropt;
    ui->labelLength->setText("Количество слов: "+ QString::number(N));

    //Цикломатическая
    QStringList listCyclo = str.split(QRegExp("(for|while)"),  QString::SkipEmptyParts);

    int s=0;
    for(int i = listCyclo.count()-1; i >= 0; --i)
    {
        const QString& item = listCyclo[i];
        if ((item.count("{")>=item.count("}"))&&(item.count("}")!=0)) {s=s+1;  /*ui->plainTextEdit->insertPlainText(*it+"+++");*/}
    }
    ui->labelCyclomatic->setText("Цикломатическая:" + QString::number(s+str.count("if(")));

    //Вложеность
    int n = str.count("if(");
    ui->labelCI->setText("Вложеность: "+ QString::number(n));
}
