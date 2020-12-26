/********************************************************************************
** Form generated from reading UI file 'TelaListarClienteFisico.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELALISTARCLIENTEFISICO_H
#define UI_TELALISTARCLIENTEFISICO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TelaListarClienteFisico
{
public:
    QPushButton *Voltar;
    QTableWidget *tblClienteFisico;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *txtID;
    QLabel *label_6;
    QLineEdit *txtRg;
    QLabel *label_4;
    QLineEdit *txtEmail;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txtNomeCliente;
    QLabel *label_5;
    QLineEdit *txtCpf;
    QLabel *label_7;
    QLineEdit *txtTelefone;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_Alterar;

    void setupUi(QDialog *TelaListarClienteFisico)
    {
        if (TelaListarClienteFisico->objectName().isEmpty())
            TelaListarClienteFisico->setObjectName(QString::fromUtf8("TelaListarClienteFisico"));
        TelaListarClienteFisico->resize(639, 438);
        Voltar = new QPushButton(TelaListarClienteFisico);
        Voltar->setObjectName(QString::fromUtf8("Voltar"));
        Voltar->setGeometry(QRect(20, 10, 71, 41));
        tblClienteFisico = new QTableWidget(TelaListarClienteFisico);
        tblClienteFisico->setObjectName(QString::fromUtf8("tblClienteFisico"));
        tblClienteFisico->setGeometry(QRect(20, 60, 601, 221));
        tblClienteFisico->setSelectionMode(QAbstractItemView::SingleSelection);
        tblClienteFisico->setSelectionBehavior(QAbstractItemView::SelectRows);
        tblClienteFisico->horizontalHeader()->setVisible(false);
        horizontalLayoutWidget = new QWidget(TelaListarClienteFisico);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 290, 601, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        txtID = new QLineEdit(horizontalLayoutWidget);
        txtID->setObjectName(QString::fromUtf8("txtID"));
        txtID->setEnabled(false);

        horizontalLayout->addWidget(txtID);

        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        txtRg = new QLineEdit(horizontalLayoutWidget);
        txtRg->setObjectName(QString::fromUtf8("txtRg"));

        horizontalLayout->addWidget(txtRg);

        label_4 = new QLabel(horizontalLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        txtEmail = new QLineEdit(horizontalLayoutWidget);
        txtEmail->setObjectName(QString::fromUtf8("txtEmail"));

        horizontalLayout->addWidget(txtEmail);

        horizontalLayoutWidget_2 = new QWidget(TelaListarClienteFisico);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 340, 601, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txtNomeCliente = new QLineEdit(horizontalLayoutWidget_2);
        txtNomeCliente->setObjectName(QString::fromUtf8("txtNomeCliente"));

        horizontalLayout_2->addWidget(txtNomeCliente);

        label_5 = new QLabel(horizontalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        txtCpf = new QLineEdit(horizontalLayoutWidget_2);
        txtCpf->setObjectName(QString::fromUtf8("txtCpf"));
        txtCpf->setEnabled(false);

        horizontalLayout_2->addWidget(txtCpf);

        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        txtTelefone = new QLineEdit(horizontalLayoutWidget_2);
        txtTelefone->setObjectName(QString::fromUtf8("txtTelefone"));

        horizontalLayout_2->addWidget(txtTelefone);

        verticalLayoutWidget = new QWidget(TelaListarClienteFisico);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(230, 380, 191, 51));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_Alterar = new QPushButton(verticalLayoutWidget);
        pushButton_Alterar->setObjectName(QString::fromUtf8("pushButton_Alterar"));
        pushButton_Alterar->setEnabled(false);

        verticalLayout->addWidget(pushButton_Alterar);


        retranslateUi(TelaListarClienteFisico);

        QMetaObject::connectSlotsByName(TelaListarClienteFisico);
    } // setupUi

    void retranslateUi(QDialog *TelaListarClienteFisico)
    {
        TelaListarClienteFisico->setWindowTitle(QApplication::translate("TelaListarClienteFisico", "Dialog", nullptr));
        Voltar->setText(QApplication::translate("TelaListarClienteFisico", "Voltar", nullptr));
        label_3->setText(QApplication::translate("TelaListarClienteFisico", "ID", nullptr));
        label_6->setText(QApplication::translate("TelaListarClienteFisico", "RG", nullptr));
        txtRg->setText(QString());
        label_4->setText(QApplication::translate("TelaListarClienteFisico", "Email", nullptr));
        label_2->setText(QApplication::translate("TelaListarClienteFisico", "Nome Cliente", nullptr));
        label_5->setText(QApplication::translate("TelaListarClienteFisico", "CPF", nullptr));
        txtCpf->setText(QString());
        label_7->setText(QApplication::translate("TelaListarClienteFisico", "Telefone", nullptr));
        txtTelefone->setText(QString());
        pushButton_Alterar->setText(QApplication::translate("TelaListarClienteFisico", "Alterar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TelaListarClienteFisico: public Ui_TelaListarClienteFisico {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELALISTARCLIENTEFISICO_H
