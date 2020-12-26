/********************************************************************************
** Form generated from reading UI file 'TelaDeLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELADELOGIN_H
#define UI_TELADELOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaDeLogin
{
public:
    QWidget *centralwidget;
    QLabel *TesteDoBanco;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *nome;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *senha;
    QLineEdit *lineEdit_senha;
    QPushButton *login;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TelaDeLogin)
    {
        if (TelaDeLogin->objectName().isEmpty())
            TelaDeLogin->setObjectName(QString::fromUtf8("TelaDeLogin"));
        TelaDeLogin->resize(545, 308);
        centralwidget = new QWidget(TelaDeLogin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TesteDoBanco = new QLabel(centralwidget);
        TesteDoBanco->setObjectName(QString::fromUtf8("TesteDoBanco"));
        TesteDoBanco->setGeometry(QRect(90, 210, 371, 16));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 110, 361, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nome = new QLabel(layoutWidget);
        nome->setObjectName(QString::fromUtf8("nome"));

        horizontalLayout->addWidget(nome);

        lineEdit_nome = new QLineEdit(layoutWidget);
        lineEdit_nome->setObjectName(QString::fromUtf8("lineEdit_nome"));

        horizontalLayout->addWidget(lineEdit_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        senha = new QLabel(layoutWidget);
        senha->setObjectName(QString::fromUtf8("senha"));

        horizontalLayout_2->addWidget(senha);

        lineEdit_senha = new QLineEdit(layoutWidget);
        lineEdit_senha->setObjectName(QString::fromUtf8("lineEdit_senha"));
        lineEdit_senha->setAcceptDrops(true);
        lineEdit_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        login = new QPushButton(layoutWidget);
        login->setObjectName(QString::fromUtf8("login"));

        verticalLayout->addWidget(login);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 381, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(36);
        label->setFont(font);
        TelaDeLogin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TelaDeLogin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 545, 21));
        TelaDeLogin->setMenuBar(menubar);
        statusbar = new QStatusBar(TelaDeLogin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        TelaDeLogin->setStatusBar(statusbar);

        retranslateUi(TelaDeLogin);

        QMetaObject::connectSlotsByName(TelaDeLogin);
    } // setupUi

    void retranslateUi(QMainWindow *TelaDeLogin)
    {
        TelaDeLogin->setWindowTitle(QApplication::translate("TelaDeLogin", "TelaDeLogin", nullptr));
        TesteDoBanco->setText(QString());
        nome->setText(QApplication::translate("TelaDeLogin", "Usuario:", nullptr));
        senha->setText(QApplication::translate("TelaDeLogin", "Senha:", nullptr));
        login->setText(QApplication::translate("TelaDeLogin", "Login", nullptr));
        label->setText(QApplication::translate("TelaDeLogin", "     Login LOCA+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaDeLogin: public Ui_TelaDeLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELADELOGIN_H
