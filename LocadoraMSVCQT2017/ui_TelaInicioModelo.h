/********************************************************************************
** Form generated from reading UI file 'TelaInicioModelo.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELAINICIOMODELO_H
#define UI_TELAINICIOMODELO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaInicioModelo
{
public:
    QPushButton *voltar;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Descrcao;
    QLineEdit *lineEdit_Descricao;
    QComboBox *comboBox_Marca;
    QLabel *label_Marca;
    QPushButton *pushButtonINCLUIR;
    QPushButton *pushButton_LISTAR;

    void setupUi(QDialog *TelaInicioModelo)
    {
        if (TelaInicioModelo->objectName().isEmpty())
            TelaInicioModelo->setObjectName(QString::fromUtf8("TelaInicioModelo"));
        TelaInicioModelo->resize(596, 387);
        voltar = new QPushButton(TelaInicioModelo);
        voltar->setObjectName(QString::fromUtf8("voltar"));
        voltar->setGeometry(QRect(30, 10, 75, 23));
        label = new QLabel(TelaInicioModelo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 60, 311, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget = new QWidget(TelaInicioModelo);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 180, 311, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_Descrcao = new QLabel(layoutWidget);
        label_Descrcao->setObjectName(QString::fromUtf8("label_Descrcao"));

        horizontalLayout_2->addWidget(label_Descrcao);

        lineEdit_Descricao = new QLineEdit(layoutWidget);
        lineEdit_Descricao->setObjectName(QString::fromUtf8("lineEdit_Descricao"));

        horizontalLayout_2->addWidget(lineEdit_Descricao);

        comboBox_Marca = new QComboBox(TelaInicioModelo);
        comboBox_Marca->setObjectName(QString::fromUtf8("comboBox_Marca"));
        comboBox_Marca->setGeometry(QRect(190, 120, 261, 22));
        label_Marca = new QLabel(TelaInicioModelo);
        label_Marca->setObjectName(QString::fromUtf8("label_Marca"));
        label_Marca->setGeometry(QRect(140, 120, 47, 13));
        pushButtonINCLUIR = new QPushButton(TelaInicioModelo);
        pushButtonINCLUIR->setObjectName(QString::fromUtf8("pushButtonINCLUIR"));
        pushButtonINCLUIR->setGeometry(QRect(140, 270, 141, 51));
        pushButton_LISTAR = new QPushButton(TelaInicioModelo);
        pushButton_LISTAR->setObjectName(QString::fromUtf8("pushButton_LISTAR"));
        pushButton_LISTAR->setGeometry(QRect(300, 270, 151, 51));

        retranslateUi(TelaInicioModelo);

        QMetaObject::connectSlotsByName(TelaInicioModelo);
    } // setupUi

    void retranslateUi(QDialog *TelaInicioModelo)
    {
        TelaInicioModelo->setWindowTitle(QApplication::translate("TelaInicioModelo", "Dialog", nullptr));
        voltar->setText(QApplication::translate("TelaInicioModelo", "voltar", nullptr));
        label->setText(QApplication::translate("TelaInicioModelo", "CADASTRAR MODELO", nullptr));
        label_Descrcao->setText(QApplication::translate("TelaInicioModelo", "MODELO", nullptr));
        label_Marca->setText(QApplication::translate("TelaInicioModelo", "MARCA", nullptr));
        pushButtonINCLUIR->setText(QApplication::translate("TelaInicioModelo", "CADASTRAR", nullptr));
        pushButton_LISTAR->setText(QApplication::translate("TelaInicioModelo", "BUSCAR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaInicioModelo: public Ui_TelaInicioModelo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELAINICIOMODELO_H
