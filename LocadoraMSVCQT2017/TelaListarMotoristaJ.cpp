#include "TelaListarMotoristaJ.h"
#include "ui_TelaListarMotoristaJ.h"

TelaListarMotoristaJ::TelaListarMotoristaJ(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListarMotoristaJ)
{
    ui->setupUi(this);
}

TelaListarMotoristaJ::~TelaListarMotoristaJ()
{
    delete ui;
}

void TelaListarMotoristaJ::on_pushButton_Alterar_clicked()
{

}
