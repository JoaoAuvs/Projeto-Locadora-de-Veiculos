#include "TelaAlterarClienteJuridico.h"
#include "ui_TelaAlterarClienteJuridico.h"

TelaAlterarClienteJuridico::TelaAlterarClienteJuridico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaAlterarClienteJuridico)
{
    ui->setupUi(this);


    //Permite a digitação apenas de numeros para CPF e Telefone
    ui->lineEdit_CNPJ->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_CNPJ));
    ui->lineEdit_Telefone->setValidator(new QRegExpValidator(QRegExp("[0-9]*"),ui->lineEdit_Telefone));

    try{
        //Instancia o controle
        controle = new ClienteJuridicoControle;
       // ui->pushButtonCancelar->setVisible(false);
       // this->listagem();
    }catch(QString &erro){
        QMessageBox::critical(this,"Erro",erro);
    }
}

TelaAlterarClienteJuridico::~TelaAlterarClienteJuridico()
{
    delete ui;
}

void TelaAlterarClienteJuridico::on_Voltar_clicked()
{
    this->close();
}

void TelaAlterarClienteJuridico::on_Alterar_clicked()
{/*
    try
    {  eu não mexi nele ainda, mas sei que ta da forma correta, esse é o da main
o outro ta na persistencia do cliente fisico, fiz da mesma forma do incluir
mesma logica

        //Monta o objeto Usuario com os Dados da Window
        ClienteJuridico novo(ui->lineEdit_CNPJ->text(),ui->lineEdit_NomeCliente->text(),
                     ui->lineEdit_NomeFantasia->text(),ui->lineEdit_RazaoSocial->text(),
                     ui->lineEdit_Telefone->text(), ui->lineEdit_Email->text());

        //Altera
    //    ui->lineEdit_CNPJ.text()
        if(ui.->isVisible())
        {
            this->controle->alterar(novo);
            QMessageBox::about(this,"Alterado","Alterado com sucesso");
            ui->pushButtonCancelar->setVisible(false);
            ui->lineEdit_Cpf->setReadOnly(false);
            ui->lineEdit_Senha->setReadOnly(false);
            ui->pushButton_PersistirUsuario->setText("Salvar");
            ui->pushButton_PersistirUsuario->setToolTip("Salvar");
            //ui->pushButton_PersistirUsuario->setIcon(QIcon(Configuracao::getImagem_Salvar()));
        }//Salva
        else

            this->controle->salvar(novo);
            QMessageBox::about(this,"Salvo","Salvo com sucesso");
        }

//        this->limparCampos();
  //      this->listagem();
    } catch (QString &erro) { QMessageBox::information(this,"ERRO",erro);}
*/
}

void TelaAlterarClienteJuridico::on_Buscar_clicked()
{

}
