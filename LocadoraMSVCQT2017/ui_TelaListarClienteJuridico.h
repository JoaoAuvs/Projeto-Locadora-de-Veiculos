/********************************************************************************
** Form generated from reading UI file 'TelaListarClienteJuridico.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTARCLIENTEJURIDICO_H
#define UI_TELALISTARCLIENTEJURIDICO_H

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

class Ui_TelaListarClienteJuridico
{
public:
    QPushButton *pushButton_Voltar;
    QTableWidget *tblClienteJuridico;
    QPushButton *pushButtonAlterar;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *txtEmail;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLineEdit *txtTelefone;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *txtNomeCliente;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_CNPJ;
    QLineEdit *txtCNPJ;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *txtID;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelNomeFantasia;
    QLineEdit *lineEditNomeFantasia;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label;
    QLineEdit *lineEditRazaoSocial;

    void setupUi(QDialog *TelaListarClienteJuridico)
    {
        if (TelaListarClienteJuridico->objectName().isEmpty())
            TelaListarClienteJuridico->setObjectName(QString::fromUtf8("TelaListarClienteJuridico"));
        TelaListarClienteJuridico->resize(736, 568);
        pushButton_Voltar = new QPushButton(TelaListarClienteJuridico);
        pushButton_Voltar->setObjectName(QString::fromUtf8("pushButton_Voltar"));
        pushButton_Voltar->setGeometry(QRect(40, 10, 75, 41));
        tblClienteJuridico = new QTableWidget(TelaListarClienteJuridico);
        tblClienteJuridico->setObjectName(QString::fromUtf8("tblClienteJuridico"));
        tblClienteJuridico->setGeometry(QRect(40, 60, 651, 331));
        tblClienteJuridico->setSelectionMode(QAbstractItemView::SingleSelection);
        tblClienteJuridico->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButtonAlterar = new QPushButton(TelaListarClienteJuridico);
        pushButtonAlterar->setObjectName(QString::fromUtf8("pushButtonAlterar"));
        pushButtonAlterar->setGeometry(QRect(310, 510, 131, 41));
        layoutWidget = new QWidget(TelaListarClienteJuridico);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 400, 165, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        txtEmail = new QLineEdit(layoutWidget);
        txtEmail->setObjectName(QString::fromUtf8("txtEmail"));

        horizontalLayout_2->addWidget(txtEmail);

        layoutWidget1 = new QWidget(TelaListarClienteJuridico);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 400, 183, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_3->addWidget(label_7);

        txtTelefone = new QLineEdit(layoutWidget1);
        txtTelefone->setObjectName(QString::fromUtf8("txtTelefone"));

        horizontalLayout_3->addWidget(txtTelefone);

        layoutWidget2 = new QWidget(TelaListarClienteJuridico);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(40, 400, 204, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        txtNomeCliente = new QLineEdit(layoutWidget2);
        txtNomeCliente->setObjectName(QString::fromUtf8("txtNomeCliente"));

        horizontalLayout_5->addWidget(txtNomeCliente);

        layoutWidget3 = new QWidget(TelaListarClienteJuridico);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 440, 166, 22));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_CNPJ = new QLabel(layoutWidget3);
        label_CNPJ->setObjectName(QString::fromUtf8("label_CNPJ"));

        horizontalLayout_6->addWidget(label_CNPJ);

        txtCNPJ = new QLineEdit(layoutWidget3);
        txtCNPJ->setObjectName(QString::fromUtf8("txtCNPJ"));
        txtCNPJ->setEnabled(false);

        horizontalLayout_6->addWidget(txtCNPJ);

        layoutWidget4 = new QWidget(TelaListarClienteJuridico);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 470, 152, 22));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        txtID = new QLineEdit(layoutWidget4);
        txtID->setObjectName(QString::fromUtf8("txtID"));
        txtID->setEnabled(false);

        horizontalLayout_7->addWidget(txtID);

        layoutWidget5 = new QWidget(TelaListarClienteJuridico);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(230, 440, 212, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelNomeFantasia = new QLabel(layoutWidget5);
        labelNomeFantasia->setObjectName(QString::fromUtf8("labelNomeFantasia"));

        horizontalLayout_4->addWidget(labelNomeFantasia);

        lineEditNomeFantasia = new QLineEdit(layoutWidget5);
        lineEditNomeFantasia->setObjectName(QString::fromUtf8("lineEditNomeFantasia"));

        horizontalLayout_4->addWidget(lineEditNomeFantasia);

        layoutWidget6 = new QWidget(TelaListarClienteJuridico);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(230, 470, 201, 22));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget6);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_8->addWidget(label);

        lineEditRazaoSocial = new QLineEdit(layoutWidget6);
        lineEditRazaoSocial->setObjectName(QString::fromUtf8("lineEditRazaoSocial"));

        horizontalLayout_8->addWidget(lineEditRazaoSocial);


        retranslateUi(TelaListarClienteJuridico);

        QMetaObject::connectSlotsByName(TelaListarClienteJuridico);
    } // setupUi

    void retranslateUi(QDialog *TelaListarClienteJuridico)
    {
        TelaListarClienteJuridico->setWindowTitle(QApplication::translate("TelaListarClienteJuridico", "Dialog", nullptr));
        pushButton_Voltar->setText(QApplication::translate("TelaListarClienteJuridico", "Voltar", nullptr));
        pushButtonAlterar->setText(QApplication::translate("TelaListarClienteJuridico", "Alterar", nullptr));
        label_4->setText(QApplication::translate("TelaListarClienteJuridico", "Email", nullptr));
        label_7->setText(QApplication::translate("TelaListarClienteJuridico", "Telefone", nullptr));
        txtTelefone->setText(QString());
        label_2->setText(QApplication::translate("TelaListarClienteJuridico", "Nome Cliente", nullptr));
        label_CNPJ->setText(QApplication::translate("TelaListarClienteJuridico", "CNPJ", nullptr));
        label_3->setText(QApplication::translate("TelaListarClienteJuridico", "ID", nullptr));
        labelNomeFantasia->setText(QApplication::translate("TelaListarClienteJuridico", "Nome Fantasia", nullptr));
        label->setText(QApplication::translate("TelaListarClienteJuridico", "Raz\303\243o Social", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListarClienteJuridico: public Ui_TelaListarClienteJuridico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTARCLIENTEJURIDICO_H
