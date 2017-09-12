/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 61, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 61, 31));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 30, 113, 20));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(90, 60, 113, 20));
        lineEdit_3 = new QLineEdit(Widget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(90, 130, 113, 20));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 130, 51, 21));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 40, 75, 23));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 130, 75, 23));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 160, 71, 21));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 190, 256, 91));
        textBrowser_2 = new QTextBrowser(Widget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(110, 90, 141, 21));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "\345\257\271\346\226\271IP", 0));
        label_2->setText(QApplication::translate("Widget", "\345\257\271\346\226\271\347\253\257\345\217\243", 0));
        lineEdit->setText(QApplication::translate("Widget", "192.168.1.100", 0));
        lineEdit_2->setText(QApplication::translate("Widget", "8080", 0));
        lineEdit_3->setText(QString());
        label_4->setText(QApplication::translate("Widget", "\351\224\256\345\220\215", 0));
        pushButton->setText(QApplication::translate("Widget", "\350\277\236\346\216\245", 0));
        pushButton_2->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", 0));
        label_5->setText(QApplication::translate("Widget", "\346\234\215\345\212\241\347\253\257\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
