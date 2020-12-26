#include "AlterarClienteJuridico.h"
#include "ui_AlterarClienteJuridicoPersistencia.h"

AlterarClienteJuridicoPersistencia::AlterarClienteJuridicoPersistencia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AlterarClienteJuridicoPersistencia)
{
    ui->setupUi(this);
}

AlterarClienteJuridicoPersistencia::~AlterarClienteJuridicoPersistencia()
{
    delete ui;
}
