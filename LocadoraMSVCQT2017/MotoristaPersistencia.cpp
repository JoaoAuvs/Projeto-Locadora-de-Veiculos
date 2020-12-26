#include "MotoristaPersistencia.h"

MotoristaPersistencia::MotoristaPersistencia()
{

    try {
        bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
        bancoDeDados.setDatabaseName("C:/LocadoraEugenio/tb_Locadora.db");

        if(!bancoDeDados.open()) {
            throw QString("Error to open database");
        }
    } catch (QString &erro) {
        throw QString(erro);
    }
}

MotoristaPersistencia::~MotoristaPersistencia()
{
    bancoDeDados.close();
}

void MotoristaPersistencia::incluirMotorista(MotoristaF objeto) const
{

   try
    {
        //A classe QSqlQuery executa requisições ao SGBD
        QSqlQuery execQuery;
        QString sql = ("INSERT INTO tb_Motorista (CPF,NomeMotorista,RGMotorista,TelefoneMotorista,EmailMotorista, DataValidadeCNH, NumeroRegistroCNH,IDClienteFisico,IDCategoriaM) VALUES "
                      "(:CPFMotorista,:NomeMotorista,:RGMotorista,:TelefoneMotorista,:EmailMotorista, :DataValidadeCNH, :NumeroRegistroCNH,:IDClienteFisico,:IDCategoriaM)");
        execQuery.prepare(sql);
        execQuery.bindValue(":CPFMotorista",objeto.getCPFMotorista());
        execQuery.bindValue(":NomeMotorista",objeto.getNomeMotorista());
        execQuery.bindValue(":RGMotorista",objeto.getRGMotorista());
        execQuery.bindValue(":TelefoneMotorista",objeto.getTelefoneMotorista());
        execQuery.bindValue(":EmailMotorista",objeto.getEmailMotorista());
        execQuery.bindValue(":DataValidadeCNH",objeto.getDataDeValidade());
        execQuery.bindValue(":NumeroRegistroCNH", objeto.getNumeroCNH());
        execQuery.bindValue(":IDClienteFisico", objeto.getIdClienteF());
        execQuery.bindValue(":IDCategoriaM", objeto.getCategoria());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
}

MotoristaF* MotoristaPersistencia::buscarMotorista(QString cpf) const
{

}

void MotoristaPersistencia::alterarMotorista(MotoristaF &motorista) const
{

    /*try
    {
        QSqlQuery execQuery;
        execQuery.prepare("UPDATE Usuario SET "
                        "nome = :nome,email = :email,"
                        "telefone = :telefone "
                        "WHERE cpf = :cpf");
        execQuery.bindValue(":nome",obj.getNome());
        execQuery.bindValue(":email",obj.getEmail());
        execQuery.bindValue(":telefone",obj.getTelefone());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }*/
    //falta coisa demais, não suporto mais
}
