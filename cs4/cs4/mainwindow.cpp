#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    labelName[0] = ui->label_data01;
    labelName[1] = ui->label_data02;
    labelName[2] = ui->label_data03;
    labelName[3] = ui->label_data04;
    labelName[4] = ui->label_data05;
    labelName[5] = ui->label_data06;
    labelName[6] = ui->label_data07;
    labelName[7] = ui->label_data08;
    labelName[8] = ui->label_data09;
    labelName[9] = ui->label_data10;
    labelName[10] = ui->label_data11;
    labelName[11] = ui->label_data12;
    labelName[12] = ui->label_data13;
    labelName[13] = ui->label_data14;
    labelName[14] = ui->label_data15;
    labelName[15] = ui->label_data16;

    lineEditVal[0] = ui->FileDataEdit_01;
    lineEditVal[1] = ui->FileDataEdit_02;
    lineEditVal[2] = ui->FileDataEdit_03;
    lineEditVal[3] = ui->FileDataEdit_04;
    lineEditVal[4] = ui->FileDataEdit_05;
    lineEditVal[5] = ui->FileDataEdit_06;
    lineEditVal[6] = ui->FileDataEdit_07;
    lineEditVal[7] = ui->FileDataEdit_08;
    lineEditVal[8] = ui->FileDataEdit_09;
    lineEditVal[9] = ui->FileDataEdit_10;
    lineEditVal[10] = ui->FileDataEdit_11;
    lineEditVal[11] = ui->FileDataEdit_12;
    lineEditVal[12] = ui->FileDataEdit_13;
    lineEditVal[13] = ui->FileDataEdit_14;
    lineEditVal[14] = ui->FileDataEdit_15;
    lineEditVal[15] = ui->FileDataEdit_16;

    m_tcpservice = new TCPService();
    connect(m_tcpservice,SIGNAL(sigGETMSG()),this,SLOT(on_getMsg()));
    connect(m_tcpservice,SIGNAL(sigREPLY()),this,SLOT(on_replyMsg()));

    this->on_ReadFileDataBtn_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_ReadFileDataBtn_clicked()
{
    for(int i=0;i<16;i++)
    {
      QString tmp;
      tmp= SettingRW::iniRead(QString("Setting.ini"), QString("test"),labelName[i]->text(), tmp);
      lineEditVal[i]->setText(tmp);
    }
}

void MainWindow::on_WriteFileDataBtn_clicked()
{
    for(int i=0;i<16;i++)
    {
        //SettingRW::iniChange(QString("setting.ini"), QString("test"), QString("three"), QString("111"));
        SettingRW::iniChange(QString("Setting.ini"), QString("test"), labelName[i]->text(), lineEditVal[i]->text());
    }
}

void MainWindow::on_getMsg()
{
    QString str = m_tcpservice->getmsg();
    ui->ReceieMsgDisplayText->setText(str);
    //m_tcpservice->postmsg(str);
    //ui->SendMsgDisplayText->setText(str);
}

void MainWindow::on_replyMsg()
{
    QString msg = m_tcpservice->getmsg();
    QString target = m_tcpservice->AnalyzeMsgfromclient(msg);
    QString tmp;
    tmp= SettingRW::iniRead(QString("Setting.ini"), QString("test"),target, tmp);

    QString ans = m_tcpservice->ReplyMsgtoclient(target,tmp);
    ui->SendMsgDisplayText->setText(ans);


}


