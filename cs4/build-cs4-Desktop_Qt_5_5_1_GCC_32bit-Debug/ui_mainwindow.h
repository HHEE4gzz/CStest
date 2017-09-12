/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_receive;
    QLabel *label_send;
    QVBoxLayout *verticalLayout;
    QTextBrowser *ReceieMsgDisplayText;
    QTextBrowser *SendMsgDisplayText;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_data09;
    QLineEdit *FileDataEdit_04;
    QLabel *label_data02;
    QLineEdit *FileDataEdit_09;
    QLabel *label_data01;
    QLineEdit *FileDataEdit_01;
    QLabel *label_data13;
    QLabel *label_data05;
    QLabel *label_data04;
    QLineEdit *FileDataEdit_02;
    QLineEdit *FileDataEdit_05;
    QLineEdit *FileDataEdit_03;
    QLineEdit *FileDataEdit_13;
    QLineEdit *FileDataEdit_06;
    QLineEdit *FileDataEdit_07;
    QLineEdit *FileDataEdit_08;
    QLineEdit *FileDataEdit_10;
    QLineEdit *FileDataEdit_11;
    QLineEdit *FileDataEdit_12;
    QLineEdit *FileDataEdit_14;
    QLineEdit *FileDataEdit_15;
    QLineEdit *FileDataEdit_16;
    QLabel *label_data06;
    QLabel *label_data10;
    QLabel *label_data14;
    QLabel *label_data15;
    QLabel *label_data16;
    QLabel *label_data07;
    QLabel *label_data11;
    QLabel *label_data08;
    QLabel *label_data12;
    QLabel *label_data03;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *ReadFileDataBtn;
    QPushButton *WriteFileDataBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(775, 505);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 30, 741, 166));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_receive = new QLabel(horizontalLayoutWidget);
        label_receive->setObjectName(QStringLiteral("label_receive"));

        verticalLayout_2->addWidget(label_receive);

        label_send = new QLabel(horizontalLayoutWidget);
        label_send->setObjectName(QStringLiteral("label_send"));

        verticalLayout_2->addWidget(label_send);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ReceieMsgDisplayText = new QTextBrowser(horizontalLayoutWidget);
        ReceieMsgDisplayText->setObjectName(QStringLiteral("ReceieMsgDisplayText"));

        verticalLayout->addWidget(ReceieMsgDisplayText);

        SendMsgDisplayText = new QTextBrowser(horizontalLayoutWidget);
        SendMsgDisplayText->setObjectName(QStringLiteral("SendMsgDisplayText"));

        verticalLayout->addWidget(SendMsgDisplayText);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(20, 200, 741, 171));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_data09 = new QLabel(verticalLayoutWidget_3);
        label_data09->setObjectName(QStringLiteral("label_data09"));

        gridLayout_2->addWidget(label_data09, 0, 4, 1, 1);

        FileDataEdit_04 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_04->setObjectName(QStringLiteral("FileDataEdit_04"));

        gridLayout_2->addWidget(FileDataEdit_04, 3, 1, 1, 1);

        label_data02 = new QLabel(verticalLayoutWidget_3);
        label_data02->setObjectName(QStringLiteral("label_data02"));

        gridLayout_2->addWidget(label_data02, 1, 0, 1, 1);

        FileDataEdit_09 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_09->setObjectName(QStringLiteral("FileDataEdit_09"));

        gridLayout_2->addWidget(FileDataEdit_09, 0, 5, 1, 1);

        label_data01 = new QLabel(verticalLayoutWidget_3);
        label_data01->setObjectName(QStringLiteral("label_data01"));

        gridLayout_2->addWidget(label_data01, 0, 0, 1, 1);

        FileDataEdit_01 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_01->setObjectName(QStringLiteral("FileDataEdit_01"));

        gridLayout_2->addWidget(FileDataEdit_01, 0, 1, 1, 1);

        label_data13 = new QLabel(verticalLayoutWidget_3);
        label_data13->setObjectName(QStringLiteral("label_data13"));

        gridLayout_2->addWidget(label_data13, 0, 6, 1, 1);

        label_data05 = new QLabel(verticalLayoutWidget_3);
        label_data05->setObjectName(QStringLiteral("label_data05"));

        gridLayout_2->addWidget(label_data05, 0, 2, 1, 1);

        label_data04 = new QLabel(verticalLayoutWidget_3);
        label_data04->setObjectName(QStringLiteral("label_data04"));

        gridLayout_2->addWidget(label_data04, 3, 0, 1, 1);

        FileDataEdit_02 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_02->setObjectName(QStringLiteral("FileDataEdit_02"));

        gridLayout_2->addWidget(FileDataEdit_02, 1, 1, 1, 1);

        FileDataEdit_05 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_05->setObjectName(QStringLiteral("FileDataEdit_05"));

        gridLayout_2->addWidget(FileDataEdit_05, 0, 3, 1, 1);

        FileDataEdit_03 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_03->setObjectName(QStringLiteral("FileDataEdit_03"));

        gridLayout_2->addWidget(FileDataEdit_03, 2, 1, 1, 1);

        FileDataEdit_13 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_13->setObjectName(QStringLiteral("FileDataEdit_13"));

        gridLayout_2->addWidget(FileDataEdit_13, 0, 7, 1, 1);

        FileDataEdit_06 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_06->setObjectName(QStringLiteral("FileDataEdit_06"));

        gridLayout_2->addWidget(FileDataEdit_06, 1, 3, 1, 1);

        FileDataEdit_07 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_07->setObjectName(QStringLiteral("FileDataEdit_07"));

        gridLayout_2->addWidget(FileDataEdit_07, 2, 3, 1, 1);

        FileDataEdit_08 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_08->setObjectName(QStringLiteral("FileDataEdit_08"));

        gridLayout_2->addWidget(FileDataEdit_08, 3, 3, 1, 1);

        FileDataEdit_10 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_10->setObjectName(QStringLiteral("FileDataEdit_10"));

        gridLayout_2->addWidget(FileDataEdit_10, 1, 5, 1, 1);

        FileDataEdit_11 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_11->setObjectName(QStringLiteral("FileDataEdit_11"));

        gridLayout_2->addWidget(FileDataEdit_11, 2, 5, 1, 1);

        FileDataEdit_12 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_12->setObjectName(QStringLiteral("FileDataEdit_12"));

        gridLayout_2->addWidget(FileDataEdit_12, 3, 5, 1, 1);

        FileDataEdit_14 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_14->setObjectName(QStringLiteral("FileDataEdit_14"));

        gridLayout_2->addWidget(FileDataEdit_14, 1, 7, 1, 1);

        FileDataEdit_15 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_15->setObjectName(QStringLiteral("FileDataEdit_15"));

        gridLayout_2->addWidget(FileDataEdit_15, 2, 7, 1, 1);

        FileDataEdit_16 = new QLineEdit(verticalLayoutWidget_3);
        FileDataEdit_16->setObjectName(QStringLiteral("FileDataEdit_16"));

        gridLayout_2->addWidget(FileDataEdit_16, 3, 7, 1, 1);

        label_data06 = new QLabel(verticalLayoutWidget_3);
        label_data06->setObjectName(QStringLiteral("label_data06"));

        gridLayout_2->addWidget(label_data06, 1, 2, 1, 1);

        label_data10 = new QLabel(verticalLayoutWidget_3);
        label_data10->setObjectName(QStringLiteral("label_data10"));

        gridLayout_2->addWidget(label_data10, 1, 4, 1, 1);

        label_data14 = new QLabel(verticalLayoutWidget_3);
        label_data14->setObjectName(QStringLiteral("label_data14"));

        gridLayout_2->addWidget(label_data14, 1, 6, 1, 1);

        label_data15 = new QLabel(verticalLayoutWidget_3);
        label_data15->setObjectName(QStringLiteral("label_data15"));

        gridLayout_2->addWidget(label_data15, 2, 6, 1, 1);

        label_data16 = new QLabel(verticalLayoutWidget_3);
        label_data16->setObjectName(QStringLiteral("label_data16"));

        gridLayout_2->addWidget(label_data16, 3, 6, 1, 1);

        label_data07 = new QLabel(verticalLayoutWidget_3);
        label_data07->setObjectName(QStringLiteral("label_data07"));

        gridLayout_2->addWidget(label_data07, 2, 2, 1, 1);

        label_data11 = new QLabel(verticalLayoutWidget_3);
        label_data11->setObjectName(QStringLiteral("label_data11"));

        gridLayout_2->addWidget(label_data11, 2, 4, 1, 1);

        label_data08 = new QLabel(verticalLayoutWidget_3);
        label_data08->setObjectName(QStringLiteral("label_data08"));

        gridLayout_2->addWidget(label_data08, 3, 2, 1, 1);

        label_data12 = new QLabel(verticalLayoutWidget_3);
        label_data12->setObjectName(QStringLiteral("label_data12"));

        gridLayout_2->addWidget(label_data12, 3, 4, 1, 1);

        label_data03 = new QLabel(verticalLayoutWidget_3);
        label_data03->setObjectName(QStringLiteral("label_data03"));

        gridLayout_2->addWidget(label_data03, 2, 0, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        ReadFileDataBtn = new QPushButton(verticalLayoutWidget_3);
        ReadFileDataBtn->setObjectName(QStringLiteral("ReadFileDataBtn"));

        horizontalLayout_2->addWidget(ReadFileDataBtn);

        WriteFileDataBtn = new QPushButton(verticalLayoutWidget_3);
        WriteFileDataBtn->setObjectName(QStringLiteral("WriteFileDataBtn"));

        horizontalLayout_2->addWidget(WriteFileDataBtn);


        verticalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 775, 31));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Service", 0));
        label_receive->setText(QApplication::translate("MainWindow", "\343\200\200\343\200\200\346\216\245\346\224\266\357\274\232\343\200\200\343\200\200", 0));
        label_send->setText(QApplication::translate("MainWindow", "\343\200\200\343\200\200\345\217\221\351\200\201\357\274\232\343\200\200\343\200\200", 0));
        label_data09->setText(QApplication::translate("MainWindow", "9", 0));
        label_data02->setText(QApplication::translate("MainWindow", "2", 0));
        label_data01->setText(QApplication::translate("MainWindow", "1", 0));
        label_data13->setText(QApplication::translate("MainWindow", "13", 0));
        label_data05->setText(QApplication::translate("MainWindow", "5", 0));
        label_data04->setText(QApplication::translate("MainWindow", "4", 0));
        label_data06->setText(QApplication::translate("MainWindow", "6", 0));
        label_data10->setText(QApplication::translate("MainWindow", "10", 0));
        label_data14->setText(QApplication::translate("MainWindow", "14", 0));
        label_data15->setText(QApplication::translate("MainWindow", "15", 0));
        label_data16->setText(QApplication::translate("MainWindow", "16", 0));
        label_data07->setText(QApplication::translate("MainWindow", "7", 0));
        label_data11->setText(QApplication::translate("MainWindow", "11", 0));
        label_data08->setText(QApplication::translate("MainWindow", "8", 0));
        label_data12->setText(QApplication::translate("MainWindow", "12", 0));
        label_data03->setText(QApplication::translate("MainWindow", "3", 0));
        ReadFileDataBtn->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226\346\225\260\346\215\256", 0));
        WriteFileDataBtn->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245\346\225\260\346\215\256", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
