/********************************************************************************
** Form generated from reading UI file 'TelaListarModelo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTARMODELO_H
#define UI_TELALISTARMODELO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListarModelo
{
public:
    QPushButton *pushButtonVoltar;
    QLineEdit *txtModelo;
    QLabel *label_ID;
    QTableWidget *tblModelo;
    QLabel *label_Modelo;
    QLineEdit *txtID;
    QPushButton *pushButton_Alterar;

    void setupUi(QDialog *TelaListarModelo)
    {
        if (TelaListarModelo->objectName().isEmpty())
            TelaListarModelo->setObjectName(QString::fromUtf8("TelaListarModelo"));
        TelaListarModelo->setEnabled(true);
        TelaListarModelo->resize(715, 579);
        pushButtonVoltar = new QPushButton(TelaListarModelo);
        pushButtonVoltar->setObjectName(QString::fromUtf8("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(10, 10, 75, 23));
        txtModelo = new QLineEdit(TelaListarModelo);
        txtModelo->setObjectName(QString::fromUtf8("txtModelo"));
        txtModelo->setEnabled(true);
        txtModelo->setGeometry(QRect(118, 430, 251, 20));
        label_ID = new QLabel(TelaListarModelo);
        label_ID->setObjectName(QString::fromUtf8("label_ID"));
        label_ID->setGeometry(QRect(76, 460, 31, 41));
        tblModelo = new QTableWidget(TelaListarModelo);
        tblModelo->setObjectName(QString::fromUtf8("tblModelo"));
        tblModelo->setEnabled(true);
        tblModelo->setGeometry(QRect(28, 70, 651, 331));
        tblModelo->setSelectionMode(QAbstractItemView::SingleSelection);
        tblModelo->setSelectionBehavior(QAbstractItemView::SelectRows);
        label_Modelo = new QLabel(TelaListarModelo);
        label_Modelo->setObjectName(QString::fromUtf8("label_Modelo"));
        label_Modelo->setGeometry(QRect(48, 420, 63, 49));
        txtID = new QLineEdit(TelaListarModelo);
        txtID->setObjectName(QString::fromUtf8("txtID"));
        txtID->setEnabled(false);
        txtID->setGeometry(QRect(118, 470, 251, 20));
        pushButton_Alterar = new QPushButton(TelaListarModelo);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(190, 520, 126, 23));

        retranslateUi(TelaListarModelo);

        QMetaObject::connectSlotsByName(TelaListarModelo);
    } // setupUi

    void retranslateUi(QDialog *TelaListarModelo)
    {
        TelaListarModelo->setWindowTitle(QApplication::translate("TelaListarModelo", "Dialog", nullptr));
        pushButtonVoltar->setText(QApplication::translate("TelaListarModelo", "Voltar", nullptr));
        label_ID->setText(QApplication::translate("TelaListarModelo", "ID", nullptr));
        label_Modelo->setText(QApplication::translate("TelaListarModelo", "Modelo", nullptr));
        pushButton_Alterar->setText(QApplication::translate("TelaListarModelo", "Alterar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListarModelo: public Ui_TelaListarModelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTARMODELO_H
