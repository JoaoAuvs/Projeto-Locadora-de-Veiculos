#include "TelaListarMarca.h"
#include "ui_TelaListarMarca.h"

TelaListarMarca::TelaListarMarca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListarMarca)
{
    ui->setupUi(this);

    controle = new MarcaControle;

     atualizaTabela(); // sempre carregamos ao iniciar

}

TelaListarMarca::~TelaListarMarca()
{
    delete ui;
}
void TelaListarMarca::atualizaTabela(){
    ui->tblMarca->clear();

    QSqlQuery query;
    query.prepare("select * from tb_Marca");
    if(query.exec()){
        int cont=0;
        ui->tblMarca->setColumnCount(2);

        while(query.next()){
            ui->tblMarca->insertRow(cont);
            ui->tblMarca->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tblMarca->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));

            ui->tblMarca->setRowHeight(cont,20);
            cont++;
        }
    }else{
        QMessageBox::information(this, "Erro", "Erro ao pesquisar na tabela de contatos");
    }
}
void TelaListarMarca::on_pushButtonVoltar_clicked()
{
    this->close();
}
void TelaListarMarca::on_tblMarca_cellClicked(int row, int column)
{
    /*ui->txtID->setText(ui->tblMarca->item(row,0)->text());
    ui->txtMarca->setText(ui->tblMarca->item(row,1)->text());
*/

    //somente ao clicar em uma linha os botões serão ativados
    //ui->pushButton_Excluir->setEnabled(true);
    ui->pushButton_Alterar->setEnabled(true);

    //setando as caixas de dados para alterar pelos indices da tabela
    ui->txtID->setText(ui->tblMarca->item(row,0)->text());
    ui->txtMarca->setText(ui->tblMarca->item(row,1)->text());
}

void TelaListarMarca::on_pushButton_Alterar_clicked()
{
    try
    {
      QString Descricao = ui->txtMarca->text();

      //Monta o objeto Usuario com os Dados da Window
      Marca marca(Descricao);
            int codigo = (ui->txtID->text()).toInt();
            marca.setId(codigo);
                this->controle->alterarMarca(marca);
                    QMessageBox::information(this,"MARCA","MARCA ALTERADO!");
                    atualizaTabela();

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}
