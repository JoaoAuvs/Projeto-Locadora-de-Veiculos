#include "TelaInicioClienteJuridico.h"
#include "ui_TelaInicioClienteJuridico.h"
#include <QString>
#include <QMessageBox>
#include <TelaListarClienteJuridico.h>

TelaInicioClienteJuridico::TelaInicioClienteJuridico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaInicioClienteJuridico)
{
    ui->setupUi(this);


    //Permite a digitação apenas de numeros para CPF e Telefone
    ui->lineEdit_CNPJ->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_CNPJ));
    ui->lineEdit_Telefone->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_Telefone));
    ui->lineEdit_NomeCliente->setValidator(new QRegExpValidator(QRegExp("[a-z | A-Z]*"),ui->lineEdit_NomeCliente));
    ui->lineEdit_RazaoSocial->setValidator(new QRegExpValidator(QRegExp("[a-z | A-Z]*"),ui->lineEdit_RazaoSocial));
    ui->lineEdit_CNPJ->setInputMask("99.999.999/9999-99");
    ui->lineEdit_CNPJ->setMaxLength(14);
    try{
        //Instancia o controle
        controle = new ClienteJuridicoControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }
}

TelaInicioClienteJuridico::~TelaInicioClienteJuridico()
{
    delete ui;
}

void TelaInicioClienteJuridico::on_Incluir_clicked()
{
    try
    {
        QString CNPJ=ui->lineEdit_CNPJ->text();
        QString NomeCliente=ui->lineEdit_NomeCliente->text();
        QString NomeFantasia=ui->lineEdit_NomeFantasia->text();
        QString RazaoSocial=ui->lineEdit_RazaoSocial->text();
        QString Telefone=ui->lineEdit_Telefone->text();
        QString Email=ui->lineEdit_Email->text();

        if(ui->lineEdit_CNPJ->text().isEmpty()){
            QMessageBox::information(this,"AVISO","ADICIONE A DESCRIÇÃO");
        }else{
                //Monta o objeto Usuario com os Dados da Window
            ClienteJuridico cliente(CNPJ,NomeCliente,NomeFantasia,RazaoSocial,Telefone,Email);
                this->controle->incluirCliente(cliente);
                    QMessageBox::information(this,"Cliente","CLIENTE JURIDICO INCLUIDO!");
               }

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void TelaInicioClienteJuridico::on_Voltar_clicked()
{
    this->close();
}

void TelaInicioClienteJuridico::on_Listar_clicked()
{
    TelaListarClienteJuridico TelaListarJ;
    TelaListarJ.setModal(true);
    TelaListarJ.exec();
}
