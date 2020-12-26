/********************************************************************************
** Form generated from reading UI file 'telainiciolocacao.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIOLOCACAO_H
#define UI_TELAINICIOLOCACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicioLocacao
{
public:
    QPushButton *Voltar;
    QLabel *label;
    QLabel *idCli;
    QLabel *idMotoris;
    QLabel *idVeicu;
    QLabel *idCat;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *cbmCliente;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *cbmMotorista;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QComboBox *cbmVeiculo;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_Categoria;
    QComboBox *cbmCategoria;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QDateEdit *txtDataRetirada;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QDateEdit *txtDataDevol;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *txtQuiInicial;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *txtQuilFinal;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *txtCauc;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *txtSeguro;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *txtPagamentoFinal;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_CadastrarMF;

    void setupUi(QDialog *TelaInicioLocacao)
    {
        if (TelaInicioLocacao->objectName().isEmpty())
            TelaInicioLocacao->setObjectName(QString::fromUtf8("TelaInicioLocacao"));
        TelaInicioLocacao->resize(1008, 686);
        Voltar = new QPushButton(TelaInicioLocacao);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(20, 10, 75, 23));
        label = new QLabel(TelaInicioLocacao);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 50, 331, 41));
        label->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        idCli = new QLabel(TelaInicioLocacao);
        idCli->setObjectName(QString::fromUtf8("idCli"));
        idCli->setGeometry(QRect(180, 0, 41, 47));
        idMotoris = new QLabel(TelaInicioLocacao);
        idMotoris->setObjectName(QString::fromUtf8("idMotoris"));
        idMotoris->setGeometry(QRect(280, 0, 41, 47));
        idVeicu = new QLabel(TelaInicioLocacao);
        idVeicu->setObjectName(QString::fromUtf8("idVeicu"));
        idVeicu->setGeometry(QRect(390, 0, 41, 47));
        idCat = new QLabel(TelaInicioLocacao);
        idCat->setObjectName(QString::fromUtf8("idCat"));
        idCat->setGeometry(QRect(490, 0, 41, 47));
        layoutWidget = new QWidget(TelaInicioLocacao);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 111, 661, 501));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        cbmCliente = new QComboBox(layoutWidget);
        cbmCliente->setObjectName(QString::fromUtf8("cbmCliente"));

        horizontalLayout->addWidget(cbmCliente);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        cbmMotorista = new QComboBox(layoutWidget);
        cbmMotorista->setObjectName(QString::fromUtf8("cbmMotorista"));

        horizontalLayout_2->addWidget(cbmMotorista);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        cbmVeiculo = new QComboBox(layoutWidget);
        cbmVeiculo->setObjectName(QString::fromUtf8("cbmVeiculo"));

        horizontalLayout_3->addWidget(cbmVeiculo);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_Categoria = new QLabel(layoutWidget);
        label_Categoria->setObjectName(QString::fromUtf8("label_Categoria"));

        horizontalLayout_12->addWidget(label_Categoria);

        cbmCategoria = new QComboBox(layoutWidget);
        cbmCategoria->setObjectName(QString::fromUtf8("cbmCategoria"));

        horizontalLayout_12->addWidget(cbmCategoria);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        txtDataRetirada = new QDateEdit(layoutWidget);
        txtDataRetirada->setObjectName(QString::fromUtf8("txtDataRetirada"));

        horizontalLayout_4->addWidget(txtDataRetirada);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        txtDataDevol = new QDateEdit(layoutWidget);
        txtDataDevol->setObjectName(QString::fromUtf8("txtDataDevol"));

        horizontalLayout_5->addWidget(txtDataDevol);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        txtQuiInicial = new QLineEdit(layoutWidget);
        txtQuiInicial->setObjectName(QString::fromUtf8("txtQuiInicial"));

        horizontalLayout_6->addWidget(txtQuiInicial);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        txtQuilFinal = new QLineEdit(layoutWidget);
        txtQuilFinal->setObjectName(QString::fromUtf8("txtQuilFinal"));

        horizontalLayout_7->addWidget(txtQuilFinal);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        txtCauc = new QLineEdit(layoutWidget);
        txtCauc->setObjectName(QString::fromUtf8("txtCauc"));

        horizontalLayout_9->addWidget(txtCauc);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        txtSeguro = new QLineEdit(layoutWidget);
        txtSeguro->setObjectName(QString::fromUtf8("txtSeguro"));

        horizontalLayout_10->addWidget(txtSeguro);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_11->addWidget(label_12);

        txtPagamentoFinal = new QLineEdit(layoutWidget);
        txtPagamentoFinal->setObjectName(QString::fromUtf8("txtPagamentoFinal"));

        horizontalLayout_11->addWidget(txtPagamentoFinal);


        verticalLayout->addLayout(horizontalLayout_11);

        layoutWidget1 = new QWidget(TelaInicioLocacao);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 650, 601, 25));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_13->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_13->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget1);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_13->addWidget(pushButton_3);

        pushButton_CadastrarMF = new QPushButton(TelaInicioLocacao);
        pushButton_CadastrarMF->setObjectName(QString::fromUtf8("pushButton_CadastrarMF"));
        pushButton_CadastrarMF->setGeometry(QRect(640, 650, 121, 23));

        retranslateUi(TelaInicioLocacao);

        QMetaObject::connectSlotsByName(TelaInicioLocacao);
    } // setupUi

    void retranslateUi(QDialog *TelaInicioLocacao)
    {
        TelaInicioLocacao->setWindowTitle(QApplication::translate("TelaInicioLocacao", "Dialog", nullptr));
        Voltar->setText(QApplication::translate("TelaInicioLocacao", "Voltar", nullptr));
        label->setText(QApplication::translate("TelaInicioLocacao", "LOCA\303\207\303\203O DE VEICULO", nullptr));
        idCli->setText(QApplication::translate("TelaInicioLocacao", "cliente", nullptr));
        idMotoris->setText(QApplication::translate("TelaInicioLocacao", "moto", nullptr));
        idVeicu->setText(QApplication::translate("TelaInicioLocacao", "veicu", nullptr));
        idCat->setText(QApplication::translate("TelaInicioLocacao", "Cat", nullptr));
        label_3->setText(QApplication::translate("TelaInicioLocacao", "CLIENTE", nullptr));
        label_4->setText(QApplication::translate("TelaInicioLocacao", "MOTORISTA", nullptr));
        label_13->setText(QApplication::translate("TelaInicioLocacao", "VEICULO", nullptr));
        label_Categoria->setText(QApplication::translate("TelaInicioLocacao", "CATEGORIA", nullptr));
        label_5->setText(QApplication::translate("TelaInicioLocacao", "DATA DE RETIRADA", nullptr));
        label_6->setText(QApplication::translate("TelaInicioLocacao", "DATA DE DEVOLU\303\207\303\203O", nullptr));
        label_7->setText(QApplication::translate("TelaInicioLocacao", "QUILOMETRAGEM INICIAL", nullptr));
        label_8->setText(QApplication::translate("TelaInicioLocacao", "QUILOMETRAGEM FINAL ", nullptr));
        label_10->setText(QApplication::translate("TelaInicioLocacao", "VALOR DO CAU\303\207\303\203O", nullptr));
        label_11->setText(QApplication::translate("TelaInicioLocacao", "VALOR DO SEGURO ", nullptr));
        label_12->setText(QApplication::translate("TelaInicioLocacao", "PAGAMENTO FINAL", nullptr));
        pushButton->setText(QApplication::translate("TelaInicioLocacao", "Fazer Loca\303\247\303\243o", nullptr));
        pushButton_2->setText(QApplication::translate("TelaInicioLocacao", "Fazer Devolu\303\247\303\243o", nullptr));
        pushButton_3->setText(QApplication::translate("TelaInicioLocacao", "Fazer Reserva", nullptr));
        pushButton_CadastrarMF->setText(QApplication::translate("TelaInicioLocacao", "Cadastrar Motorista F", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicioLocacao: public Ui_TelaInicioLocacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIOLOCACAO_H
