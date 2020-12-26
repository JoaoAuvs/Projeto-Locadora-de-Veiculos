/********************************************************************************
** Form generated from reading UI file 'TelaListarMotorista.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTARMOTORISTA_H
#define UI_TELALISTARMOTORISTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListarMotorista
{
public:
    QPushButton *pushButtonVoltar;
    QTableWidget *tblMotorista;
    QPushButton *pushButton_Alterar;
    QLabel *label_CNH;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_NumeroResgistro;
    QLineEdit *lineEdit_NumeroRegistro;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_DataValidade;
    QDateEdit *dateEditData;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *lineEdit_NomeMotorista;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_RG_Motorista;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_CPF;
    QLineEdit *txtCPF;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelNomeMot;
    QLineEdit *txtNomeC;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_Telefone_Motorista;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *lineEdit_Email_Motorista;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_11;
    QLineEdit *lineEditCategoria;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QLineEdit *lineEditID;

    void setupUi(QDialog *TelaListarMotorista)
    {
        if (TelaListarMotorista->objectName().isEmpty())
            TelaListarMotorista->setObjectName(QString::fromUtf8("TelaListarMotorista"));
        TelaListarMotorista->resize(805, 683);
        pushButtonVoltar = new QPushButton(TelaListarMotorista);
        pushButtonVoltar->setObjectName(QString::fromUtf8("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(20, 10, 75, 23));
        tblMotorista = new QTableWidget(TelaListarMotorista);
        tblMotorista->setObjectName(QString::fromUtf8("tblMotorista"));
        tblMotorista->setGeometry(QRect(38, 50, 651, 331));
        tblMotorista->setSelectionMode(QAbstractItemView::SingleSelection);
        tblMotorista->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_Alterar = new QPushButton(TelaListarMotorista);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(310, 640, 126, 23));
        label_CNH = new QLabel(TelaListarMotorista);
        label_CNH->setObjectName(QString::fromUtf8("label_CNH"));
        label_CNH->setGeometry(QRect(70, 520, 631, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_CNH->setFont(font);
        layoutWidget_3 = new QWidget(TelaListarMotorista);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(270, 590, 236, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_NumeroResgistro = new QLabel(layoutWidget_3);
        label_NumeroResgistro->setObjectName(QString::fromUtf8("label_NumeroResgistro"));

        horizontalLayout_2->addWidget(label_NumeroResgistro);

        lineEdit_NumeroRegistro = new QLineEdit(layoutWidget_3);
        lineEdit_NumeroRegistro->setObjectName(QString::fromUtf8("lineEdit_NumeroRegistro"));
        lineEdit_NumeroRegistro->setEnabled(false);

        horizontalLayout_2->addWidget(lineEdit_NumeroRegistro);

        layoutWidget_4 = new QWidget(TelaListarMotorista);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(70, 590, 172, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget_4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_DataValidade = new QLabel(layoutWidget_4);
        label_DataValidade->setObjectName(QString::fromUtf8("label_DataValidade"));

        horizontalLayout->addWidget(label_DataValidade);

        dateEditData = new QDateEdit(layoutWidget_4);
        dateEditData->setObjectName(QString::fromUtf8("dateEditData"));

        horizontalLayout->addWidget(dateEditData);

        layoutWidget = new QWidget(TelaListarMotorista);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(440, 440, 231, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        lineEdit_NomeMotorista = new QLineEdit(layoutWidget);
        lineEdit_NomeMotorista->setObjectName(QString::fromUtf8("lineEdit_NomeMotorista"));

        horizontalLayout_3->addWidget(lineEdit_NomeMotorista);

        layoutWidget1 = new QWidget(TelaListarMotorista);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(270, 440, 158, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        lineEdit_RG_Motorista = new QLineEdit(layoutWidget1);
        lineEdit_RG_Motorista->setObjectName(QString::fromUtf8("lineEdit_RG_Motorista"));
        lineEdit_RG_Motorista->setEnabled(false);

        horizontalLayout_5->addWidget(lineEdit_RG_Motorista);

        layoutWidget2 = new QWidget(TelaListarMotorista);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(86, 440, 160, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_CPF = new QLabel(layoutWidget2);
        label_CPF->setObjectName(QString::fromUtf8("label_CPF"));

        horizontalLayout_6->addWidget(label_CPF);

        txtCPF = new QLineEdit(layoutWidget2);
        txtCPF->setObjectName(QString::fromUtf8("txtCPF"));
        txtCPF->setEnabled(false);

        horizontalLayout_6->addWidget(txtCPF);

        layoutWidget3 = new QWidget(TelaListarMotorista);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(58, 400, 204, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelNomeMot = new QLabel(layoutWidget3);
        labelNomeMot->setObjectName(QString::fromUtf8("labelNomeMot"));

        horizontalLayout_7->addWidget(labelNomeMot);

        txtNomeC = new QLineEdit(layoutWidget3);
        txtNomeC->setObjectName(QString::fromUtf8("txtNomeC"));
        txtNomeC->setEnabled(false);

        horizontalLayout_7->addWidget(txtNomeC);

        layoutWidget4 = new QWidget(TelaListarMotorista);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(50, 470, 186, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        lineEdit_Telefone_Motorista = new QLineEdit(layoutWidget4);
        lineEdit_Telefone_Motorista->setObjectName(QString::fromUtf8("lineEdit_Telefone_Motorista"));

        horizontalLayout_8->addWidget(lineEdit_Telefone_Motorista);

        layoutWidget5 = new QWidget(TelaListarMotorista);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(300, 400, 165, 22));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        lineEdit_Email_Motorista = new QLineEdit(layoutWidget5);
        lineEdit_Email_Motorista->setObjectName(QString::fromUtf8("lineEdit_Email_Motorista"));

        horizontalLayout_9->addWidget(lineEdit_Email_Motorista);

        layoutWidget6 = new QWidget(TelaListarMotorista);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(530, 590, 188, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_4->addWidget(label_11);

        lineEditCategoria = new QLineEdit(layoutWidget6);
        lineEditCategoria->setObjectName(QString::fromUtf8("lineEditCategoria"));

        horizontalLayout_4->addWidget(lineEditCategoria);

        layoutWidget7 = new QWidget(TelaListarMotorista);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(530, 400, 200, 22));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget7);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_10->addWidget(label);

        lineEditID = new QLineEdit(layoutWidget7);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));

        horizontalLayout_10->addWidget(lineEditID);


        retranslateUi(TelaListarMotorista);

        QMetaObject::connectSlotsByName(TelaListarMotorista);
    } // setupUi

    void retranslateUi(QDialog *TelaListarMotorista)
    {
        TelaListarMotorista->setWindowTitle(QApplication::translate("TelaListarMotorista", "Dialog", nullptr));
        pushButtonVoltar->setText(QApplication::translate("TelaListarMotorista", "Voltar", nullptr));
        pushButton_Alterar->setText(QApplication::translate("TelaListarMotorista", "Alterar", nullptr));
        label_CNH->setText(QApplication::translate("TelaListarMotorista", "CNH - CARTEIRA NACIONAL DE HABILITA\303\207\303\203O", nullptr));
        label_NumeroResgistro->setText(QApplication::translate("TelaListarMotorista", "N\303\272mero de Registro", nullptr));
        label_DataValidade->setText(QApplication::translate("TelaListarMotorista", "Data de Validade", nullptr));
        label_7->setText(QApplication::translate("TelaListarMotorista", "Nome do Motorista", nullptr));
        label_8->setText(QApplication::translate("TelaListarMotorista", "RG ", nullptr));
        label_CPF->setText(QApplication::translate("TelaListarMotorista", "CPF", nullptr));
        labelNomeMot->setText(QApplication::translate("TelaListarMotorista", "Nome Cliente", nullptr));
        label_9->setText(QApplication::translate("TelaListarMotorista", "Telefone ", nullptr));
        label_10->setText(QApplication::translate("TelaListarMotorista", "Email", nullptr));
        label_11->setText(QApplication::translate("TelaListarMotorista", "Categoria", nullptr));
        label->setText(QApplication::translate("TelaListarMotorista", "ID Motorista", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListarMotorista: public Ui_TelaListarMotorista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTARMOTORISTA_H
