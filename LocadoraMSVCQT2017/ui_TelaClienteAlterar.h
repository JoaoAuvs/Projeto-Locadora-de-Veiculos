/********************************************************************************
** Form generated from reading UI file 'TelaClienteAlterar.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACLIENTEALTERAR_H
#define UI_TELACLIENTEALTERAR_H

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

class Ui_TelaClienteAlterar
{
public:
    QPushButton *Voltar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_CPF;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_NomeCliente;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_RG;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_Telefone;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *lineEdit_Email;
    QPushButton *Incluir;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_ProcurarContato;
    QPushButton *ProcurarContato;

    void setupUi(QDialog *TelaClienteAlterar)
    {
        if (TelaClienteAlterar->objectName().isEmpty())
            TelaClienteAlterar->setObjectName(QString::fromUtf8("TelaClienteAlterar"));
        TelaClienteAlterar->resize(694, 381);
        Voltar = new QPushButton(TelaClienteAlterar);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(20, 10, 75, 23));
        layoutWidget = new QWidget(TelaClienteAlterar);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 60, 621, 261));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_CPF = new QLineEdit(layoutWidget);
        lineEdit_CPF->setObjectName(QString::fromUtf8("lineEdit_CPF"));

        horizontalLayout_2->addWidget(lineEdit_CPF);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_NomeCliente = new QLineEdit(layoutWidget);
        lineEdit_NomeCliente->setObjectName(QString::fromUtf8("lineEdit_NomeCliente"));

        horizontalLayout_3->addWidget(lineEdit_NomeCliente);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        lineEdit_RG = new QLineEdit(layoutWidget);
        lineEdit_RG->setObjectName(QString::fromUtf8("lineEdit_RG"));

        horizontalLayout_5->addWidget(lineEdit_RG);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_Telefone = new QLineEdit(layoutWidget);
        lineEdit_Telefone->setObjectName(QString::fromUtf8("lineEdit_Telefone"));

        horizontalLayout_6->addWidget(lineEdit_Telefone);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        lineEdit_Email = new QLineEdit(layoutWidget);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));

        horizontalLayout_7->addWidget(lineEdit_Email);


        verticalLayout->addLayout(horizontalLayout_7);

        Incluir = new QPushButton(TelaClienteAlterar);
        Incluir->setObjectName(QString::fromUtf8("Incluir"));
        Incluir->setGeometry(QRect(280, 330, 131, 41));
        layoutWidget1 = new QWidget(TelaClienteAlterar);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(300, 10, 391, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_ProcurarContato = new QLineEdit(layoutWidget1);
        lineEdit_ProcurarContato->setObjectName(QString::fromUtf8("lineEdit_ProcurarContato"));

        horizontalLayout->addWidget(lineEdit_ProcurarContato);

        ProcurarContato = new QPushButton(layoutWidget1);
        ProcurarContato->setObjectName(QString::fromUtf8("ProcurarContato"));

        horizontalLayout->addWidget(ProcurarContato);


        retranslateUi(TelaClienteAlterar);

        QMetaObject::connectSlotsByName(TelaClienteAlterar);
    } // setupUi

    void retranslateUi(QDialog *TelaClienteAlterar)
    {
        TelaClienteAlterar->setWindowTitle(QApplication::translate("TelaClienteAlterar", "Dialog", nullptr));
        Voltar->setText(QApplication::translate("TelaClienteAlterar", "Voltar", nullptr));
        label->setText(QApplication::translate("TelaClienteAlterar", "CPF", nullptr));
        label_2->setText(QApplication::translate("TelaClienteAlterar", "Nome Cliente", nullptr));
        label_4->setText(QApplication::translate("TelaClienteAlterar", "RG ", nullptr));
        label_5->setText(QApplication::translate("TelaClienteAlterar", "Telefone ", nullptr));
        label_6->setText(QApplication::translate("TelaClienteAlterar", "Email", nullptr));
        Incluir->setText(QApplication::translate("TelaClienteAlterar", "Incluir", nullptr));
        ProcurarContato->setText(QApplication::translate("TelaClienteAlterar", "Procurar Contato", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaClienteAlterar: public Ui_TelaClienteAlterar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACLIENTEALTERAR_H
