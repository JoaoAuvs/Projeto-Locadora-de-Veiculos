/********************************************************************************
** Form generated from reading UI file 'TelaPrincipal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAPRINCIPAL_H
#define UI_TELAPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TelaPrincipal
{
public:
    QPushButton *Cliente;
    QPushButton *Veiculos;
    QPushButton *Marca;
    QPushButton *Modelo;
    QPushButton *Locacao;
    QPushButton *Voltar;
    QPushButton *ClienteJuridico;

    void setupUi(QDialog *TelaPrincipal)
    {
        if (TelaPrincipal->objectName().isEmpty())
            TelaPrincipal->setObjectName(QString::fromUtf8("TelaPrincipal"));
        TelaPrincipal->resize(788, 454);
        Cliente = new QPushButton(TelaPrincipal);
        Cliente->setObjectName(QString::fromUtf8("Cliente"));
        Cliente->setGeometry(QRect(250, 30, 131, 71));
        Veiculos = new QPushButton(TelaPrincipal);
        Veiculos->setObjectName(QString::fromUtf8("Veiculos"));
        Veiculos->setGeometry(QRect(250, 240, 131, 71));
        Marca = new QPushButton(TelaPrincipal);
        Marca->setObjectName(QString::fromUtf8("Marca"));
        Marca->setGeometry(QRect(250, 140, 131, 71));
        Modelo = new QPushButton(TelaPrincipal);
        Modelo->setObjectName(QString::fromUtf8("Modelo"));
        Modelo->setGeometry(QRect(400, 140, 131, 71));
        Locacao = new QPushButton(TelaPrincipal);
        Locacao->setObjectName(QString::fromUtf8("Locacao"));
        Locacao->setGeometry(QRect(400, 240, 131, 71));
        Voltar = new QPushButton(TelaPrincipal);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(320, 340, 131, 71));
        ClienteJuridico = new QPushButton(TelaPrincipal);
        ClienteJuridico->setObjectName(QString::fromUtf8("ClienteJuridico"));
        ClienteJuridico->setGeometry(QRect(400, 30, 131, 71));

        retranslateUi(TelaPrincipal);

        QMetaObject::connectSlotsByName(TelaPrincipal);
    } // setupUi

    void retranslateUi(QDialog *TelaPrincipal)
    {
        TelaPrincipal->setWindowTitle(QApplication::translate("TelaPrincipal", "Dialog", nullptr));
        Cliente->setText(QApplication::translate("TelaPrincipal", " Cliente F\303\255sico", nullptr));
        Veiculos->setText(QApplication::translate("TelaPrincipal", " Ve\303\255culos", nullptr));
        Marca->setText(QApplication::translate("TelaPrincipal", "Marca", nullptr));
        Modelo->setText(QApplication::translate("TelaPrincipal", " Modelo ", nullptr));
        Locacao->setText(QApplication::translate("TelaPrincipal", " Loca\303\247\303\243o", nullptr));
        Voltar->setText(QApplication::translate("TelaPrincipal", "Finalizar", nullptr));
        ClienteJuridico->setText(QApplication::translate("TelaPrincipal", " Cliente Juridico", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaPrincipal: public Ui_TelaPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAPRINCIPAL_H
