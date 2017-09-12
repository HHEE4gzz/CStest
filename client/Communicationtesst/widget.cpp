#include "widget.h"
#include "ui_widget.h"
#include "settingrw.h"
#include <iostream>
using namespace std;

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpSocket = new QTcpSocket( this );
   // ui->lineEdit->setText("192.168.244.66");
   // ui->lineEdit_2->setText("2017");

    connect( tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(displayError(QAbstractSocket::SocketError)));

    connect( ui->pushButton, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));

    connect( tcpSocket, SIGNAL(readyRead()), this, SLOT(readMessage()));

}

Widget::~Widget()
{
    delete ui;
}

//连接
void Widget::newConnect()
{
    //blockeSize=0;
    tcpSocket->abort();
    tcpSocket->connectToHost(ui->lineEdit->text(),
                             ui->lineEdit_2->text().toInt());
    //tcpSocket->connectToHost(ui->lineEdit->text(),ui->lineEdit_2->text().toInt());
    if (tcpSocket->waitForConnected(1000))
    {
        qDebug()<<"连接成功！"<<endl;
        ui->textBrowser_2->setText("成功！");
    }
    else
        ui->textBrowser_2->setText("超时！");
}


void Widget::on_pushButton_clicked()
{
    newConnect();

    if(!tcpSocket->waitForConnected(2))
    {
        tcpSocket->disconnectFromHost();
        return;
    }
}






//输入键值


void Widget::on_pushButton_2_clicked()
{
    QString strtext=ui->lineEdit_3->text();
    QString tmp = "S+"+strtext+"+E";
    strtext=tmp;
    if (!strtext.isEmpty())
    {
        tcpSocket->write(strtext.toStdString().data());
        ui->lineEdit_3->clear();
        ui->lineEdit_3->setFocus();
    }
}



//显示结果

void Widget::readMessage()
{
    //QDataStream in(tcpSocket);
    //in.setVersion((QDatastream::Qt_4_6));
    QString res1,res2;
    res1+=tcpSocket->readAll();
    QStringList sections = res1.split(QRegExp("[+]"));
    QString tmp = sections.at(1)+"="+sections.at(2);
    res1=tmp;
    SettingRW::iniChange(QString("Setting.ini"), QString("test"),sections.at(1) ,sections.at(2));

   // if res1
    ui->textBrowser->setText(res1);
    ui->textBrowser->moveCursor(QTextCursor::End);
}

//出错

void Widget::displayError(QAbstractSocket::SocketError)
{
    qDebug()<< tcpSocket->errorString();
    //qWarning("this is error!!!");
}

