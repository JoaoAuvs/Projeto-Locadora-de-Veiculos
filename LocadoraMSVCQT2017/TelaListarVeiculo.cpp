#include "TelaListarVeiculo.h"
#include "ui_TelaListarVeiculo.h"

TelaListarVeiculo::TelaListarVeiculo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListarVeiculo)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("select * from tb_Veiculo");
    if(query.exec()){
        int cont=0;
        ui->tblVeiculo->setColumnCount(11);

        while(query.next()){
            ui->tblVeiculo->insertRow(cont);
            ui->tblVeiculo->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tblVeiculo->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tblVeiculo->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->tblVeiculo->setItem(cont, 3,new QTableWidgetItem(query.value(3).toString()));
            ui->tblVeiculo->setItem(cont, 4,new QTableWidgetItem(query.value(4).toString()));
            ui->tblVeiculo->setItem(cont, 5,new QTableWidgetItem(query.value(5).toString()));
            ui->tblVeiculo->setItem(cont, 6,new QTableWidgetItem(query.value(6).toString()));
            ui->tblVeiculo->setItem(cont, 7,new QTableWidgetItem(query.value(7).toString()));
            ui->tblVeiculo->setItem(cont, 8,new QTableWidgetItem(query.value(8).toString()));
            ui->tblVeiculo->setItem(cont, 9,new QTableWidgetItem(query.value(9).toString()));
            ui->tblVeiculo->setItem(cont, 10,new QTableWidgetItem(query.value(10).toString()));
            ui->tblVeiculo->setRowHeight(cont,20);
            cont++;
        }
    }else{
        QMessageBox::information(this, "Erro", "Erro ao pesquisar na tabela de contatos");
    }
}

TelaListarVeiculo::~TelaListarVeiculo()
{
    delete ui;
}

void TelaListarVeiculo::on_pushButtonVoltar_clicked()
{
    this->close();
}

void TelaListarVeiculo::on_tblVeiculo_cellClicked(int row, int column)
{
    ui->txtPlaca->setText(ui->tblVeiculo->item(row,1)->text());
}
