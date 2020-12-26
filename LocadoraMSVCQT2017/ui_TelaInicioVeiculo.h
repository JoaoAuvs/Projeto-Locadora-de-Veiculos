/********************************************************************************
** Form generated from reading UI file 'TelaInicioVeiculo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIOVEICULO_H
#define UI_TELAINICIOVEICULO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicioVeiculo
{
public:
    QPushButton *voltar;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPlaca;
    QLineEdit *lineEditPlaca;
    QHBoxLayout *horizontalLayout;
    QLabel *MARCA;
    QComboBox *comboBox_Marca;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_Modelo;
    QComboBox *comboBox_Modelo;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_CHASSI;
    QLineEdit *lineEdit_Chassi;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_Renavam;
    QLineEdit *lineEdit_Renavam;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelCategoria;
    QComboBox *comboBoxCategoria;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_PrecoCompra;
    QLineEdit *lineEdit_PrecoCompra;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_PrecoVenda;
    QLineEdit *lineEdit_Venda;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_NumeroPassageiros;
    QLineEdit *lineEdit_NumeroPassageiros;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_AnoFabricacao;
    QLineEdit *lineEdit_AnoFabricacao;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_AnoModelo;
    QLineEdit *lineEdit_AnoModelo;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_TipoCombustivel;
    QComboBox *comboBox_TipoCombustivel;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_quilometragem;
    QLineEdit *lineEdit_quilometragem;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_Potencia;
    QLineEdit *lineEdit_Potencia;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_CapacidadePortaMala;
    QLineEdit *lineEdit_CapacidadePortaMala;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_situacao;
    QComboBox *comboBoxSituacao;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *pushButtonIncluir;
    QPushButton *pushButton_Listar;

    void setupUi(QDialog *TelaInicioVeiculo)
    {
        if (TelaInicioVeiculo->objectName().isEmpty())
            TelaInicioVeiculo->setObjectName(QString::fromUtf8("TelaInicioVeiculo"));
        TelaInicioVeiculo->resize(1004, 795);
        voltar = new QPushButton(TelaInicioVeiculo);
        voltar->setObjectName(QString::fromUtf8("voltar"));
        voltar->setGeometry(QRect(20, 10, 75, 23));
        label = new QLabel(TelaInicioVeiculo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, -10, 351, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget = new QWidget(TelaInicioVeiculo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(90, 60, 822, 652));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPlaca = new QLabel(layoutWidget);
        labelPlaca->setObjectName(QString::fromUtf8("labelPlaca"));

        horizontalLayout_2->addWidget(labelPlaca);

        lineEditPlaca = new QLineEdit(layoutWidget);
        lineEditPlaca->setObjectName(QString::fromUtf8("lineEditPlaca"));

        horizontalLayout_2->addWidget(lineEditPlaca);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        MARCA = new QLabel(layoutWidget);
        MARCA->setObjectName(QString::fromUtf8("MARCA"));

        horizontalLayout->addWidget(MARCA);

        comboBox_Marca = new QComboBox(layoutWidget);
        comboBox_Marca->setObjectName(QString::fromUtf8("comboBox_Marca"));
        comboBox_Marca->setMinimumSize(QSize(500, 0));

        horizontalLayout->addWidget(comboBox_Marca);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_Modelo = new QLabel(layoutWidget);
        label_Modelo->setObjectName(QString::fromUtf8("label_Modelo"));

        horizontalLayout_7->addWidget(label_Modelo);

        comboBox_Modelo = new QComboBox(layoutWidget);
        comboBox_Modelo->setObjectName(QString::fromUtf8("comboBox_Modelo"));
        comboBox_Modelo->setMinimumSize(QSize(500, 0));

        horizontalLayout_7->addWidget(comboBox_Modelo);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_CHASSI = new QLabel(layoutWidget);
        label_CHASSI->setObjectName(QString::fromUtf8("label_CHASSI"));

        horizontalLayout_8->addWidget(label_CHASSI);

        lineEdit_Chassi = new QLineEdit(layoutWidget);
        lineEdit_Chassi->setObjectName(QString::fromUtf8("lineEdit_Chassi"));

        horizontalLayout_8->addWidget(lineEdit_Chassi);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_Renavam = new QLabel(layoutWidget);
        label_Renavam->setObjectName(QString::fromUtf8("label_Renavam"));

        horizontalLayout_9->addWidget(label_Renavam);

        lineEdit_Renavam = new QLineEdit(layoutWidget);
        lineEdit_Renavam->setObjectName(QString::fromUtf8("lineEdit_Renavam"));

        horizontalLayout_9->addWidget(lineEdit_Renavam);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        labelCategoria = new QLabel(layoutWidget);
        labelCategoria->setObjectName(QString::fromUtf8("labelCategoria"));

        horizontalLayout_6->addWidget(labelCategoria);

        comboBoxCategoria = new QComboBox(layoutWidget);
        comboBoxCategoria->setObjectName(QString::fromUtf8("comboBoxCategoria"));
        comboBoxCategoria->setMinimumSize(QSize(500, 0));

        horizontalLayout_6->addWidget(comboBoxCategoria);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_PrecoCompra = new QLabel(layoutWidget);
        label_PrecoCompra->setObjectName(QString::fromUtf8("label_PrecoCompra"));

        horizontalLayout_10->addWidget(label_PrecoCompra);

        lineEdit_PrecoCompra = new QLineEdit(layoutWidget);
        lineEdit_PrecoCompra->setObjectName(QString::fromUtf8("lineEdit_PrecoCompra"));

        horizontalLayout_10->addWidget(lineEdit_PrecoCompra);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_PrecoVenda = new QLabel(layoutWidget);
        label_PrecoVenda->setObjectName(QString::fromUtf8("label_PrecoVenda"));

        horizontalLayout_11->addWidget(label_PrecoVenda);

        lineEdit_Venda = new QLineEdit(layoutWidget);
        lineEdit_Venda->setObjectName(QString::fromUtf8("lineEdit_Venda"));

        horizontalLayout_11->addWidget(lineEdit_Venda);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_NumeroPassageiros = new QLabel(layoutWidget);
        label_NumeroPassageiros->setObjectName(QString::fromUtf8("label_NumeroPassageiros"));

        horizontalLayout_12->addWidget(label_NumeroPassageiros);

        lineEdit_NumeroPassageiros = new QLineEdit(layoutWidget);
        lineEdit_NumeroPassageiros->setObjectName(QString::fromUtf8("lineEdit_NumeroPassageiros"));

        horizontalLayout_12->addWidget(lineEdit_NumeroPassageiros);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_AnoFabricacao = new QLabel(layoutWidget);
        label_AnoFabricacao->setObjectName(QString::fromUtf8("label_AnoFabricacao"));

        horizontalLayout_13->addWidget(label_AnoFabricacao);

        lineEdit_AnoFabricacao = new QLineEdit(layoutWidget);
        lineEdit_AnoFabricacao->setObjectName(QString::fromUtf8("lineEdit_AnoFabricacao"));

        horizontalLayout_13->addWidget(lineEdit_AnoFabricacao);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_AnoModelo = new QLabel(layoutWidget);
        label_AnoModelo->setObjectName(QString::fromUtf8("label_AnoModelo"));

        horizontalLayout_14->addWidget(label_AnoModelo);

        lineEdit_AnoModelo = new QLineEdit(layoutWidget);
        lineEdit_AnoModelo->setObjectName(QString::fromUtf8("lineEdit_AnoModelo"));

        horizontalLayout_14->addWidget(lineEdit_AnoModelo);


        verticalLayout->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_TipoCombustivel = new QLabel(layoutWidget);
        label_TipoCombustivel->setObjectName(QString::fromUtf8("label_TipoCombustivel"));

        horizontalLayout_15->addWidget(label_TipoCombustivel);

        comboBox_TipoCombustivel = new QComboBox(layoutWidget);
        comboBox_TipoCombustivel->setObjectName(QString::fromUtf8("comboBox_TipoCombustivel"));
        comboBox_TipoCombustivel->setMinimumSize(QSize(500, 0));

        horizontalLayout_15->addWidget(comboBox_TipoCombustivel);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_quilometragem = new QLabel(layoutWidget);
        label_quilometragem->setObjectName(QString::fromUtf8("label_quilometragem"));

        horizontalLayout_3->addWidget(label_quilometragem);

        lineEdit_quilometragem = new QLineEdit(layoutWidget);
        lineEdit_quilometragem->setObjectName(QString::fromUtf8("lineEdit_quilometragem"));

        horizontalLayout_3->addWidget(lineEdit_quilometragem);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_Potencia = new QLabel(layoutWidget);
        label_Potencia->setObjectName(QString::fromUtf8("label_Potencia"));

        horizontalLayout_5->addWidget(label_Potencia);

        lineEdit_Potencia = new QLineEdit(layoutWidget);
        lineEdit_Potencia->setObjectName(QString::fromUtf8("lineEdit_Potencia"));

        horizontalLayout_5->addWidget(lineEdit_Potencia);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_CapacidadePortaMala = new QLabel(layoutWidget);
        label_CapacidadePortaMala->setObjectName(QString::fromUtf8("label_CapacidadePortaMala"));

        horizontalLayout_16->addWidget(label_CapacidadePortaMala);

        lineEdit_CapacidadePortaMala = new QLineEdit(layoutWidget);
        lineEdit_CapacidadePortaMala->setObjectName(QString::fromUtf8("lineEdit_CapacidadePortaMala"));

        horizontalLayout_16->addWidget(lineEdit_CapacidadePortaMala);


        verticalLayout->addLayout(horizontalLayout_16);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_situacao = new QLabel(layoutWidget);
        label_situacao->setObjectName(QString::fromUtf8("label_situacao"));

        horizontalLayout_4->addWidget(label_situacao);

        comboBoxSituacao = new QComboBox(layoutWidget);
        comboBoxSituacao->setObjectName(QString::fromUtf8("comboBoxSituacao"));
        comboBoxSituacao->setMinimumSize(QSize(500, 0));

        horizontalLayout_4->addWidget(comboBoxSituacao);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        pushButtonIncluir = new QPushButton(layoutWidget);
        pushButtonIncluir->setObjectName(QString::fromUtf8("pushButtonIncluir"));
        pushButtonIncluir->setMinimumSize(QSize(0, 50));

        horizontalLayout_17->addWidget(pushButtonIncluir);

        pushButton_Listar = new QPushButton(layoutWidget);
        pushButton_Listar->setObjectName(QString::fromUtf8("pushButton_Listar"));
        pushButton_Listar->setMinimumSize(QSize(0, 50));

        horizontalLayout_17->addWidget(pushButton_Listar);


        verticalLayout->addLayout(horizontalLayout_17);


        retranslateUi(TelaInicioVeiculo);

        QMetaObject::connectSlotsByName(TelaInicioVeiculo);
    } // setupUi

    void retranslateUi(QDialog *TelaInicioVeiculo)
    {
        TelaInicioVeiculo->setWindowTitle(QApplication::translate("TelaInicioVeiculo", "Dialog", nullptr));
        voltar->setText(QApplication::translate("TelaInicioVeiculo", "Voltar", nullptr));
        label->setText(QApplication::translate("TelaInicioVeiculo", "CADASTRO DO VE\303\215CULO", nullptr));
        labelPlaca->setText(QApplication::translate("TelaInicioVeiculo", "PLACA", nullptr));
        MARCA->setText(QApplication::translate("TelaInicioVeiculo", "MARCA", nullptr));
        label_Modelo->setText(QApplication::translate("TelaInicioVeiculo", "MODELO", nullptr));
        label_CHASSI->setText(QApplication::translate("TelaInicioVeiculo", "CHASSI", nullptr));
        label_Renavam->setText(QApplication::translate("TelaInicioVeiculo", "RENAVAM", nullptr));
        labelCategoria->setText(QApplication::translate("TelaInicioVeiculo", "CATEGORIA", nullptr));
        label_PrecoCompra->setText(QApplication::translate("TelaInicioVeiculo", "PRE\303\207O DE COMPRA", nullptr));
        label_PrecoVenda->setText(QApplication::translate("TelaInicioVeiculo", "PRE\303\207O DE VENDA", nullptr));
        label_NumeroPassageiros->setText(QApplication::translate("TelaInicioVeiculo", "NUMERO DE PASSAGEIROS", nullptr));
        label_AnoFabricacao->setText(QApplication::translate("TelaInicioVeiculo", "ANO DE FABRICA\303\207\303\203O", nullptr));
        label_AnoModelo->setText(QApplication::translate("TelaInicioVeiculo", "ANO MODELO", nullptr));
        label_TipoCombustivel->setText(QApplication::translate("TelaInicioVeiculo", "TIPO DE COMBUST\303\215VEL", nullptr));
        label_quilometragem->setText(QApplication::translate("TelaInicioVeiculo", "QUILOMETRAGEM", nullptr));
        label_Potencia->setText(QApplication::translate("TelaInicioVeiculo", "POT\303\212NCIA", nullptr));
        label_CapacidadePortaMala->setText(QApplication::translate("TelaInicioVeiculo", "CAPACIDADE DO PORTA MALA", nullptr));
        label_situacao->setText(QApplication::translate("TelaInicioVeiculo", "SITUA\303\207\303\203O", nullptr));
        pushButtonIncluir->setText(QApplication::translate("TelaInicioVeiculo", "CADASTRAR", nullptr));
        pushButton_Listar->setText(QApplication::translate("TelaInicioVeiculo", "BUSCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicioVeiculo: public Ui_TelaInicioVeiculo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIOVEICULO_H
