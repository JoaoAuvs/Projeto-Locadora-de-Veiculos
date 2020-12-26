#include "TelaListarModelo.h"
#include "ui_TelaListarModelo.h"


int static codigoMarca;

TelaListarModelo::TelaListarModelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListarModelo)
{
    ui->setupUi(this);

    controle = new ModeloControle;
    atualizaTabela();

}


TelaListarModelo::~TelaListarModelo()
{
    delete ui;
}
void TelaListarModelo::atualizaTabela(){
    ui->tblModelo->clear();
    QSqlQuery query;
    query.prepare("SELECT C.ID AS [ID MODELO],C.DESCRICAO AS [MODELO],d.Descricao as [MARCA] FROM TB_MODELO AS C INNER JOIN tb_marca as d on d.ID = c.IDMarca");
    if(query.exec()){
        int cont=0;
        ui->tblModelo->setColumnCount(3);
        while(query.next()){
            ui->tblModelo->insertRow(cont);
            ui->tblModelo->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tblModelo->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tblModelo->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));

            ui->tblModelo->setRowHeight(cont,20);
            cont++;
        }
    }else{
        QMessageBox::information(this, "Erro", "Erro ao pesquisar na tabela de contatos");
    }
}
void TelaListarModelo::on_pushButtonVoltar_clicked()
{
    this->close();
}

void TelaListarModelo::on_tblModelo_cellClicked(int row, int column)
{
    ui->txtID->setText(ui->tblModelo->item(row,0)->text());
    ui->txtModelo->setText(ui->tblModelo->item(row,1)->text());


}

void TelaListarModelo::on_pushButton_Alterar_clicked()
{
    try
    {
      Modelo Ajuda;
      QString Descricao = ui->txtModelo->text();
      codigoMarca = Ajuda.getIdMarca();
      //Monta o objeto Usuario com os Dados da Window
      Modelo modelo(Descricao,codigoMarca);
            int codigo = (ui->txtID->text()).toInt();
            modelo.setId(codigo);
                this->controle->alterarModelo(modelo);
                    QMessageBox::information(this,"MODELO","MODELO ALTERADO!");
                    atualizaTabela();

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}
