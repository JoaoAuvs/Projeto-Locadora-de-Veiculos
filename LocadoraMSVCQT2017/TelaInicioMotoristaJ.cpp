#include "TelaInicioMotoristaJ.h"
#include "ui_TelaInicioMotoristaJ.h"
#include <TelaListarMotoristaJ.h>
#include <MotoristaJuridicoControle.h>
#include <QMessageBox>
int static codigoClienteF, codigoClienteJ;
TelaInicioMotoristaJ::TelaInicioMotoristaJ(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaInicioMotoristaJ)
{
    ui->setupUi(this);

    //Permite a digitação apenas de numeros para CPF e Telefone
    ui->lineEdit_CPF_Motorista->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_CPF_Motorista));
    ui->lineEdit_Telefone_Motorista->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_Telefone_Motorista));

    /*preencherComboCategoria();
    preencherComboCliente();*/

    try{
        //Instancia o controle
        controle = new MotoristaJuridicoControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }

}

TelaInicioMotoristaJ::~TelaInicioMotoristaJ()
{
    delete ui;
}

void TelaInicioMotoristaJ::on_Incluir_clicked()
{
   /* try
    {
        QString CPF = ui->lineEdit_CPF_Motorista->text();
        QString NomeMotorista = ui->lineEdit_NomeMotorista->text();
        QString RGMotorista = ui->lineEdit_RG_Motorista->text();
        QString TelefoneMotorista = ui->lineEdit_Telefone_Motorista->text();
        QString EmailMotorista = ui->lineEdit_Email_Motorista->text();
        QDate DataDeValCNH;
        QString NumeroDeRegistroCNH = ui->lineEdit_NumeroRegistro->text();


        if(ui->lineEdit_CPF_Motorista->text().isEmpty()){
            QMessageBox::information(this,"AVISO","ADICIONE A DESCRIÇÃO");
        }else{
                //Monta o objeto Usuario com os Dados da Window
            Motorista motorista(CPF,NomeMotorista,TelefoneMotorista, EmailMotorista,
                                DataDeValCNH, NumeroDeRegistroCNH,codigoClienteF,codigoClienteJ);

            this->controle->incluirMotorista(motorista);
                    QMessageBox::information(this,"MODELO","MODELO INCLUIDO!");
               }
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}*/
}

void TelaInicioMotoristaJ::on_Listar_clicked()
{
    TelaListarMotoristaJ telaJ;
    telaJ.setModal(true);
    telaJ.exec();
}
