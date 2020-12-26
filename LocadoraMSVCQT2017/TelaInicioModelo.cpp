#include "TelaInicioModelo.h"
#include "ui_TelaInicioModelo.h"
#include <QMessageBox>
#include "TelaListarModelo.h"

int static codigoMarca;

TelaInicioModelo::TelaInicioModelo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaInicioModelo)
{
    ui->setupUi(this);

    preencherComboMarca();

    try{
        //Instancia o controle
        controle = new ModeloControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }
}

TelaInicioModelo::~TelaInicioModelo()
{
    delete ui;
}

void TelaInicioModelo::on_voltar_clicked()
{
    this->close();
}

void TelaInicioModelo::on_pushButtonINCLUIR_clicked()
{
    try
    {
        QString Descricao = ui->lineEdit_Descricao->text();

        if(ui->lineEdit_Descricao->text().isEmpty()){
            QMessageBox::information(this,"AVISO","ADICIONE A DESCRIÇÃO");
        }else{
                //Monta o objeto Usuario com os Dados da Window
            Modelo modelo(Descricao,codigoMarca);
                this->controle->incluirModelo(modelo);
                    QMessageBox::information(this,"MODELO","MODELO INCLUIDO!");
               }
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void TelaInicioModelo::on_pushButton_LISTAR_clicked()
{
    TelaListarModelo TelaListarModelo;
    TelaListarModelo.setModal(true);
    TelaListarModelo.exec();
}

void TelaInicioModelo::on_comboBox_Marca_currentIndexChanged(int index)
{
    codigoMarca = ui->comboBox_Marca->itemData(index).toInt();
}
void TelaInicioModelo::preencherComboMarca(){
    ui->comboBox_Marca->clear();
    QSqlQueryModel *model = new QSqlQueryModel();
    QString sql;
    sql = "select c.Descricao,ID from tb_Marca as c;"; //TA FALTANDO O ID NA CONSULTA, mas esse ID não pra label de teste?
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
