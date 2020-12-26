#include "TelaDeLogin.h"
#include "ui_TelaDeLogin.h"

static QSqlDatabase bancoDeDados=QSqlDatabase::addDatabase("QSQLITE");

TelaDeLogin::TelaDeLogin(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::TelaDeLogin)
{
    ui->setupUi(this);
    bancoDeDados.setDatabaseName("C:/LocadoraEugenio/tb_Locadora.db");

    if(!bancoDeDados.open()){
        ui->TesteDoBanco->setText("Não foi possivel abrir o banco de dados.");//Label
    }else{
        ui->TesteDoBanco->setText("Banco de dados aberto com Sucesso!");//label
    }
}

TelaDeLogin::~TelaDeLogin()
{
    delete ui;
}


void TelaDeLogin::on_login_clicked()//Botão de Login
{
   QString Nome = ui->lineEdit_nome->text();
   QString Senha = ui->lineEdit_senha->text();
   Nome = "admin";
   Senha = "admin";

    if(!bancoDeDados.isOpen()){
        qDebug()<<"Banco de dados não está aberto";
        return;
    }

    QSqlQuery query;
    if(query.exec("select c.nome,c.senha from tb_Login as c where c.nome ='" + Nome + "' and c.senha ='" + Senha + "'")){
        int cont=0;
        while(query.next()){
            cont++;
        }
        if(cont>0){
            this->close();//fecha anterior
            TelaPrincipal telaPricipal;//essa que é pra ter sequencia se a senha estiver certa ok
            telaPricipal.setModal(true);
            telaPricipal.exec();
        }else{
            ui->TesteDoBanco->setText("Login não efetuado");
            ui->lineEdit_nome->clear();
            ui->lineEdit_senha->clear();
            ui->lineEdit_nome->setFocus();
        }
    }
}
