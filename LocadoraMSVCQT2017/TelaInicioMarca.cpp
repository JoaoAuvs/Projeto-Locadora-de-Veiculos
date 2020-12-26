#include "TelaInicioMarca.h"
#include "ui_TelaInicioMarca.h"
#include <QMessageBox>
#include "TelaListarMarca.h"
TelaInicioMarca::TelaInicioMarca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaInicioMarca)
{
    ui->setupUi(this);

    try{
        //Instancia o controle
        controle = new MarcaControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }
}

TelaInicioMarca::~TelaInicioMarca()
{
    delete ui;
}

void TelaInicioMarca::on_Voltar_clicked()
{
    this->close();
}

void TelaInicioMarca::on_pushButton_Incluir_clicked()
{
    try
    {
        QString Descricao = ui->lineEdit_Descricao->text();

        if(ui->lineEdit_Descricao->text().isEmpty()){
            QMessageBox::information(this,"AVISO","ADICIONE A DESCRIÇÃO");
        }else{
                //Monta o objeto Usuario com os Dados da Window
            Marca marca(Descricao);
                this->controle->incluirMarca(marca);
                    QMessageBox::information(this,"MARCA","MARCA INCLUIDO!");
               }
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void TelaInicioMarca::on_pushButton_Listar_clicked()
{
    TelaListarMarca TelaListarMarca;
    TelaListarMarca.setModal(true);
    TelaListarMarca.exec();
}


