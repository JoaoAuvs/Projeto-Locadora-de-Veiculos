/********************************************************************************
** Form generated from reading UI file 'TelaAlterarClienteJuridico.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAALTERARCLIENTEJURIDICO_H
#define UI_TELAALTERARCLIENTEJURIDICO_H

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

class Ui_TelaAlterarClienteJuridico
{
public:
    QLabel *label;
    QPushButton *Voltar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
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
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *Email;
    QLineEdit *lineEdit_Email;
    QPushButton *Alterar;
    QPushButton *Buscar;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *CNPJ;
    QLineEdit *lineEdit_CNPJ;

    void setupUi(QDialog *TelaAlterarClienteJuridico)
    {
        if (TelaAlterarClienteJuridico->objectName().isEmpty())
            TelaAlterarClienteJuridico->setObjectName(QString::fromUtf8("TelaAlterarClienteJuridico"));
        TelaAlterarClienteJuridico->resize(943, 624);
        label = new QLabel(TelaAlterarClienteJuridico);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 0, 351, 71));
        QFont font;
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        Voltar = new QPushButton(TelaAlterarClienteJuridico);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(20, 20, 75, 41));
        layoutWidget = new QWidget(TelaAlterarClienteJuridico);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(26, 190, 641, 281));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        layoutWidget_2 = new QWidget(TelaAlterarClienteJuridico);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 480, 641, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        Email = new QLabel(layoutWidget_2);
        Email->setObjectName(QString::fromUtf8("Email"));

        horizontalLayout_3->addWidget(Email);

        lineEdit_Email = new QLineEdit(layoutWidget_2);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));

        horizontalLayout_3->addWidget(lineEdit_Email);

        Alterar = new QPushButton(TelaAlterarClienteJuridico);
        Alterar->setObjectName(QString::fromUtf8("Alterar"));
        Alterar->setGeometry(QRect(250, 530, 171, 51));
        Buscar = new QPushButton(TelaAlterarClienteJuridico);
        Buscar->setObjectName(QString::fromUtf8("Buscar"));
        Buscar->setGeometry(QRect(440, 130, 91, 23));
        horizontalLayoutWidget = new QWidget(TelaAlterarClienteJuridico);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(150, 100, 181, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        CNPJ = new QLabel(horizontalLayoutWidget);
        CNPJ->setObjectName(QString::fromUtf8("CNPJ"));

        horizontalLayout->addWidget(CNPJ);

        lineEdit_CNPJ = new QLineEdit(horizontalLayoutWidget);
        lineEdit_CNPJ->setObjectName(QString::fromUtf8("lineEdit_CNPJ"));

        horizontalLayout->addWidget(lineEdit_CNPJ);


        retranslateUi(TelaAlterarClienteJuridico);

        QMetaObject::connectSlotsByName(TelaAlterarClienteJuridico);
    } // setupUi

    void retranslateUi(QDialog *TelaAlterarClienteJuridico)
    {
        TelaAlterarClienteJuridico->setWindowTitle(QApplication::translate("TelaAlterarClienteJuridico", "Dialog", nullptr));
        label->setText(QApplication::translate("TelaAlterarClienteJuridico", "Alterar Cliente Juridico ", nullptr));
        Voltar->setText(QApplication::translate("TelaAlterarClienteJuridico", "Voltar", nullptr));
        NomeCLienteJuridico->setText(QApplication::translate("TelaAlterarClienteJuridico", "Nome Cliente Juridico", nullptr));
        NomeFantasia->setText(QApplication::translate("TelaAlterarClienteJuridico", "Nome Fantasia", nullptr));
        RazaoSocial->setText(QApplication::translate("TelaAlterarClienteJuridico", "Raz\303\243o Social", nullptr));
        Telefone->setText(QApplication::translate("TelaAlterarClienteJuridico", "Telefone", nullptr));
        Email->setText(QApplication::translate("TelaAlterarClienteJuridico", "Email", nullptr));
        Alterar->setText(QApplication::translate("TelaAlterarClienteJuridico", "Alterar", nullptr));
        Buscar->setText(QApplication::translate("TelaAlterarClienteJuridico", "Buscar Cliente", nullptr));
        CNPJ->setText(QApplication::translate("TelaAlterarClienteJuridico", "CNPJ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaAlterarClienteJuridico: public Ui_TelaAlterarClienteJuridico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAALTERARCLIENTEJURIDICO_H
