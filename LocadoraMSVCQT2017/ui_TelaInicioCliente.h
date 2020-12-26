/********************************************************************************
** Form generated from reading UI file 'TelaInicioCliente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIOCLIENTE_H
#define UI_TELAINICIOCLIENTE_H

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

class Ui_TelaInicioCliente
{
public:
    QPushButton *Voltar;
    QPushButton *Incluir;
    QPushButton *Listar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_CPF;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_NomeCliente;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_RG;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEdit_Telefone;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_Email;
    QLabel *label_3;

    void setupUi(QDialog *TelaInicioCliente)
    {
        if (TelaInicioCliente->objectName().isEmpty())
            TelaInicioCliente->setObjectName(QString::fromUtf8("TelaInicioCliente"));
        TelaInicioCliente->resize(681, 335);
        Voltar = new QPushButton(TelaInicioCliente);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(20, 10, 71, 51));
        Incluir = new QPushButton(TelaInicioCliente);
        Incluir->setObjectName(QString::fromUtf8("Incluir"));
        Incluir->setGeometry(QRect(170, 280, 151, 41));
        Listar = new QPushButton(TelaInicioCliente);
        Listar->setObjectName(QString::fromUtf8("Listar"));
        Listar->setGeometry(QRect(360, 280, 161, 41));
        layoutWidget = new QWidget(TelaInicioCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 641, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_CPF = new QLineEdit(layoutWidget);
        lineEdit_CPF->setObjectName(QString::fromUtf8("lineEdit_CPF"));

        horizontalLayout->addWidget(lineEdit_CPF);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_NomeCliente = new QLineEdit(layoutWidget);
        lineEdit_NomeCliente->setObjectName(QString::fromUtf8("lineEdit_NomeCliente"));

        horizontalLayout_2->addWidget(lineEdit_NomeCliente);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEdit_RG = new QLineEdit(layoutWidget);
        lineEdit_RG->setObjectName(QString::fromUtf8("lineEdit_RG"));

        horizontalLayout_4->addWidget(lineEdit_RG);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEdit_Telefone = new QLineEdit(layoutWidget);
        lineEdit_Telefone->setObjectName(QString::fromUtf8("lineEdit_Telefone"));

        horizontalLayout_5->addWidget(lineEdit_Telefone);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_Email = new QLineEdit(layoutWidget);
        lineEdit_Email->setObjectName(QString::fromUtf8("lineEdit_Email"));

        horizontalLayout_6->addWidget(lineEdit_Email);


        verticalLayout->addLayout(horizontalLayout_6);

        label_3 = new QLabel(TelaInicioCliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 10, 191, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        retranslateUi(TelaInicioCliente);

        QMetaObject::connectSlotsByName(TelaInicioCliente);
    } // setupUi

    void retranslateUi(QDialog *TelaInicioCliente)
    {
        TelaInicioCliente->setWindowTitle(QApplication::translate("TelaInicioCliente", "Dialog", nullptr));
        Voltar->setText(QApplication::translate("TelaInicioCliente", "Voltar", nullptr));
        Incluir->setText(QApplication::translate("TelaInicioCliente", "CADASTRAR", nullptr));
        Listar->setText(QApplication::translate("TelaInicioCliente", "BUSCAR", nullptr));
        label->setText(QApplication::translate("TelaInicioCliente", "CPF", nullptr));
        label_2->setText(QApplication::translate("TelaInicioCliente", "Nome Cliente", nullptr));
        label_4->setText(QApplication::translate("TelaInicioCliente", "RG ", nullptr));
        label_5->setText(QApplication::translate("TelaInicioCliente", "Telefone ", nullptr));
        label_6->setText(QApplication::translate("TelaInicioCliente", "Email", nullptr));
        label_3->setText(QApplication::translate("TelaInicioCliente", "Cliente F\303\255sico", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicioCliente: public Ui_TelaInicioCliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIOCLIENTE_H
