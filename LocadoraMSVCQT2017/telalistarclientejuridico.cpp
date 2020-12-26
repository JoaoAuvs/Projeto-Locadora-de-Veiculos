#include "TelaListarClienteJuridico.h"
#include "ui_TelaListarClienteJuridico.h"
#include <QMessageBox>
#include <QtSql>
#include <iostream>
#include <QString>
#include <TelaInicioClienteJuridico.h>
#include <TelaPrincipal.h>
#include <QTableWidget>
#include <iostream>
TelaListarClienteJuridico::TelaListarClienteJuridico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListarClienteJuridico)
{
    ui->setupUi(this);

    controle = new ClienteJuridicoControle;
    atualizaTabela(); // sempre carregamos ao iniciar

}

TelaListarClienteJuridico::~TelaListarClienteJuridico()
{
    delete ui;
}

void TelaListarClienteJuridico::atualizaTabela()
{
    ui->tblClienteJuridico->clear();

    //depois vc pesquisa como excluir as linhas tbm
    QSqlQuery query;
    query.prepare("select * from tb_PessoaJuridica");
    if(query.exec()){
        int cont=0;
        ui->tblClienteJuridico->setColumnCount(7); // aqui é a quantidade de colunas do select acima

        while(query.next()){ // setar a consulta na tabela através dos indices - coluna 1 do select
            //é igual a coluna 0 da tabela...
            ui->tblClienteJuridico->insertRow(cont);
            ui->tblClienteJuridico->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tblClienteJuridico->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tblClienteJuridico->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->tblClienteJuridico->setItem(cont, 3,new QTableWidgetItem(query.value(3).toString()));
            ui->tblClienteJuridico->setItem(cont, 4,new QTableWidgetItem(query.value(4).toString()));
            ui->tblClienteJuridico->setItem(cont, 5,new QTableWidgetItem(query.value(5).toString()));
            ui->tblClienteJuridico->setItem(cont, 6,new QTableWidgetItem(query.value(6).toString()));
            ui->tblClienteJuridico->setRowHeight(cont,20);
            cont++;
        }
    }else{
        QMessageBox::information(this, "Erro", "Erro ao pesquisar na tabela de contatos");
    }
}

void TelaListarClienteJuridico::on_pushButton_Voltar_clicked()
{
    this->close();
}

void TelaListarClienteJuridico::on_tblClienteJuridico_cellClicked(int row, int column){

        //somente ao clicar em uma linha os botões serão ativados
        //ui->pushButton_Excluir->setEnabled(true);
        ui->pushButtonAlterar->setEnabled(true);

        //setando as caixas de dados para alterar pelos indices da tabela
        ui->txtCNPJ->setText(ui->tblClienteJuridico->item(row,0)->text());
        ui->txtNomeCliente->setText(ui->tblClienteJuridico->item(row,1)->text());
        ui->lineEditNomeFantasia->setText(ui->tblClienteJuridico->item(row,2)->text());
        ui->lineEditRazaoSocial->setText(ui->tblClienteJuridico->item(row,3)->text());
        ui->txtTelefone->setText(ui->tblClienteJuridico->item(row,4)->text());
        ui->txtEmail->setText(ui->tblClienteJuridico->item(row,5)->text());
        ui->txtID->setText(ui->tblClienteJuridico->item(row,6)->text());


}

void TelaListarClienteJuridico::on_pushButton_Alterar_clicked(){
    try
    {
      QString CNPJ = ui->txtCNPJ->text();
      QString NomePessoaJuridica = ui->txtNomeCliente->text();
      QString NomeFantasia = ui->lineEditNomeFantasia->text();
      QString RazaoSocial = ui->lineEditRazaoSocial->text();
      QString TelefonePessoaJuridica = ui->txtTelefone->text();
      QString EmailPessoaJuridica = ui->txtEmail->text();

                //Monta o objeto Usuario com os Dados da Window
           ClienteJuridico cliente(CNPJ,NomePessoaJuridica,NomeFantasia
                                   ,RazaoSocial,TelefonePessoaJuridica,EmailPessoaJuridica);
            int codigo = (ui->txtID->text()).toInt();
            cliente.setID(codigo);
                this->controle->alterarCliente(cliente);
                    QMessageBox::information(this,"Cliente","CLIENTE ALTERADO!");
                    atualizaTabela();

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void TelaListarClienteJuridico::on_pushButtonAlterar_clicked()
{
    try
    {
      QString CNPJ = ui->txtCNPJ->text();
      QString NomePessoaJuridica = ui->txtNomeCliente->text();
      QString NomeFantasia = ui->lineEditNomeFantasia->text();
      QString RazaoSocial = ui->lineEditRazaoSocial->text();
      QString TelefonePessoaJuridica = ui->txtTelefone->text();
      QString EmailPessoaJuridica = ui->txtEmail->text();

                //Monta o objeto Usuario com os Dados da Window
           ClienteJuridico cliente(CNPJ,NomePessoaJuridica,NomeFantasia
                                   ,RazaoSocial,TelefonePessoaJuridica,EmailPessoaJuridica);
            int codigo = (ui->txtID->text()).toInt();
            cliente.setID(codigo);
                this->controle->alterarCliente(cliente);
                    QMessageBox::information(this,"Cliente","CLIENTE ALTERADO!");
                    atualizaTabela();

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}
