/********************************************************************************
** Form generated from reading UI file 'TelaListarLocacao.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTARLOCACAO_H
#define UI_TELALISTARLOCACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListarLocacao
{
public:
    QPushButton *pushButton_Voltar;
    QTableWidget *tblLocacao;
    QPushButton *pushButton_Alterar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *txtNomeCodigo;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_3;
    QLineEdit *txtNomeCliente;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *txtNomeMotorista;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLineEdit *TxtVeiculo;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *txtQuilFinal;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLineEdit *txtCaucao;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *txtSeguro;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *txtPagamentoFinal;

    void setupUi(QDialog *TelaListarLocacao)
    {
        if (TelaListarLocacao->objectName().isEmpty())
            TelaListarLocacao->setObjectName(QString::fromUtf8("TelaListarLocacao"));
        TelaListarLocacao->resize(1069, 598);
        pushButton_Voltar = new QPushButton(TelaListarLocacao);
        pushButton_Voltar->setObjectName(QString::fromUtf8("pushButton_Voltar"));
        pushButton_Voltar->setGeometry(QRect(10, 20, 75, 23));
        tblLocacao = new QTableWidget(TelaListarLocacao);
        tblLocacao->setObjectName(QString::fromUtf8("tblLocacao"));
        tblLocacao->setGeometry(QRect(160, 90, 651, 331));
        tblLocacao->setSelectionMode(QAbstractItemView::SingleSelection);
        tblLocacao->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_Alterar = new QPushButton(TelaListarLocacao);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(420, 560, 126, 23));
        layoutWidget = new QWidget(TelaListarLocacao);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 430, 174, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        txtNomeCodigo = new QLineEdit(layoutWidget);
        txtNomeCodigo->setObjectName(QString::fromUtf8("txtNomeCodigo"));
        txtNomeCodigo->setEnabled(false);

        horizontalLayout->addWidget(txtNomeCodigo);

        layoutWidget_2 = new QWidget(TelaListarLocacao);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(530, 1079, 601, 25));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_13->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_13->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_13->addWidget(pushButton_3);

        layoutWidget1 = new QWidget(TelaListarLocacao);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 460, 182, 22));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_14->addWidget(label_3);

        txtNomeCliente = new QLineEdit(layoutWidget1);
        txtNomeCliente->setObjectName(QString::fromUtf8("txtNomeCliente"));
        txtNomeCliente->setEnabled(false);

        horizontalLayout_14->addWidget(txtNomeCliente);

        layoutWidget2 = new QWidget(TelaListarLocacao);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(130, 490, 201, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        txtNomeMotorista = new QLineEdit(layoutWidget2);
        txtNomeMotorista->setObjectName(QString::fromUtf8("txtNomeMotorista"));
        txtNomeMotorista->setEnabled(false);

        horizontalLayout_2->addWidget(txtNomeMotorista);

        layoutWidget3 = new QWidget(TelaListarLocacao);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(340, 430, 184, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_3->addWidget(label_13);

        TxtVeiculo = new QLineEdit(layoutWidget3);
        TxtVeiculo->setObjectName(QString::fromUtf8("TxtVeiculo"));
        TxtVeiculo->setEnabled(false);

        horizontalLayout_3->addWidget(TxtVeiculo);

        layoutWidget4 = new QWidget(TelaListarLocacao);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(330, 460, 263, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        txtQuilFinal = new QLineEdit(layoutWidget4);
        txtQuilFinal->setObjectName(QString::fromUtf8("txtQuilFinal"));

        horizontalLayout_7->addWidget(txtQuilFinal);

        layoutWidget5 = new QWidget(TelaListarLocacao);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(360, 500, 238, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_8->addWidget(label_10);

        txtCaucao = new QLineEdit(layoutWidget5);
        txtCaucao->setObjectName(QString::fromUtf8("txtCaucao"));

        horizontalLayout_8->addWidget(txtCaucao);

        layoutWidget6 = new QWidget(TelaListarLocacao);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(640, 500, 239, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_9->addWidget(label_11);

        txtSeguro = new QLineEdit(layoutWidget6);
        txtSeguro->setObjectName(QString::fromUtf8("txtSeguro"));

        horizontalLayout_9->addWidget(txtSeguro);

        layoutWidget7 = new QWidget(TelaListarLocacao);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(620, 440, 235, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_10->addWidget(label_12);

        txtPagamentoFinal = new QLineEdit(layoutWidget7);
        txtPagamentoFinal->setObjectName(QString::fromUtf8("txtPagamentoFinal"));

        horizontalLayout_10->addWidget(txtPagamentoFinal);


        retranslateUi(TelaListarLocacao);

        QMetaObject::connectSlotsByName(TelaListarLocacao);
    } // setupUi

    void retranslateUi(QDialog *TelaListarLocacao)
    {
        TelaListarLocacao->setWindowTitle(QApplication::translate("TelaListarLocacao", "Dialog", nullptr));
        pushButton_Voltar->setText(QApplication::translate("TelaListarLocacao", "Voltar", nullptr));
        pushButton_Alterar->setText(QApplication::translate("TelaListarLocacao", "Devolver Veiculo", nullptr));
        label_2->setText(QApplication::translate("TelaListarLocacao", "Codigo", nullptr));
        pushButton->setText(QApplication::translate("TelaListarLocacao", "Fazer Loca\303\247\303\243o", nullptr));
        pushButton_2->setText(QApplication::translate("TelaListarLocacao", "Fazer Devolu\303\247\303\243o", nullptr));
        pushButton_3->setText(QApplication::translate("TelaListarLocacao", "Listar", nullptr));
        label_3->setText(QApplication::translate("TelaListarLocacao", "CLIENTE", nullptr));
        label_4->setText(QApplication::translate("TelaListarLocacao", "MOTORISTA", nullptr));
        label_13->setText(QApplication::translate("TelaListarLocacao", "VEICULO", nullptr));
        label_8->setText(QApplication::translate("TelaListarLocacao", "QUILOMETRAGEM FINAL ", nullptr));
        label_10->setText(QApplication::translate("TelaListarLocacao", "VALOR DO CAU\303\207\303\203O", nullptr));
        label_11->setText(QApplication::translate("TelaListarLocacao", "VALOR DO SEGURO ", nullptr));
        label_12->setText(QApplication::translate("TelaListarLocacao", "PAGAMENTO FINAL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListarLocacao: public Ui_TelaListarLocacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTARLOCACAO_H
