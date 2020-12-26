#include "TelaPrincipal.h"
#include "ui_TelaPrincipal.h"
#include "TelaInicioMotorista.h"

TelaPrincipal::TelaPrincipal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaPrincipal)
{
    ui->setupUi(this);
}

TelaPrincipal::~TelaPrincipal()
{
    delete ui;
}

void TelaPrincipal::on_Cliente_clicked()
{
    TelaInicioCliente telaCLienteI;
    telaCLienteI.setModal(true);
    telaCLienteI.exec();
}

void TelaPrincipal::on_Veiculos_clicked()
{
    try {
        TelaInicioVeiculo telaVeiculoI;
        telaVeiculoI.setModal(true);
        telaVeiculoI.exec();
    } catch (QString erro) {
        QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}

void TelaPrincipal::on_Marca_clicked()
{
    TelaInicioMarca telaMarcaI;
    telaMarcaI.setModal(true);
    telaMarcaI.exec();
}

void TelaPrincipal::on_Modelo_clicked()
{
    try {
        TelaInicioModelo telaModeloI;
        telaModeloI.setModal(true);
        telaModeloI.exec();
    } catch (QString erro){
         QMessageBox::information(this,"ERRO DO SISTEMA",erro);
    }
}

void TelaPrincipal::on_Locacao_clicked()
{
    TelaInicioLocacao telaLocacaoI;
    telaLocacaoI.setModal(true);
    telaLocacaoI.exec();
}

void TelaPrincipal::on_Voltar_clicked()
{
    this->close();
}

void TelaPrincipal::on_ClienteJuridico_clicked()
{
    TelaInicioClienteJuridico telaCLienteJ;
    telaCLienteJ.setModal(true);
    telaCLienteJ.exec();
}

void TelaPrincipal::on_Veiculos_2_clicked()
{
    TelaInicioMotorista telamoto;
    telamoto.setModal(true);
    telamoto.exec();
}
