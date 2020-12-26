/********************************************************************************
** Form generated from reading UI file 'TelaInicioMotorista.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIOMOTORISTA_H
#define UI_TELAINICIOMOTORISTA_H

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

class Ui_TelaInicioMotorista
{
public:
    QPushButton *Voltar;
    QPushButton *Incluir;
    QPushButton *Listar;
    QWidget *layoutWidget;
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
    QLabel *label_CNH;
    QLabel *label_Motorista;
    QComboBox *comboBox_Cliente;
    QLabel *labelCliente;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_DataValidade;
    QDateEdit *txtDataValidade;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QComboBox *comboBox;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_NumeroResgistro;
    QLineEdit *lineEdit_NumeroRegistro;

    void setupUi(QDialog *TelaInicioMotorista)
    {
        if (TelaInicioMotorista->objectName().isEmpty())
            TelaInicioMotorista->setObjectName(QString::fromUtf8("TelaInicioMotorista"));
        TelaInicioMotorista->resize(702, 692);
        Voltar = new QPushButton(TelaInicioMotorista);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(10, 20, 75, 23));
        Incluir = new QPushButton(TelaInicioMotorista);
        Incluir->setObjectName(QString::fromUtf8("Incluir"));
        Incluir->setGeometry(QRect(150, 630, 151, 41));
        Listar = new QPushButton(TelaInicioMotorista);
        Listar->setObjectName(QString::fromUtf8("Listar"));
        Listar->setGeometry(QRect(390, 630, 161, 41));
        layoutWidget = new QWidget(TelaInicioMotorista);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 180, 641, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_CPF_Motorista = new QLineEdit(layoutWidget);
        lineEdit_CPF_Motorista->setObjectName(QString::fromUtf8("lineEdit_CPF_Motorista"));

        horizontalLayout_3->addWidget(lineEdit_CPF_Motorista);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_NomeMotorista = new QLineEdit(layoutWidget);
        lineEdit_NomeMotorista->setObjectName(QString::fromUtf8("lineEdit_NomeMotorista"));

        horizontalLayout_7->addWidget(lineEdit_NomeMotorista);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_RG_Motorista = new QLineEdit(layoutWidget);
        lineEdit_RG_Motorista->setObjectName(QString::fromUtf8("lineEdit_RG_Motorista"));

        horizontalLayout_8->addWidget(lineEdit_RG_Motorista);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_Telefone_Motorista = new QLineEdit(layoutWidget);
        lineEdit_Telefone_Motorista->setObjectName(QString::fromUtf8("lineEdit_Telefone_Motorista"));

        horizontalLayout_9->addWidget(lineEdit_Telefone_Motorista);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_10->addWidget(label_10);

        lineEdit_Email_Motorista = new QLineEdit(layoutWidget);
        lineEdit_Email_Motorista->setObjectName(QString::fromUtf8("lineEdit_Email_Motorista"));

        horizontalLayout_10->addWidget(lineEdit_Email_Motorista);


        verticalLayout_2->addLayout(horizontalLayout_10);

        label_CNH = new QLabel(TelaInicioMotorista);
        label_CNH->setObjectName(QString::fromUtf8("label_CNH"));
        label_CNH->setGeometry(QRect(40, 490, 631, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_CNH->setFont(font);
        label_Motorista = new QLabel(TelaInicioMotorista);
        label_Motorista->setObjectName(QString::fromUtf8("label_Motorista"));
        label_Motorista->setGeometry(QRect(150, 70, 351, 31));
        label_Motorista->setFont(font);
        comboBox_Cliente = new QComboBox(TelaInicioMotorista);
        comboBox_Cliente->setObjectName(QString::fromUtf8("comboBox_Cliente"));
        comboBox_Cliente->setGeometry(QRect(90, 150, 581, 22));
        labelCliente = new QLabel(TelaInicioMotorista);
        labelCliente->setObjectName(QString::fromUtf8("labelCliente"));
        labelCliente->setGeometry(QRect(30, 150, 47, 13));
        layoutWidget1 = new QWidget(TelaInicioMotorista);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 560, 172, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_DataValidade = new QLabel(layoutWidget1);
        label_DataValidade->setObjectName(QString::fromUtf8("label_DataValidade"));

        horizontalLayout->addWidget(label_DataValidade);

        txtDataValidade = new QDateEdit(layoutWidget1);
        txtDataValidade->setObjectName(QString::fromUtf8("txtDataValidade"));

        horizontalLayout->addWidget(txtDataValidade);

        layoutWidget2 = new QWidget(TelaInicioMotorista);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(510, 560, 124, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_4->addWidget(label_11);

        comboBox = new QComboBox(layoutWidget2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_4->addWidget(comboBox);

        layoutWidget3 = new QWidget(TelaInicioMotorista);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(240, 560, 236, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_NumeroResgistro = new QLabel(layoutWidget3);
        label_NumeroResgistro->setObjectName(QString::fromUtf8("label_NumeroResgistro"));

        horizontalLayout_2->addWidget(label_NumeroResgistro);

        lineEdit_NumeroRegistro = new QLineEdit(layoutWidget3);
        lineEdit_NumeroRegistro->setObjectName(QString::fromUtf8("lineEdit_NumeroRegistro"));

        horizontalLayout_2->addWidget(lineEdit_NumeroRegistro);


        retranslateUi(TelaInicioMotorista);

        QMetaObject::connectSlotsByName(TelaInicioMotorista);
    } // setupUi

    void retranslateUi(QDialog *TelaInicioMotorista)
    {
        TelaInicioMotorista->setWindowTitle(QApplication::translate("TelaInicioMotorista", "Dialog", nullptr));
        Voltar->setText(QApplication::translate("TelaInicioMotorista", "Voltar", nullptr));
        Incluir->setText(QApplication::translate("TelaInicioMotorista", "CADASTRAR", nullptr));
        Listar->setText(QApplication::translate("TelaInicioMotorista", "BUSCAR", nullptr));
        label_3->setText(QApplication::translate("TelaInicioMotorista", "CPF", nullptr));
        label_7->setText(QApplication::translate("TelaInicioMotorista", "Nome do Motorista", nullptr));
        label_8->setText(QApplication::translate("TelaInicioMotorista", "RG ", nullptr));
        label_9->setText(QApplication::translate("TelaInicioMotorista", "Telefone ", nullptr));
        label_10->setText(QApplication::translate("TelaInicioMotorista", "Email", nullptr));
        label_CNH->setText(QApplication::translate("TelaInicioMotorista", "CNH - CARTEIRA NACIONAL DE HABILITA\303\207\303\203O", nullptr));
        label_Motorista->setText(QApplication::translate("TelaInicioMotorista", "              MOTORISTA", nullptr));
        labelCliente->setText(QApplication::translate("TelaInicioMotorista", "CLIENTE", nullptr));
        label_DataValidade->setText(QApplication::translate("TelaInicioMotorista", "Data de Validade", nullptr));
        label_11->setText(QApplication::translate("TelaInicioMotorista", "Categoria", nullptr));
        label_NumeroResgistro->setText(QApplication::translate("TelaInicioMotorista", "N\303\272mero de Registro", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicioMotorista: public Ui_TelaInicioMotorista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIOMOTORISTA_H
