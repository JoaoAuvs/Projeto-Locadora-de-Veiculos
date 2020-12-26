#include "TelaInicioCliente.h"
#include "ui_TelaInicioCliente.h"
#include <QString>
#include <QMessageBox>

#include <QStyle>
#include <QDesktopWidget>


TelaInicioCliente::TelaInicioCliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaInicioCliente)
{
    ui->setupUi(this);

   // this->setWindowState(Qt::WindowFullScreen);



    //Permite a digitação apenas de numeros para CPF e Telefone
    ui->lineEdit_CPF->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_CPF));
    ui->lineEdit_Telefone->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_Telefone));
    ui->lineEdit_RG->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_RG));
    ui->lineEdit_CPF->setInputMask("999.999.999-99");
    ui->lineEdit_CPF->setMaxLength(11);
    ui->lineEdit_NomeCliente->setValidator(new QRegExpValidator(QRegExp("[a-z | A-Z]*"),ui->lineEdit_NomeCliente));

    try{
        //Instancia o controle
        controle = new ClienteControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }
}

TelaInicioCliente::~TelaInicioCliente()
{
    delete ui;
}

void TelaInicioCliente::on_Voltar_clicked()
{
    this->close();
}

void TelaInicioCliente::on_Incluir_clicked()
{
    try//sim
    {
        QString CPF=ui->lineEdit_CPF->text();
        QString NomeCliente=ui->lineEdit_NomeCliente->text();
        QString RG=ui->lineEdit_RG->text();
        QString Telefone=ui->lineEdit_Telefone->text();
        QString Email=ui->lineEdit_Email->text();

        if(ui->lineEdit_CPF->text().isEmpty()){
            QMessageBox::information(this,"AVISO","ADICIONE O CPF");
        }else{
                //Monta o objeto Usuario com os Dados da Window
            Cliente cliente(CPF,NomeCliente,RG,Telefone,Email);
                this->controle->incluirCliente(cliente);
                    QMessageBox::information(this,"Cliente","CLIENTE INCLUIDO!");
               }
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
}

void TelaInicioCliente::on_Alterar_clicked()
{
    TelaClienteAlterar telaAlterarC;
    telaAlterarC.setModal(true);
    telaAlterarC.exec();
}

void TelaInicioCliente::on_Listar_clicked()
{
    TelaListarClienteFisico telaListar;
    telaListar.setModal(true);
    telaListar.exec();
}
