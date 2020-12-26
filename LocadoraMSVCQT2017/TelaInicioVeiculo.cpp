#include "TelaInicioVeiculo.h"
#include "ui_TelaInicioVeiculo.h"
#include <QMessageBox>
#include "TelaListarVeiculo.h"

int static codigoMarca = 0;
TelaInicioVeiculo::TelaInicioVeiculo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaInicioVeiculo)
    /*idModelo(0),
    idCategoria(0),
    idSituacao(0)*/
{
    ui->setupUi(this);

    preencherComboCategoria(); // como foi comum aqui , no restante das classe
    preencherComboMarca();
  //  preencherComboModelo(); // por isso comentei,ok, olha o whats
    preencherComboSituacao();
    preencherComboCombustivel();


    try{
        //Instancia o controle
        controle = new VeiculoControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }
}

TelaInicioVeiculo::~TelaInicioVeiculo()
{
    delete ui;
}

void TelaInicioVeiculo::on_voltar_clicked()
{
    this->close();
}

void TelaInicioVeiculo::on_pushButtonIncluir_clicked()
{
   /* try
    {
        QString Placa = ui->lineEditPlaca->text();
        QString Chassi = ui->lineEdit_Chassi->text();
        QString Renavam = ui->lineEdit_Renavam->text();
        QString PrecoCompra = ui->lineEdit_PrecoCompra->text();
        QString PrecoVenda = ui->lineEdit_Venda->text();
        QString NumeroDePassageiros = ui->lineEdit_NumeroPassageiros->text();
        QString AnoFabricacao = ui->lineEdit_AnoFabricacao->text();
        QString AnoModelo = ui->lineEdit_AnoModelo->text();
        QString Quilometragem = ui->lineEdit_quilometragem->text();
        QString Potencia = ui->lineEdit_Potencia->text();
        QString CapacidadePortaMala = ui->lineEdit_CapacidadePortaMala->text();


        if(ui->lineEditPlaca->text().isEmpty()){
            QMessageBox::information(this,"AVISO","ADICIONE A PLACA");
        }else{
                //Monta o objeto Usuario com os Dados da Window
            Veiculo veiculo(Placa,Chassi,Renavam,PrecoCompra,PrecoVenda, NumeroDePassageiros,
                            AnoFabricacao, AnoModelo, Quilometragem,Potencia, CapacidadePortaMala);
            this->controle->incluirVeiculo(veiculo);
                    QMessageBox::information(this,"VEICULO","VEICULO INCLUIDO!");
               }
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}*/
}

void TelaInicioVeiculo::on_pushButton_Listar_clicked()
{
    TelaListarVeiculo telaListarV;
    telaListarV.setModal(true);
    telaListarV.exec();
}

void TelaInicioVeiculo::on_pushButton_Alterar_clicked()
{

}

void TelaInicioVeiculo::preencherComboMarca(){
    ui->comboBox_Marca->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.Descricao,c.id from tb_Marca as c;";
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->comboBox_Marca->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);
}

void TelaInicioVeiculo::preencherComboModelo(int codigoMarca){ //recebe por parâmetro
    ui->comboBox_Modelo->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    QString str;
    str.setNum(codigoMarca);
    sql = ("select c.Descricao from tb_Modelo as c where c.idmarca = "+str);//VC MUDOU SO AQUI?
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->comboBox_Modelo->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);
}

void TelaInicioVeiculo::preencherComboSituacao(){
    ui->comboBoxSituacao->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.Situacao from tb_SituacaoDoVeiculo as c;";
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->comboBoxSituacao->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);
}

void TelaInicioVeiculo::preencherComboCategoria(){
    ui->comboBoxCategoria->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.Categoria from tb_CategoriaDoCarro as c;";
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->comboBoxCategoria->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);
}

void TelaInicioVeiculo::preencherComboCombustivel(){
    ui->comboBox_TipoCombustivel->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.TipoDeCombustivel from tb_TipoDeCombustivel as c;";
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->comboBox_TipoCombustivel->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);
}

void TelaInicioVeiculo::on_comboBox_Marca_currentIndexChanged(int index)
{
codigoMarca = ui->comboBox_Marca->itemData(index).toInt(); // o que vem daqui - o codigo da marca do combobox, ok
preencherComboModelo(codigoMarca); // ela só é chamada aqui, não é chamada quando se inicia a classe.
}
