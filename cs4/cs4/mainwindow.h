#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include "settingrw.h"
#include "tcpservice.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_ReadFileDataBtn_clicked();

    void on_WriteFileDataBtn_clicked();

    void on_getMsg();

    void on_replyMsg();

private:
    Ui::MainWindow *ui;
    QLabel *labelName[16];
    QLineEdit *lineEditVal[16];
    TCPService *m_tcpservice;
};

#endif // MAINWINDOW_H
