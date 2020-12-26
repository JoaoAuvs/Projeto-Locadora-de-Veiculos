#include "TelaInicioMotorista.h"
#include "ui_TelaInicioMotorista.h"
#include "TelaListarMotorista.h"

int static codigoClienteF,codigoCategoria;

TelaInicioMotorista::TelaInicioMotorista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaInicioMotorista)
{
    ui->setupUi(this);

    //Permite a digitação apenas de numeros para CPF e Telefone
    ui->lineEdit_CPF_Motorista->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_CPF_Motorista));
    ui->lineEdit_Telefone_Motorista->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_Telefone_Motorista));
    ui->lineEdit_CPF_Motorista->setInputMask("999.999.999-99");
    ui->lineEdit_CPF_Motorista->setMaxLength(11);
    ui->lineEdit_NomeMotorista->setValidator(new QRegExpValidator(QRegExp("[a-z | A-Z]*"),ui->lineEdit_NomeMotorista));
    ui->lineEdit_RG_Motorista->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_RG_Motorista));

    ui->lineEdit_CPF_Motorista->setMaxLength(7);
    preencherComboCategoria();
    preencherComboCliente();

    try{
        //Instancia o controle
        controle = new MotoristaControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }

}

TelaInicioMotorista::~TelaInicioMotorista()
{
    delete ui;
}

void TelaInicioMotorista::on_Voltar_clicked()
{
    this->close();
}

void TelaInicioMotorista::on_Incluir_clicked()
{
    try
    {
        QString CPF = ui->lineEdit_CPF_Motorista->text();
        QString NomeMotorista = ui->lineEdit_NomeMotorista->text();
        QString RGMotorista = ui->lineEdit_RG_Motorista->text();
        QString TelefoneMotorista = ui->lineEdit_Telefone_Motorista->text();
        QString EmailMotorista = ui->lineEdit_Email_Motorista->text();
        QDate DataDeValCNH = ui->txtDataValidade->date();
        QString NumeroDeRegistroCNH = ui->lineEdit_NumeroRegistro->text();


        if(ui->lineEdit_CPF_Motorista->text().isEmpty()){
            QMessageBox::information(this,"AVISO","ADICIONE A DESCRIÇÃO");
        }else{
                //Monta o objeto Usuario com os Dados da Window
            MotoristaF MotoristaF(CPF,NomeMotorista,RGMotorista,TelefoneMotorista,
                                  EmailMotorista,DataDeValCNH,NumeroDeRegistroCNH,codigoCategoria,codigoClienteF);

            this->controle->incluirMotorista(MotoristaF);
                    QMessageBox::information(this,"MODELO","MODELO INCLUIDO!");
               }
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void TelaInicioMotorista::on_Listar_clicked()
{
    TelaListarMotorista TelaListarMot;
    TelaListarMot.setModal(true);
    TelaListarMot.exec();
}

void TelaInicioMotorista::preencherComboCliente(){
    ui->comboBox_Cliente->clear(); // limpamos antes de inserir
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
        ui->comboBox_Cliente->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        //add no combo para cada linha, o nome do elemento e no qvariant o id dele
        }
    }
    model->setQuery(*query);

    //ui->cbmCliente->setModel(model);
}

void TelaInicioMotorista::preencherComboCategoria(){
    ui->comboBox->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.Categoria,c.id from tb_CategoriaCNH as c;";
    QSqlQuery* query = new QSqlQuery();
    query->prepare(sql);
    if(!query->exec()){
        qDebug () << "Query Erorr: " << query->lastError();
    }else{
        qDebug () << "Query Successful: " << query->lastQuery();
        while(query->next()){
        ui->comboBox->addItem(query->value(0).toString(), QVariant(query->value(1).toInt()));
        }
    }
    model->setQuery(*query);
}

void TelaInicioMotorista::on_comboBox_Cliente_currentIndexChanged(int index)
{
    codigoClienteF = ui->comboBox_Cliente->itemData(index).toInt();
}

void TelaInicioMotorista::on_comboBox_currentIndexChanged(int index)
{
    codigoCategoria = ui->comboBox->itemData(index).toInt();
}
