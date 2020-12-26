/********************************************************************************
** Form generated from reading UI file 'TelaInicioClienteJuridico.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIOCLIENTEJURIDICO_H
#define UI_TELAINICIOCLIENTEJURIDICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicioClienteJuridico
{
public:
    QPushButton *Incluir;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *CNPJ;
    QLineEdit *lineEdit_CNPJ;
    QHBoxLayout *horizontalLayout_2;
    QLabel *NomeCLienteJuridico;
    QLineEdit *lineEdit_NomeCliente;
    QHBoxLayout *horizontalLayout_4;
    QLabel *NomeFantasia;
    QLineEdit *lineEdit_NomeFantasia;
    QHBoxLayout *horizontalLayout_5;
    QLabel *RazaoSocial;
    QLineEdit *lineEdit_RazaoSocial;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Telefone;
    QLineEdit *lineEdit_Telefone;
    QPushButton *Listar;
    QPushButton *Voltar;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Email;
    QLineEdit *lineEdit_Email;
    QLabel *label;

    void setupUi(QDialog *TelaInicioClienteJuridico)
    {
        if (TelaInicioClienteJuridico->objectName().isEmpty())
            TelaInicioClienteJuridico->setObjectName(QString::fromUtf8("TelaInicioClienteJuridico"));
        TelaInicioClienteJuridico->resize(684, 461);
        Incluir = new QPushButton(TelaInicioClienteJuridico);
        Incluir->setObjectName(QString::fromUtf8("Incluir"));
        Incluir->setGeometry(QRect(140, 400, 151, 41));
        layoutWidget = new QWidget(TelaInicioClienteJuridico);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(16, 70, 641, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CNPJ = new QLabel(layoutWidget);
        CNPJ->setObjectName(QString::fromUtf8("CNPJ"));

        horizontalLayout->addWidget(CNPJ);

        lineEdit_CNPJ = new QLineEdit(layoutWidget);
        lineEdit_CNPJ->setObjectName(QString::fromUtf8("lineEdit_CNPJ"));

        horizontalLayout->addWidget(lineEdit_CNPJ);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        NomeCLienteJuridico = new QLabel(layoutWidget);
        NomeCLienteJuridico->setObjectName(QString::fromUtf8("NomeCLienteJuridico"));

        horizontalLayout_2->addWidget(NomeCLienteJuridico);

        lineEdit_NomeCliente = new QLineEdit(layoutWidget);
        lineEdit_NomeCliente->setObjectName(QString::fromUtf8("lineEdit_NomeCliente"));

        horizontalLayout_2->addWidget(lineEdit_NomeCliente);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        NomeFantasia = new QLabel(layoutWidget);
        NomeFantasia->setObjectName(QString::fromUtf8("NomeFantasia"));

        horizontalLayout_4->addWidget(NomeFantasia);

        lineEdit_NomeFantasia = new QLineEdit(layoutWidget);
        lineEdit_NomeFantasia->setObjectName(QString::fromUtf8("lineEdit_NomeFantasia"));

        horizontalLayout_4->addWidget(lineEdit_NomeFantasia);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        RazaoSocial = new QLabel(layoutWidget);
        RazaoSocial->setObjectName(QString::fromUtf8("RazaoSocial"));

        horizontalLayout_5->addWidget(RazaoSocial);

        lineEdit_RazaoSocial = new QLineEdit(layoutWidget);
        lineEdit_RazaoSocial->setObjectName(QString::fromUtf8("lineEdit_RazaoSocial"));

        horizontalLayout_5->addWidget(lineEdit_RazaoSocial);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        Telefone = new QLabel(layoutWidget);
        Telefone->setObjectName(QString::fromUtf8("Telefone"));

        horizontalLayout_6->addWidget(Telefone);

        lineEdit_Telefone = new QLineEdit(layoutWidget);
        lineEdit_Telefone->setObjectName(QString::fromUtf8("lineEdit_Telefone"));

        horizontalLayout_6->addWidget(lineEdit_Telefone);


        verticalLayout->addLayout(horizontalLayout_6);

        Listar = new QPushButton(TelaInicioClienteJuridico);
        Listar->setObjectName(QString::fromUtf8("Listar"));
        Listar->setGeometry(QRect(380, 400, 161, 41));
        Voltar = new QPushButton(TelaInicioClienteJuridico);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(20, 10, 75, 41));
        layoutWidget1 = new QWidget(TelaInicioClienteJuridico);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 360, 641, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Email = new QLabel(layoutWidget1);
        Email->setObjectName(QString::fromUtf8("Email"));

        horizontalLayout_3->addWidget(Email);

        lineEdit_Email = new QLineEdit(layoutWidget1);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));

        horizontalLayout_3->addWidget(lineEdit_Email);

        label = new QLabel(TelaInicioClienteJuridico);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 10, 221, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(TelaInicioClienteJuridico);

        QMetaObject::connectSlotsByName(TelaInicioClienteJuridico);
    } // setupUi

    void retranslateUi(QDialog *TelaInicioClienteJuridico)
    {
        TelaInicioClienteJuridico->setWindowTitle(QApplication::translate("TelaInicioClienteJuridico", "Dialog", nullptr));
        Incluir->setText(QApplication::translate("TelaInicioClienteJuridico", "CADASTRAR", nullptr));
        CNPJ->setText(QApplication::translate("TelaInicioClienteJuridico", "CNPJ", nullptr));
        NomeCLienteJuridico->setText(QApplication::translate("TelaInicioClienteJuridico", "Nome Cliente Juridico", nullptr));
        NomeFantasia->setText(QApplication::translate("TelaInicioClienteJuridico", "Nome Fantasia", nullptr));
        RazaoSocial->setText(QApplication::translate("TelaInicioClienteJuridico", "Raz\303\243o Social", nullptr));
        Telefone->setText(QApplication::translate("TelaInicioClienteJuridico", "Telefone", nullptr));
        Listar->setText(QApplication::translate("TelaInicioClienteJuridico", "BUSCAR", nullptr));
        Voltar->setText(QApplication::translate("TelaInicioClienteJuridico", "Voltar", nullptr));
        Email->setText(QApplication::translate("TelaInicioClienteJuridico", "Email", nullptr));
        label->setText(QApplication::translate("TelaInicioClienteJuridico", "Cliente Jur\303\255dico", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicioClienteJuridico: public Ui_TelaInicioClienteJuridico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIOCLIENTEJURIDICO_H
