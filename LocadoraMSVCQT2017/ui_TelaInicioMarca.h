/********************************************************************************
** Form generated from reading UI file 'TelaInicioMarca.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIOMARCA_H
#define UI_TELAINICIOMARCA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicioMarca
{
public:
    QPushButton *Voltar;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Descricao;
    QLineEdit *lineEdit_Descricao;
    QPushButton *pushButton_Incluir;
    QPushButton *pushButton_Listar;

    void setupUi(QDialog *TelaInicioMarca)
    {
        if (TelaInicioMarca->objectName().isEmpty())
            TelaInicioMarca->setObjectName(QString::fromUtf8("TelaInicioMarca"));
        TelaInicioMarca->resize(623, 335);
        Voltar = new QPushButton(TelaInicioMarca);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(10, 20, 75, 23));
        label = new QLabel(TelaInicioMarca);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 60, 341, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget = new QWidget(TelaInicioMarca);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 140, 361, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_Descricao = new QLabel(layoutWidget);
        label_Descricao->setObjectName(QString::fromUtf8("label_Descricao"));

        horizontalLayout->addWidget(label_Descricao);

        lineEdit_Descricao = new QLineEdit(layoutWidget);
        lineEdit_Descricao->setObjectName(QString::fromUtf8("lineEdit_Descricao"));

        horizontalLayout->addWidget(lineEdit_Descricao);

        pushButton_Incluir = new QPushButton(TelaInicioMarca);
        pushButton_Incluir->setObjectName(QString::fromUtf8("pushButton_Incluir"));
        pushButton_Incluir->setGeometry(QRect(110, 230, 172, 41));
        pushButton_Listar = new QPushButton(TelaInicioMarca);
        pushButton_Listar->setObjectName(QString::fromUtf8("pushButton_Listar"));
        pushButton_Listar->setGeometry(QRect(300, 230, 171, 41));

        retranslateUi(TelaInicioMarca);

        QMetaObject::connectSlotsByName(TelaInicioMarca);
    } // setupUi

    void retranslateUi(QDialog *TelaInicioMarca)
    {
        TelaInicioMarca->setWindowTitle(QApplication::translate("TelaInicioMarca", "Dialog", nullptr));
        Voltar->setText(QApplication::translate("TelaInicioMarca", "Voltar", nullptr));
        label->setText(QApplication::translate("TelaInicioMarca", "CADASTRAR MARCA", nullptr));
        label_Descricao->setText(QApplication::translate("TelaInicioMarca", "DESCRI\303\207\303\203O", nullptr));
        pushButton_Incluir->setText(QApplication::translate("TelaInicioMarca", "CADASTRAR", nullptr));
        pushButton_Listar->setText(QApplication::translate("TelaInicioMarca", "BUSCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicioMarca: public Ui_TelaInicioMarca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIOMARCA_H
