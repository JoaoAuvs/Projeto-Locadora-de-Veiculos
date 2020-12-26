#include "TelaListarMotorista.h"
#include "ui_TelaListarMotorista.h"

int static codigoCliente,codigoCategoria;
TelaListarMotorista::TelaListarMotorista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListarMotorista)
{
    ui->setupUi(this);

    controle = new MotoristaControle;
    atualizaTabela();


}

TelaListarMotorista::~TelaListarMotorista()
{
    delete ui;
}

void TelaListarMotorista::atualizaTabela(){
    QSqlQuery query;
    query.prepare("select * from tb_Motorista");
    if(query.exec()){
        int cont=0;
        ui->tblMotorista->setColumnCount(10);

        while(query.next()){
            ui->tblMotorista->insertRow(cont);
            ui->tblMotorista->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tblMotorista->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tblMotorista->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->tblMotorista->setItem(cont, 3,new QTableWidgetItem(query.value(3).toString()));
            ui->tblMotorista->setItem(cont, 4,new QTableWidgetItem(query.value(4).toString()));
            ui->tblMotorista->setItem(cont, 5,new QTableWidgetItem(query.value(5).toString()));
            ui->tblMotorista->setItem(cont, 6,new QTableWidgetItem(query.value(6).toString()));
            ui->tblMotorista->setItem(cont, 7,new QTableWidgetItem(query.value(7).toString()));
            ui->tblMotorista->setItem(cont, 8,new QTableWidgetItem(query.value(8).toString()));
            ui->tblMotorista->setItem(cont, 9,new QTableWidgetItem(query.value(9).toString()));

            ui->tblMotorista->setRowHeight(cont,20);
            cont++;
        }
    }else{
        QMessageBox::information(this, "Erro", "Erro ao pesquisar na tabela de contatos");
    }
}
void TelaListarMotorista::on_pushButtonVoltar_clicked()
{
    this->close();
}

void TelaListarMotorista::on_tblMotorista_cellClicked(int row, int column)
{
    ui->txtCPF->setText(ui->tblMotorista->item(row,0)->text());
    ui->lineEdit_NomeMotorista->setText(ui->tblMotorista->item(row,1)->text());
    ui->lineEdit_RG_Motorista->setText(ui->tblMotorista->item(row,2)->text());
    ui->lineEdit_Telefone_Motorista->setText(ui->tblMotorista->item(row,3)->text());
    ui->lineEdit_Email_Motorista->setText(ui->tblMotorista->item(row,4)->text());
  //  ui->dateEditData->setDate(ui->tblMotorista->item(row,5)->date());
    ui->lineEdit_NumeroRegistro->setText(ui->tblMotorista->item(row,6)->text());
    ui->lineEditID->setText(ui->tblMotorista->item(row,7)->text());//idMotorista
    ui->txtNomeC->setText(ui->tblMotorista->item(row,8)->text());
    ui->lineEditCategoria->setText(ui->tblMotorista->item(row,9)->text());

}

void TelaListarMotorista::on_pushButton_Alterar_clicked()
{
    try
    {
      MotoristaF Ajuda;
      QString CPF = ui->txtCPF->text();
      QString NomeMotorista = ui->lineEdit_NomeMotorista->text();
      QString RGMotorista = ui->lineEdit_RG_Motorista->text();
      QString TelefoneMotorista = ui->lineEdit_Telefone_Motorista->text();
      QString EmailMotorista = ui->lineEdit_Email_Motorista->text();
      QDate DataDeValCNH;//não sei pegar
      QString NumeroDeRegistroCNH = ui->lineEdit_NumeroRegistro->text();
      //int     codigoCategoria=
       // int    codigoClienteF=


      codigoCliente = Ajuda.getIdClienteF();
      codigoCategoria = Ajuda.getCategoria();
      //Monta o objeto Usuario com os Dados da Window
      MotoristaF motorista(CPF,NomeMotorista,RGMotorista,TelefoneMotorista,
                    EmailMotorista,DataDeValCNH,NumeroDeRegistroCNH,codigoCategoria,codigoCliente);
            int codigo = (ui->lineEditID->text()).toInt();
            motorista.setId(codigo);
                this->controle->alterarMotorista(motorista);
                    QMessageBox::information(this,"Motorista","Motorista ALTERADO!");
                    atualizaTabela();

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}
