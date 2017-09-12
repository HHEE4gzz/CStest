#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//#include <QNetwork>
#include <QTcpServer>
#include <QTcpSocket>
#include<QNetworkInterface>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_pushButton_clicked();

    void newConnect();
    void readMessage();
    void displayError(QAbstractSocket::SocketError);


    void on_pushButton_2_clicked();


//    void on_lineEdit_3_textEdited(const QString &arg1);
//    void on_lineEdit_2_textEdited(const QString &arg1);
//    void on_lineEdit_textEdited(const QString &arg1);

//    void on_lineEdit_4_textEdited(const QString &arg1);

  //  void on_textBrowser_textChanged();

private:
    Ui::Widget *ui;
    QTcpSocket *tcpSocket;
   // QString message;
   // quint16 blocksize;
};

#endif // WIDGET_H
