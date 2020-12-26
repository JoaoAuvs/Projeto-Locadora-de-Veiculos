#include "TelaListarLocacao.h"
#include "ui_TelaListarLocacao.h"
LocacaoControle *ajuda;


int static codigoVeiculo,codigoCliente,codigoCategoria,codigoMotorista;
TelaListarLocacao::TelaListarLocacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaListarLocacao)
{
    ui->setupUi(this);
    ajuda = new LocacaoControle;
    atualizarTabela();
}

TelaListarLocacao::~TelaListarLocacao()
{
    delete ui;
}
void TelaListarLocacao::atualizarTabela(){
    ui->tblLocacao->clearContents();
    QSqlQuery query;
    query.prepare("SELECT C.NOMEDOCLIENTE,C.IDLOCACAO,C.[NOMEDOMOTORISTA],C.[PLACADOVEICULO],C.DATADERETIRADA,C.QuilometragemFINAL,C.VALORCAUCAO,C.SITUACAO,C.VALORSERGURO,C.PAGAMENTOFINAL FROM RELATORIOLOCACAO2 AS C WHERE C.SITUACAO = 0");
    if(query.exec()){
        int cont=0;
        ui->tblLocacao->setColumnCount(10);

        while(query.next()){
            ui->tblLocacao->insertRow(cont);
            ui->tblLocacao->setItem(cont, 0,new QTableWidgetItem(query.value(0).toString()));
            ui->tblLocacao->setItem(cont, 1,new QTableWidgetItem(query.value(1).toString()));
            ui->tblLocacao->setItem(cont, 2,new QTableWidgetItem(query.value(2).toString()));
            ui->tblLocacao->setItem(cont, 3,new QTableWidgetItem(query.value(3).toString()));
            ui->tblLocacao->setItem(cont, 4,new QTableWidgetItem(query.value(4).toString()));
            ui->tblLocacao->setItem(cont, 5,new QTableWidgetItem(query.value(5).toString()));
            ui->tblLocacao->setItem(cont, 6,new QTableWidgetItem(query.value(6).toString()));
            ui->tblLocacao->setItem(cont, 7,new QTableWidgetItem(query.value(7).toString()));
            ui->tblLocacao->setItem(cont, 8,new QTableWidgetItem(query.value(8).toString()));
            ui->tblLocacao->setItem(cont, 9,new QTableWidgetItem(query.value(9).toString()));



            ui->tblLocacao->setRowHeight(cont,20);
            cont++;
        }
    }else{
        QMessageBox::information(this, "Erro", "Erro ao pesquisar na tabela de contatos");
    }
}
void TelaListarLocacao::on_pushButton_Voltar_clicked()
{
    this->close();
}

void TelaListarLocacao::on_tblLocacao_cellClicked(int row, int column)
{
     // ui->txtNomeCodigo->setText(ui->tblLocacao->item(row,0)->text());

      //somente ao clicar em uma linha os botões serão ativados
      //ui->pushButton_Excluir->setEnabled(true);
      ui->pushButton_Alterar->setEnabled(true);

      //setando as caixas de dados para alterar pelos indices da tabela

      ui->txtNomeCodigo->setText(ui->tblLocacao->item(row,1)->text());

      //ui->txtDataRetirada->setDate(ui->tblLocacao->item(row,1)->data());
      //ui->txtDataDevol->setDate(ui->tblLocacao->item(row,4)->text().data());//isso daqui eu nao sei fazer
    //não sei setar os valores da date da tabela para a outra date

        //ui->txtDataDevol->setDate(as);
      //ui->txtQuiInicial->setText(ui->tblLocacao->item(row,3)->text());
      ui->txtQuilFinal->setText(ui->tblLocacao->item(row,5)->text());
      ui->txtCaucao->setText(ui->tblLocacao->item(row,6)->text());
      ui->txtSeguro->setText(ui->tblLocacao->item(row,8)->text());
      ui->txtPagamentoFinal->setText(ui->tblLocacao->item(row,9)->text());
     // ui->TxtVeiculo->setText(ui->tblLocacao->item(row,3)->text());
     ui->TxtVeiculo->setText(ui->tblLocacao->item(row,3)->text());
      ui->txtNomeMotorista->setText(ui->tblLocacao->item(row,2)->text());
      ui->txtNomeCliente->setText(ui->tblLocacao->item(row,0)->text());

      //ui->comboBoxSituacao->setText(ui->tblLocacao->item(row,12)->text());


}

void TelaListarLocacao::on_pushButton_Alterar_clicked()
{
    try
    {
        //instancia um objeto locacao aqui---para a instacia dar certo tem que ter as
        //mesmas variveis do construtor pode colocar padrão. não vamos usar
        //so sei fazer assim, seguindo o construtork


       // QString quilometragemFinal = ui->txtQuilFinal->text();
      //  float valorCaucao = (ui->txtCaucao->text().toFloat());
      //  float valorSeguro = (ui->txtSeguro->text().toFloat());
      //  float valorTotal = ui->txtPagamentoFinal->text().toFloat();
        int cod = (ui->txtNomeCodigo->text().toInt());//eita pensei que podia ser isso, de la estar com string


        QSqlQuery execQuery;
        execQuery.prepare("UPDATE tb_locacao SET situacao = 1 where idLocacao=:ID");
            //aqui são get tipo, locação.getcaução.text();
        //execQuery.bindValue(":vlc", valorCaucao);
       // execQuery.bindValue(":vls", valorSeguro);
        //execQuery.bindValue(":qf", quilometragemFinal);
       // execQuery.bindValue(":pf", valorTotal);
        execQuery.bindValue(":ID", cod);//vc esta fazendo conversão?
         // cria o idClliente na classe dele
//tem algo de errado com essa instancia
        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }else{
           atualizarTabela();
        }
    } catch (QString &erro) { throw QString(erro); }






 /*   try
    {
    //    QDate DataDeRetirada = ui->txtDataRetirada->date();
        QDate DataDeDevolucao = ui->txtDataDevol->date();
    //    QString QuilometragemI = ui->txtQuiInicial->text();
        QString QuilometragemF = ui->txtQuilFinal->text();
     //   float ValorDoCaucao   = ui->txtCauc->text().toFloat();
        float valorDoSeguro = ui->txtSeguro->text().toFloat();
        float pagamentoFinal = ui->txtPagamentoFinal->text().toFloat();
                //Monta o objeto Usuario com os Dados da Window
            Locacao locacao(DataDeRetirada, DataDeDevolucao,QuilometragemI,
                            QuilometragemF,
                            ValorDoCaucao,valorDoSeguro,pagamentoFinal,codigoVeiculo,
                                    codigoCliente,
                                    codigoMotorista,
                                    codigoCategoria,
                                    0);
            int codigo = (ui->txtNomeCodigo->text()).toInt();
            locacao.setId(codigo);
                ajuda->devolverVeiculo(locacao);
                    QMessageBox::information(this,"Cliente","CLIENTE ALTERADO!");
                    atualizarTabela();
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}

*/}
