/********************************************************************************
** Form generated from reading UI file 'TelaListarMotoristaJ.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTARMOTORISTAJ_H
#define UI_TELALISTARMOTORISTAJ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListarMotoristaJ
{
public:
    QLabel *label_CPF;
    QLabel *labelNomeMot;
    QLineEdit *txtCPF;
    QPushButton *pushButtonVoltar;
    QLineEdit *txtNomeMotorista;
    QTableWidget *tblMotorista;
    QPushButton *pushButton_Alterar;

    void setupUi(QDialog *TelaListarMotoristaJ)
    {
        if (TelaListarMotoristaJ->objectName().isEmpty())
            TelaListarMotoristaJ->setObjectName(QString::fromUtf8("TelaListarMotoristaJ"));
        TelaListarMotoristaJ->resize(742, 539);
        label_CPF = new QLabel(TelaListarMotoristaJ);
        label_CPF->setObjectName(QString::fromUtf8("label_CPF"));
        label_CPF->setGeometry(QRect(86, 450, 31, 41));
        labelNomeMot = new QLabel(TelaListarMotoristaJ);
        labelNomeMot->setObjectName(QString::fromUtf8("labelNomeMot"));
        labelNomeMot->setGeometry(QRect(58, 410, 63, 49));
        txtCPF = new QLineEdit(TelaListarMotoristaJ);
        txtCPF->setObjectName(QString::fromUtf8("txtCPF"));
        txtCPF->setGeometry(QRect(128, 460, 251, 20));
        pushButtonVoltar = new QPushButton(TelaListarMotoristaJ);
        pushButtonVoltar->setObjectName(QString::fromUtf8("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(20, 20, 75, 23));
        txtNomeMotorista = new QLineEdit(TelaListarMotoristaJ);
        txtNomeMotorista->setObjectName(QString::fromUtf8("txtNomeMotorista"));
        txtNomeMotorista->setGeometry(QRect(128, 420, 251, 20));
        tblMotorista = new QTableWidget(TelaListarMotoristaJ);
        tblMotorista->setObjectName(QString::fromUtf8("tblMotorista"));
        tblMotorista->setGeometry(QRect(38, 60, 651, 331));
        tblMotorista->setSelectionMode(QAbstractItemView::SingleSelection);
        tblMotorista->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_Alterar = new QPushButton(TelaListarMotoristaJ);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(200, 510, 126, 23));

        retranslateUi(TelaListarMotoristaJ);

        QMetaObject::connectSlotsByName(TelaListarMotoristaJ);
    } // setupUi

    void retranslateUi(QDialog *TelaListarMotoristaJ)
    {
        TelaListarMotoristaJ->setWindowTitle(QApplication::translate("TelaListarMotoristaJ", "Dialog", nullptr));
        label_CPF->setText(QApplication::translate("TelaListarMotoristaJ", "CPF", nullptr));
        labelNomeMot->setText(QApplication::translate("TelaListarMotoristaJ", "Nome Cliente", nullptr));
        pushButtonVoltar->setText(QApplication::translate("TelaListarMotoristaJ", "Voltar", nullptr));
        pushButton_Alterar->setText(QApplication::translate("TelaListarMotoristaJ", "Alterar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListarMotoristaJ: public Ui_TelaListarMotoristaJ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTARMOTORISTAJ_H
