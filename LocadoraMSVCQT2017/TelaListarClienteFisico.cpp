#include "TelaListarClienteFisico.h"
#include "ui_TelaListarClienteFisico.h"
#include <QMessageBox>
#include <QtSql>
#include <iostream>
#include <QString>
#include <TelaInicioCliente.h>
#include <TelaPrincipal.h>
#include <QTableWidget>
#include <iostream>

TelaListarClienteFisico::TelaListarClienteFisico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListarClienteFisico)
{
    ui->setupUi(this);
    controle = new ClienteControle;
    atualizaTabela();

}

TelaListarClienteFisico::~TelaListarClienteFisico()
{
    delete ui;
}

void TelaListarClienteFisico::atualizaTabela()
{
    ui->tblClienteFisico->clear();

    //ISSO DEVERÁ SER UM METODO, PARA CHAMARMOS QUANDO ALTERAR
    QSqlQuery query;
    query.prepare("select * from tb_PessoaFisica");
    if(query.exec()){
        int cont=0;
        ui->tblClienteFisico->setColumnCount(6);
        while(query.next()){
            ui->tblClienteFisico->insertRow(cont);
            ui->tblClienteFisico->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tblClienteFisico->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tblClienteFisico->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->tblClienteFisico->setItem(cont, 3,new QTableWidgetItem(query.value(3).toString()));
            ui->tblClienteFisico->setItem(cont, 4,new QTableWidgetItem(query.value(4).toString()));
            ui->tblClienteFisico->setItem(cont, 5,new QTableWidgetItem(query.value(5).toString()));
            ui->tblClienteFisico->setRowHeight(cont,20);
            cont++;
        }
    }else{
        QMessageBox::information(this, "Erro", "Erro ao pesquisar na tabela de contatos");
    }
}


void TelaListarClienteFisico::on_Voltar_clicked()
{
    this->close();
}
void TelaListarClienteFisico::on_pushButton_Excluir_clicked()
{

}

void TelaListarClienteFisico::on_pushButton_Alterar_clicked()
{
    try
    {
        QString NomeCliente=ui->txtNomeCliente->text();
        QString RG=ui->txtRg->text();
        QString Email=ui->txtEmail->text();
        QString CPF=ui->txtCpf->text();
        QString Telefone=ui->txtTelefone->text();

                //Monta o objeto Usuario com os Dados da Window
            Cliente cliente(CPF,NomeCliente,RG,Telefone,Email);
            int codigo = (ui->txtID->text()).toInt();
            cliente.setID(codigo);
                this->controle->alterarCliente(cliente);
                    QMessageBox::information(this,"Cliente","CLIENTE ALTERADO!");
                    atualizaTabela();
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void TelaListarClienteFisico::on_pushButton_BuscarClienteFisico_clicked()
{

}

void TelaListarClienteFisico::on_tblClienteFisico_activated(const QModelIndex &index)
{

    //ui->txtNomeCliente->setText(ui->tblClienteFisico->model()->data(index).toString());
}

void TelaListarClienteFisico::on_tblClienteFisico_clicked(const QModelIndex &index)
{
// ui->txtNomeCliente->setText(ui->tblClienteFisico->model()->data(index).toString());

}


void TelaListarClienteFisico::on_tblClienteFisico_cellClicked(int row, int column)
{
    //somente ao clicar em uma linha os botões serão ativados
    //ui->pushButton_Excluir->setEnabled(true);
    ui->pushButton_Alterar->setEnabled(true);

    //setando as caixas de dados para alterar pelos indices da tabela
    ui->txtNomeCliente->setText(ui->tblClienteFisico->item(row,1)->text());    
    ui->txtID->setText(ui->tblClienteFisico->item(row,5)->text());
    ui->txtEmail->setText(ui->tblClienteFisico->item(row,4)->text());
    ui->txtCpf->setText(ui->tblClienteFisico->item(row,0)->text());
    ui->txtRg->setText(ui->tblClienteFisico->item(row,2)->text());
    ui->txtTelefone->setText(ui->tblClienteFisico->item(row,3)->text());

}
