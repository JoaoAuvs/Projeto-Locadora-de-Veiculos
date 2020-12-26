#include "TelaClienteAlterar.h"
#include "ui_TelaClienteAlterar.h"

TelaClienteAlterar::TelaClienteAlterar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaClienteAlterar)
{
    ui->setupUi(this);
}

TelaClienteAlterar::~TelaClienteAlterar()
{
    delete ui;
}

void TelaClienteAlterar::on_Voltar_clicked()
{
    this->close();
}

void TelaClienteAlterar::on_Incluir_clicked()
{

}
