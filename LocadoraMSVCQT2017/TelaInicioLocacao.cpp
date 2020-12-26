#include "TelaInicioLocacao.h"
#include "ui_telainiciolocacao.h"
#include "TelaInicioMotorista.h"
#include "LocacaoControle.h"
#include "TelaListarMotorista.h"
int static codigoVeiculo,codigoCliente,codigoCategoria,codigoMotorista;

TelaInicioLocacao::TelaInicioLocacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaInicioLocacao)
{
    ui->setupUi(this);
    preencherComboClientes(); // sempre ao abrir o form os combos serão iniciados
    preencherComboVeiculo();
    preencherComboMotorista();
    preencherComboCategoria();

    try{
        //Instancia o controle
        controle = new LocacaoControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }
}

TelaInicioLocacao::~TelaInicioLocacao()
{    
    delete ui;
}

void TelaInicioLocacao::on_Voltar_clicked()
{
    this->close();
}

void TelaInicioLocacao::preencherComboClientes()
{
    ui->cbmCliente->clear(); // limpamos antes de inserir
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.NomeCliente,c.idCliente from tb_PessoaFisica as c;"; // aqui sempre pegamos primeiro
    //o elemento que irá aparecer na tela e depois o codigo/ChavePrimaria/Identificador unico da tabela
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{

        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){ // enquanto tiver linha...
        ui->cbmCliente->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        //add no combo para cada linha, o nome do elemento e no qvariant o id dele
        }
    }
    model->setQuery(*query);

    //ui->cbmCliente->setModel(model);
   // ui->pushButton->setText(ui->cbmCliente->itemData(2).toString());
}


void TelaInicioLocacao::on_Motorista_clicked()
{
    TelaInicioMotorista telaMotorista;
    telaMotorista.setModal(true);
    telaMotorista.exec();
}

void TelaInicioLocacao::on_pushButton_clicked()//FazerLocacao
{
    try//sim
    {
        QDate dataRetirada = ui->txtDataRetirada->date();
        QDate dataDevol = ui->txtDataDevol->date();
        QString quilInicio = ui->txtQuiInicial->text();
        QString quilFinal = ui->txtQuilFinal->text();
        float valorCauc = (ui->txtCauc->text()).toFloat();
        float valorSegu = (ui->txtSeguro->text()).toFloat();
        float pagaFinal = (ui->txtPagamentoFinal->text()).toFloat();



                //Monta o objeto Usuario com os Dados da Window
            Locacao locacao(dataRetirada, dataDevol,quilInicio,
                            quilFinal,
                            valorCauc,valorSegu,pagaFinal,codigoVeiculo,
                                    codigoCliente,
                                    codigoMotorista,
                                    codigoCategoria,
                                    0);
                this->controle->LocarVeiculo(locacao);
                    QMessageBox::information(this,"Cliente","Alocacao realizada!");

    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}

}

void TelaInicioLocacao::on_cbmCliente_currentIndexChanged(int index)
{
    //ui->pushButton->setText(ui->cbmCliente->itemData(index).toString());
    codigoCliente = ui->cbmCliente->itemData(index).toInt(); // usaremos para fazer o insert
    //esse é o evento do combobox, toda vez que modificarem ele, o id do novo elemento vem para essa variavel
    ui->idCli->setText(ui->cbmCliente->itemData(index).toString());
}

void TelaInicioLocacao::preencherComboVeiculo(){ // mesma logica do anterior
    ui->cbmVeiculo->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    //só ira aparecer os veiculos que não estão alugados no momento/ não foram entregues exatamente
    sql = "select c.Placa,c.idVeiculo from tb_Veiculo as c where c.idVeiculo not in (select d.idVeiculo from tb_locacao as d where d.Situacao = 0 );";
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->cbmVeiculo->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);

}

void TelaInicioLocacao::preencherComboCategoria(){ // mesma logica do anterior
    ui->cbmCategoria->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.descricao,c.idCategoria from tb_categoriaDoCarro as c;";
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->cbmCategoria->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);

}



void TelaInicioLocacao::on_cbmVeiculo_currentIndexChanged(int index) // mesma logica do anterior
{
    codigoVeiculo = ui->cbmVeiculo->itemData(index).toInt();
    ui->idVeicu->setText(ui->cbmVeiculo->itemData(index).toString());

}

void TelaInicioLocacao::preencherComboMotorista(){ //mesma logica do anterior
    ui->cbmMotorista->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.NomeMotorista,c.idMotorista from tb_Motorista as c;";
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->cbmMotorista->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);
}

void TelaInicioLocacao::on_cbmMotorista_currentIndexChanged(int index) // mesma logica do anterior
{
    codigoMotorista = ui->cbmMotorista->itemData(index).toInt();
    ui->idMotoris->setText(ui->cbmMotorista->itemData(index).toString());
}

void TelaInicioLocacao::on_pushButton_2_clicked()//Fazer Devolução
{
//vamos adicionar na tabela locacao um variavel boolean
//quando alugarem será setado 0, quando entregarem setamos 1, assim identificaremos quem entregou ou não
    TelaListarLocacao telaListarL;
    telaListarL.setModal(true);
    telaListarL.exec();
}

void TelaInicioLocacao::on_pushButton_3_clicked()//Listar
{
    TelaListarLocacao TelaListarL;
    TelaListarL.setModal(true);
    TelaListarL.exec();
}

void TelaInicioLocacao::on_cbmCategoria_currentIndexChanged(int index)
{
    codigoCategoria = ui->cbmCategoria->itemData(index).toInt();
    ui->idCat->setText(ui->cbmCategoria->itemData(index).toString());
}

void TelaInicioLocacao::on_pushButton_CadastrarMF_clicked()
{
    TelaInicioMotorista telaInicioMF;
    telaInicioMF.setModal(true);
    telaInicioMF.exec();
}
