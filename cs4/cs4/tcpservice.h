#ifndef TCPSERVICE_H
#define TCPSERVICE_H

#include <QTcpServer>
#include <QTcpSocket>
#include<QNetworkInterface>
class TCPService : public QObject
{
    Q_OBJECT
public:
    TCPService();
    QString getmsg();
    void postmsg(QString infomation);
    QString AnalyzeMsgfromclient(QString infomation);
    QString ReplyMsgtoclient(QString name,QString val);
signals:
    void sigGETMSG();
    void sigREPLY();
private slots:
    void newConnect();
    void sendMessage(QString infomation);
    void readMessage();

private:
    QTcpSocket *m_tcpsocket;
    QTcpServer *m_tcpserver;
    QList<QTcpSocket*> *socket_list;
    QString msgfromclient;
};

#endif // TCPSERVICE_H
