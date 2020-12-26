/********************************************************************************
** Form generated from reading UI file 'TelaListarVeiculo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTARVEICULO_H
#define UI_TELALISTARVEICULO_H

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

class Ui_TelaListarVeiculo
{
public:
    QPushButton *pushButtonVoltar;
    QTableWidget *tblVeiculo;
    QPushButton *pushButton_Alterar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Placa;
    QLineEdit *txtPlaca;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_19;
    QLabel *MARCA;
    QLineEdit *lineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Modelo;
    QLineEdit *lineEdit_2;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_CHASSI;
    QLineEdit *lineEdit_Chassi;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_Renavam;
    QLineEdit *lineEdit_Renavam;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelCategoria;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_PrecoCompra;
    QLineEdit *lineEdit_PrecoCompra;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_PrecoVenda;
    QLineEdit *lineEdit_Venda;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_NumeroPassageiros;
    QLineEdit *lineEdit_NumeroPassageiros;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_AnoFabricacao;
    QLineEdit *lineEdit_AnoFabricacao;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_AnoModelo;
    QLineEdit *lineEdit_AnoModelo;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_TipoCombustivel;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *TelaListarVeiculo)
    {
        if (TelaListarVeiculo->objectName().isEmpty())
            TelaListarVeiculo->setObjectName(QString::fromUtf8("TelaListarVeiculo"));
        TelaListarVeiculo->resize(1048, 607);
        pushButtonVoltar = new QPushButton(TelaListarVeiculo);
        pushButtonVoltar->setObjectName(QString::fromUtf8("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(20, 20, 75, 23));
        tblVeiculo = new QTableWidget(TelaListarVeiculo);
        tblVeiculo->setObjectName(QString::fromUtf8("tblVeiculo"));
        tblVeiculo->setGeometry(QRect(170, 60, 651, 331));
        tblVeiculo->setSelectionMode(QAbstractItemView::SingleSelection);
        tblVeiculo->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_Alterar = new QPushButton(TelaListarVeiculo);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(400, 560, 126, 23));
        layoutWidget = new QWidget(TelaListarVeiculo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 410, 166, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_Placa = new QLabel(layoutWidget);
        label_Placa->setObjectName(QString::fromUtf8("label_Placa"));

        horizontalLayout->addWidget(label_Placa);

        txtPlaca = new QLineEdit(layoutWidget);
        txtPlaca->setObjectName(QString::fromUtf8("txtPlaca"));

        horizontalLayout->addWidget(txtPlaca);

        layoutWidget1 = new QWidget(TelaListarVeiculo);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(130, 440, 177, 22));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        MARCA = new QLabel(layoutWidget1);
        MARCA->setObjectName(QString::fromUtf8("MARCA"));

        horizontalLayout_19->addWidget(MARCA);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_19->addWidget(lineEdit);

        layoutWidget2 = new QWidget(TelaListarVeiculo);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(340, 410, 183, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Modelo = new QLabel(layoutWidget2);
        label_Modelo->setObjectName(QString::fromUtf8("label_Modelo"));

        horizontalLayout_2->addWidget(label_Modelo);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);

        layoutWidget3 = new QWidget(TelaListarVeiculo);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(320, 440, 178, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_CHASSI = new QLabel(layoutWidget3);
        label_CHASSI->setObjectName(QString::fromUtf8("label_CHASSI"));

        horizontalLayout_3->addWidget(label_CHASSI);

        lineEdit_Chassi = new QLineEdit(layoutWidget3);
        lineEdit_Chassi->setObjectName(QString::fromUtf8("lineEdit_Chassi"));

        horizontalLayout_3->addWidget(lineEdit_Chassi);

        layoutWidget4 = new QWidget(TelaListarVeiculo);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(540, 410, 189, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_Renavam = new QLabel(layoutWidget4);
        label_Renavam->setObjectName(QString::fromUtf8("label_Renavam"));

        horizontalLayout_7->addWidget(label_Renavam);

        lineEdit_Renavam = new QLineEdit(layoutWidget4);
        lineEdit_Renavam->setObjectName(QString::fromUtf8("lineEdit_Renavam"));

        horizontalLayout_7->addWidget(lineEdit_Renavam);

        layoutWidget5 = new QWidget(TelaListarVeiculo);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(520, 440, 200, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelCategoria = new QLabel(layoutWidget5);
        labelCategoria->setObjectName(QString::fromUtf8("labelCategoria"));

        horizontalLayout_8->addWidget(labelCategoria);

        lineEdit_3 = new QLineEdit(layoutWidget5);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_8->addWidget(lineEdit_3);

        layoutWidget6 = new QWidget(TelaListarVeiculo);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(130, 470, 237, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_PrecoCompra = new QLabel(layoutWidget6);
        label_PrecoCompra->setObjectName(QString::fromUtf8("label_PrecoCompra"));

        horizontalLayout_9->addWidget(label_PrecoCompra);

        lineEdit_PrecoCompra = new QLineEdit(layoutWidget6);
        lineEdit_PrecoCompra->setObjectName(QString::fromUtf8("lineEdit_PrecoCompra"));

        horizontalLayout_9->addWidget(lineEdit_PrecoCompra);

        layoutWidget7 = new QWidget(TelaListarVeiculo);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(380, 470, 227, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_PrecoVenda = new QLabel(layoutWidget7);
        label_PrecoVenda->setObjectName(QString::fromUtf8("label_PrecoVenda"));

        horizontalLayout_6->addWidget(label_PrecoVenda);

        lineEdit_Venda = new QLineEdit(layoutWidget7);
        lineEdit_Venda->setObjectName(QString::fromUtf8("lineEdit_Venda"));

        horizontalLayout_6->addWidget(lineEdit_Venda);

        layoutWidget8 = new QWidget(TelaListarVeiculo);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(640, 470, 273, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_NumeroPassageiros = new QLabel(layoutWidget8);
        label_NumeroPassageiros->setObjectName(QString::fromUtf8("label_NumeroPassageiros"));

        horizontalLayout_10->addWidget(label_NumeroPassageiros);

        lineEdit_NumeroPassageiros = new QLineEdit(layoutWidget8);
        lineEdit_NumeroPassageiros->setObjectName(QString::fromUtf8("lineEdit_NumeroPassageiros"));

        horizontalLayout_10->addWidget(lineEdit_NumeroPassageiros);

        layoutWidget9 = new QWidget(TelaListarVeiculo);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(120, 510, 248, 22));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_AnoFabricacao = new QLabel(layoutWidget9);
        label_AnoFabricacao->setObjectName(QString::fromUtf8("label_AnoFabricacao"));

        horizontalLayout_11->addWidget(label_AnoFabricacao);

        lineEdit_AnoFabricacao = new QLineEdit(layoutWidget9);
        lineEdit_AnoFabricacao->setObjectName(QString::fromUtf8("lineEdit_AnoFabricacao"));

        horizontalLayout_11->addWidget(lineEdit_AnoFabricacao);

        layoutWidget10 = new QWidget(TelaListarVeiculo);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(380, 510, 208, 22));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_AnoModelo = new QLabel(layoutWidget10);
        label_AnoModelo->setObjectName(QString::fromUtf8("label_AnoModelo"));

        horizontalLayout_12->addWidget(label_AnoModelo);

        lineEdit_AnoModelo = new QLineEdit(layoutWidget10);
        lineEdit_AnoModelo->setObjectName(QString::fromUtf8("lineEdit_AnoModelo"));

        horizontalLayout_12->addWidget(lineEdit_AnoModelo);

        layoutWidget11 = new QWidget(TelaListarVeiculo);
        layoutWidget11->setObjectName(QString::fromUtf8("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(610, 510, 253, 22));
        horizontalLayout_13 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_TipoCombustivel = new QLabel(layoutWidget11);
        label_TipoCombustivel->setObjectName(QString::fromUtf8("label_TipoCombustivel"));

        horizontalLayout_13->addWidget(label_TipoCombustivel);

        lineEdit_4 = new QLineEdit(layoutWidget11);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_13->addWidget(lineEdit_4);


        retranslateUi(TelaListarVeiculo);

        QMetaObject::connectSlotsByName(TelaListarVeiculo);
    } // setupUi

    void retranslateUi(QDialog *TelaListarVeiculo)
    {
        TelaListarVeiculo->setWindowTitle(QApplication::translate("TelaListarVeiculo", "Dialog", nullptr));
        pushButtonVoltar->setText(QApplication::translate("TelaListarVeiculo", "Voltar", nullptr));
        pushButton_Alterar->setText(QApplication::translate("TelaListarVeiculo", "Alterar", nullptr));
        label_Placa->setText(QApplication::translate("TelaListarVeiculo", "PLACA", nullptr));
        MARCA->setText(QApplication::translate("TelaListarVeiculo", "MARCA", nullptr));
        label_Modelo->setText(QApplication::translate("TelaListarVeiculo", "MODELO", nullptr));
        label_CHASSI->setText(QApplication::translate("TelaListarVeiculo", "CHASSI", nullptr));
        label_Renavam->setText(QApplication::translate("TelaListarVeiculo", "RENAVAM", nullptr));
        labelCategoria->setText(QApplication::translate("TelaListarVeiculo", "CATEGORIA", nullptr));
        label_PrecoCompra->setText(QApplication::translate("TelaListarVeiculo", "PRE\303\207O DE COMPRA", nullptr));
        label_PrecoVenda->setText(QApplication::translate("TelaListarVeiculo", "PRE\303\207O DE VENDA", nullptr));
        label_NumeroPassageiros->setText(QApplication::translate("TelaListarVeiculo", "NUMERO DE PASSAGEIROS", nullptr));
        label_AnoFabricacao->setText(QApplication::translate("TelaListarVeiculo", "ANO DE FABRICA\303\207\303\203O", nullptr));
        label_AnoModelo->setText(QApplication::translate("TelaListarVeiculo", "ANO MODELO", nullptr));
        label_TipoCombustivel->setText(QApplication::translate("TelaListarVeiculo", "TIPO DE COMBUST\303\215VEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListarVeiculo: public Ui_TelaListarVeiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTARVEICULO_H
