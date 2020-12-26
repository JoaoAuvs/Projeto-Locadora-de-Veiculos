/********************************************************************************
** Form generated from reading UI file 'TelaListarMarca.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTARMARCA_H
#define UI_TELALISTARMARCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListarMarca
{
public:
    QPushButton *pushButtonVoltar;
    QLineEdit *txtMarca;
    QLabel *label_ID;
    QTableWidget *tblMarca;
    QLabel *label_Marca;
    QLineEdit *txtID;
    QPushButton *pushButton_Alterar;

    void setupUi(QDialog *TelaListarMarca)
    {
        if (TelaListarMarca->objectName().isEmpty())
            TelaListarMarca->setObjectName(QString::fromUtf8("TelaListarMarca"));
        TelaListarMarca->resize(722, 584);
        pushButtonVoltar = new QPushButton(TelaListarMarca);
        pushButtonVoltar->setObjectName(QString::fromUtf8("pushButtonVoltar"));
        pushButtonVoltar->setGeometry(QRect(20, 10, 75, 23));
        txtMarca = new QLineEdit(TelaListarMarca);
        txtMarca->setObjectName(QString::fromUtf8("txtMarca"));
        txtMarca->setGeometry(QRect(128, 440, 251, 20));
        label_ID = new QLabel(TelaListarMarca);
        label_ID->setObjectName(QString::fromUtf8("label_ID"));
        label_ID->setGeometry(QRect(86, 470, 31, 41));
        tblMarca = new QTableWidget(TelaListarMarca);
        tblMarca->setObjectName(QString::fromUtf8("tblMarca"));
        tblMarca->setGeometry(QRect(38, 80, 651, 331));
        tblMarca->setSelectionMode(QAbstractItemView::SingleSelection);
        tblMarca->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblMarca->horizontalHeader()->setVisible(false);
        label_Marca = new QLabel(TelaListarMarca);
        label_Marca->setObjectName(QString::fromUtf8("label_Marca"));
        label_Marca->setGeometry(QRect(58, 430, 63, 49));
        txtID = new QLineEdit(TelaListarMarca);
        txtID->setObjectName(QString::fromUtf8("txtID"));
        txtID->setEnabled(false);
        txtID->setGeometry(QRect(128, 480, 251, 20));
        pushButton_Alterar = new QPushButton(TelaListarMarca);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setGeometry(QRect(200, 530, 126, 23));

        retranslateUi(TelaListarMarca);

        QMetaObject::connectSlotsByName(TelaListarMarca);
    } // setupUi

    void retranslateUi(QDialog *TelaListarMarca)
    {
        TelaListarMarca->setWindowTitle(QApplication::translate("TelaListarMarca", "Dialog", nullptr));
        pushButtonVoltar->setText(QApplication::translate("TelaListarMarca", "Voltar", nullptr));
        label_ID->setText(QApplication::translate("TelaListarMarca", "ID", nullptr));
        label_Marca->setText(QApplication::translate("TelaListarMarca", "Marca", nullptr));
        pushButton_Alterar->setText(QApplication::translate("TelaListarMarca", "Alterar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListarMarca: public Ui_TelaListarMarca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTARMARCA_H
