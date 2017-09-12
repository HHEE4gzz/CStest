#include "tcpservice.h"
#include <QString>
TCPService::TCPService()
{
    msgfromclient = "";
    m_tcpserver = new QTcpServer();
    m_tcpsocket = new QTcpSocket();
    socket_list = new QList<QTcpSocket*>;
    m_tcpserver->listen(QHostAddress::Any,8080);
    connect(m_tcpserver,SIGNAL(newConnection()),this,SLOT(newConnect()));
    QList<QNetworkInterface> list=QNetworkInterface::allInterfaces();//获取所有网络接口信息
    foreach(QNetworkInterface interface,list)
    {
        QList<QNetworkAddressEntry>entryList=interface.addressEntries();//获取ip地址和子网掩码和广播地址
        foreach(QNetworkAddressEntry entry,entryList)
        {//遍历ip条目列表
            qDebug()<<"IP address："<<entry.ip().toString();//获取ip
        }
    }
}

QString TCPService::getmsg()
{
    return msgfromclient;
}

void TCPService::postmsg(QString infomation)
{
    sendMessage(infomation);
}

QString TCPService::AnalyzeMsgfromclient(QString infomation)
{
    //S+NAME+VAL+E
    //QString str = "S+1+101+E";
    QStringList sections = infomation.split(QRegExp("[+]")); //把每一个块装进一个QStringList中
//    for(int i=0;i<sections.count();i++)
//    {
//        sections.at(i).trimmed().toStdString();
//    }
//    if(sections.at(0)!="S"||sections.at(sections.count()-1)!="E")
//    {
//        sections.removeAll()
//    }
    qDebug()<<"sections.at(1)="<<sections.at(1);
    return sections.at(1);
}

QString TCPService::ReplyMsgtoclient(QString name, QString val)
{
    QString FrameHeader = "S";
    QString FrameEnd = "E";
    QString ans = FrameHeader+"+"+name+"+"+val+"+"+FrameEnd;
    this->sendMessage(ans);
    return ans;
}

void TCPService::newConnect()
{
    m_tcpsocket = m_tcpserver->nextPendingConnection();
    socket_list->append(m_tcpsocket);

    connect(m_tcpsocket,SIGNAL(readyRead()),this,SLOT(readMessage()));
    for(int i = 0;i < socket_list->length();i ++)
    {
        qDebug() <<"有新连接啦>>>>>";
        qDebug() <<socket_list->at(i)->peerName()<<"::"
                <<socket_list->at(i)->peerAddress()<<"::"
               <<socket_list->at(i)->peerPort();
    }
}

void TCPService::readMessage()
{
    QString message="";
    qDebug() << "server message:" ;
    for(int i = 0;i < socket_list->length();i ++)
    {
        message = socket_list->at(i)->readAll();
        if(message!="")
        {
            qDebug() <<i<<">>"<<message;
            msgfromclient = message;
            emit sigGETMSG();
            emit sigREPLY();
        }
    }


}
void TCPService::sendMessage(QString infomation)
{
    QString str = infomation;
    for (int i = 0;i < socket_list->length();i ++)
    {
        socket_list->at(i)->write(str.toStdString().c_str());
        qDebug()<<"SEND MESSAGE:"<<str.toStdString().c_str();
    }
}
