/********************************************************************************
** Form generated from reading UI file 'formularioradiobutton.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIORADIOBUTTON_H
#define UI_FORMULARIORADIOBUTTON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormularioRadioButton
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_resposta;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QRadioButton *radio_linux;
    QRadioButton *radio_windows;
    QRadioButton *radio_macOs;
    QRadioButton *radio_android;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_resposta;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FormularioRadioButton)
    {
        if (FormularioRadioButton->objectName().isEmpty())
            FormularioRadioButton->setObjectName(QString::fromUtf8("FormularioRadioButton"));
        FormularioRadioButton->resize(375, 358);
        centralwidget = new QWidget(FormularioRadioButton);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 311, 41));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 331, 21));
        label_resposta = new QLabel(centralwidget);
        label_resposta->setObjectName(QString::fromUtf8("label_resposta"));
        label_resposta->setGeometry(QRect(20, 260, 281, 41));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 100, 139, 147));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radio_linux = new QRadioButton(widget);
        radio_linux->setObjectName(QString::fromUtf8("radio_linux"));

        verticalLayout->addWidget(radio_linux);

        radio_windows = new QRadioButton(widget);
        radio_windows->setObjectName(QString::fromUtf8("radio_windows"));

        verticalLayout->addWidget(radio_windows);

        radio_macOs = new QRadioButton(widget);
        radio_macOs->setObjectName(QString::fromUtf8("radio_macOs"));

        verticalLayout->addWidget(radio_macOs);

        radio_android = new QRadioButton(widget);
        radio_android->setObjectName(QString::fromUtf8("radio_android"));

        verticalLayout->addWidget(radio_android);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_resposta = new QPushButton(widget);
        btn_resposta->setObjectName(QString::fromUtf8("btn_resposta"));

        horizontalLayout->addWidget(btn_resposta);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        FormularioRadioButton->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FormularioRadioButton);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 375, 22));
        FormularioRadioButton->setMenuBar(menubar);
        statusbar = new QStatusBar(FormularioRadioButton);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FormularioRadioButton->setStatusBar(statusbar);

        retranslateUi(FormularioRadioButton);

        QMetaObject::connectSlotsByName(FormularioRadioButton);
    } // setupUi

    void retranslateUi(QMainWindow *FormularioRadioButton)
    {
        FormularioRadioButton->setWindowTitle(QCoreApplication::translate("FormularioRadioButton", "FormularioRadioButton", nullptr));
        label->setText(QCoreApplication::translate("FormularioRadioButton", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700;\">Question\303\241rio</span></h1></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("FormularioRadioButton", "<h2> Qual o seu sistema opracional ? </h2>", nullptr));
        label_resposta->setText(QString());
        radio_linux->setText(QCoreApplication::translate("FormularioRadioButton", "linux", nullptr));
        radio_windows->setText(QCoreApplication::translate("FormularioRadioButton", "Windows", nullptr));
        radio_macOs->setText(QCoreApplication::translate("FormularioRadioButton", "MacOs", nullptr));
        radio_android->setText(QCoreApplication::translate("FormularioRadioButton", "Android", nullptr));
        btn_resposta->setText(QCoreApplication::translate("FormularioRadioButton", "Responder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormularioRadioButton: public Ui_FormularioRadioButton {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIORADIOBUTTON_H
