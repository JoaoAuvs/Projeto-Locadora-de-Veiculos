/********************************************************************************
** Form generated from reading UI file 'TelaInicioMotoristaJ.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIOMOTORISTAJ_H
#define UI_TELAINICIOMOTORISTAJ_H

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

class Ui_TelaInicioMotoristaJ
{
public:
    QPushButton *Incluir;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QComboBox *comboBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_DataValidade;
    QDateEdit *dateEditData;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_CPF_Motorista;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_NomeMotorista;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_RG_Motorista;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_Telefone_Motorista;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *lineEdit_Email_Motorista;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_NumeroResgistro;
    QLineEdit *lineEdit_NumeroRegistro;
    QPushButton *Listar;
    QLabel *label_CNH;
    QPushButton *Voltar;
    QLabel *label_Motorista;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelCliente;
    QComboBox *comboBox_Cliente;

    void setupUi(QDialog *TelaInicioMotoristaJ)
    {
        if (TelaInicioMotoristaJ->objectName().isEmpty())
            TelaInicioMotoristaJ->setObjectName(QString::fromUtf8("TelaInicioMotoristaJ"));
        TelaInicioMotoristaJ->resize(747, 674);
        Incluir = new QPushButton(TelaInicioMotoristaJ);
        Incluir->setObjectName(QString::fromUtf8("Incluir"));
        Incluir->setGeometry(QRect(170, 620, 151, 41));
        layoutWidget = new QWidget(TelaInicioMotoristaJ);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(530, 550, 124, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_4->addWidget(label_11);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_4->addWidget(comboBox);

        layoutWidget_2 = new QWidget(TelaInicioMotoristaJ);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(60, 550, 172, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_DataValidade = new QLabel(layoutWidget_2);
        label_DataValidade->setObjectName(QString::fromUtf8("label_DataValidade"));

        horizontalLayout->addWidget(label_DataValidade);

        dateEditData = new QDateEdit(layoutWidget_2);
        dateEditData->setObjectName(QString::fromUtf8("dateEditData"));

        horizontalLayout->addWidget(dateEditData);

        layoutWidget_3 = new QWidget(TelaInicioMotoristaJ);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(50, 170, 641, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_CPF_Motorista = new QLineEdit(layoutWidget_3);
        lineEdit_CPF_Motorista->setObjectName(QString::fromUtf8("lineEdit_CPF_Motorista"));

        horizontalLayout_3->addWidget(lineEdit_CPF_Motorista);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_NomeMotorista = new QLineEdit(layoutWidget_3);
        lineEdit_NomeMotorista->setObjectName(QString::fromUtf8("lineEdit_NomeMotorista"));

        horizontalLayout_7->addWidget(lineEdit_NomeMotorista);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_RG_Motorista = new QLineEdit(layoutWidget_3);
        lineEdit_RG_Motorista->setObjectName(QString::fromUtf8("lineEdit_RG_Motorista"));

        horizontalLayout_8->addWidget(lineEdit_RG_Motorista);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_Telefone_Motorista = new QLineEdit(layoutWidget_3);
        lineEdit_Telefone_Motorista->setObjectName(QString::fromUtf8("lineEdit_Telefone_Motorista"));

        horizontalLayout_9->addWidget(lineEdit_Telefone_Motorista);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_Email_Motorista = new QLineEdit(layoutWidget_3);
        lineEdit_Email_Motorista->setObjectName(QString::fromUtf8("lineEdit_Email_Motorista"));

        horizontalLayout_10->addWidget(lineEdit_Email_Motorista);


        verticalLayout_2->addLayout(horizontalLayout_10);

        layoutWidget_4 = new QWidget(TelaInicioMotoristaJ);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(260, 550, 236, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_NumeroResgistro = new QLabel(layoutWidget_4);
        label_NumeroResgistro->setObjectName(QString::fromUtf8("label_NumeroResgistro"));

        horizontalLayout_2->addWidget(label_NumeroResgistro);

        lineEdit_NumeroRegistro = new QLineEdit(layoutWidget_4);
        lineEdit_NumeroRegistro->setObjectName(QString::fromUtf8("lineEdit_NumeroRegistro"));

        horizontalLayout_2->addWidget(lineEdit_NumeroRegistro);

        Listar = new QPushButton(TelaInicioMotoristaJ);
        Listar->setObjectName(QString::fromUtf8("Listar"));
        Listar->setGeometry(QRect(410, 620, 161, 41));
        label_CNH = new QLabel(TelaInicioMotoristaJ);
        label_CNH->setObjectName(QString::fromUtf8("label_CNH"));
        label_CNH->setGeometry(QRect(60, 480, 631, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_CNH->setFont(font);
        Voltar = new QPushButton(TelaInicioMotoristaJ);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(30, 10, 75, 23));
        label_Motorista = new QLabel(TelaInicioMotoristaJ);
        label_Motorista->setObjectName(QString::fromUtf8("label_Motorista"));
        label_Motorista->setGeometry(QRect(170, 60, 351, 31));
        label_Motorista->setFont(font);
        widget = new QWidget(TelaInicioMotoristaJ);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 140, 641, 22));
        horizontalLayout_5 = new QHBoxLayout(widget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelCliente = new QLabel(widget);
        labelCliente->setObjectName(QString::fromUtf8("labelCliente"));

        horizontalLayout_5->addWidget(labelCliente);

        comboBox_Cliente = new QComboBox(widget);
        comboBox_Cliente->setObjectName(QString::fromUtf8("comboBox_Cliente"));

        horizontalLayout_5->addWidget(comboBox_Cliente);


        retranslateUi(TelaInicioMotoristaJ);

        QMetaObject::connectSlotsByName(TelaInicioMotoristaJ);
    } // setupUi

    void retranslateUi(QDialog *TelaInicioMotoristaJ)
    {
        TelaInicioMotoristaJ->setWindowTitle(QApplication::translate("TelaInicioMotoristaJ", "Dialog", nullptr));
        Incluir->setText(QApplication::translate("TelaInicioMotoristaJ", "CADASTRAR", nullptr));
        label_11->setText(QApplication::translate("TelaInicioMotoristaJ", "Categoria", nullptr));
        label_DataValidade->setText(QApplication::translate("TelaInicioMotoristaJ", "Data de Validade", nullptr));
        label_3->setText(QApplication::translate("TelaInicioMotoristaJ", "CPF", nullptr));
        label_7->setText(QApplication::translate("TelaInicioMotoristaJ", "Nome do Motorista", nullptr));
        label_8->setText(QApplication::translate("TelaInicioMotoristaJ", "RG ", nullptr));
        label_9->setText(QApplication::translate("TelaInicioMotoristaJ", "Telefone ", nullptr));
        label_10->setText(QApplication::translate("TelaInicioMotoristaJ", "Email", nullptr));
        label_NumeroResgistro->setText(QApplication::translate("TelaInicioMotoristaJ", "N\303\272mero de Registro", nullptr));
        Listar->setText(QApplication::translate("TelaInicioMotoristaJ", "BUSCAR", nullptr));
        label_CNH->setText(QApplication::translate("TelaInicioMotoristaJ", "CNH - CARTEIRA NACIONAL DE HABILITA\303\207\303\203O", nullptr));
        Voltar->setText(QApplication::translate("TelaInicioMotoristaJ", "Voltar", nullptr));
        label_Motorista->setText(QApplication::translate("TelaInicioMotoristaJ", "              MOTORISTA ", nullptr));
        labelCliente->setText(QApplication::translate("TelaInicioMotoristaJ", "CLIENTE JURIDICO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicioMotoristaJ: public Ui_TelaInicioMotoristaJ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIOMOTORISTAJ_H
