#include "MotoristaJuridicoPersistencia.h"

MotoristaJuridicoPersistencia::MotoristaJuridicoPersistencia()
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

MotoristaJuridicoPersistencia::~MotoristaJuridicoPersistencia()
{
    bancoDeDados.close();
}

void MotoristaJuridicoPersistencia::incluirMotorista(MotoristaJuridico objeto) const
{

   try
    {
        //A classe QSqlQuery executa requisições ao SGBD
        QSqlQuery execQuery;
        execQuery.prepare("INSERT INTO tb_Motorista(CPFMotorista,NomeMotorista,"
                          "RGMotorista,TelefoneMotorista,EmailMotorista, DataValidadeCNH, NumeroRegistroCNH,"
                          "IDClienteFisico,IDClienteJuridico) VALUES "
                          "(:CPFMotorista,:NomeMotorista,:RGCliente,:TelefoneMotorista,"
                          ":EmailMotorista, :DataValidadeCNH, NumeroRegistroCNH,"
                          ":IDClienteFisico, :IDClienteJuridico)");
        execQuery.bindValue(":CPFMotorista",objeto.getCPFMotorista());
        execQuery.bindValue(":NomeMotorista",objeto.getNomeMotorista());
        execQuery.bindValue(":RGMotorista",objeto.getRGMotorista());
        execQuery.bindValue(":TelefoneMotorista",objeto.getTelefoneMotorista());
        execQuery.bindValue(":EmailMotorista",objeto.getEmailMotorista());
        execQuery.bindValue(":DataValidadeCNH",objeto.getDataDeValidade());
        execQuery.bindValue(":NumeroRegistroCNH", objeto.getNumeroCNH());
        execQuery.bindValue(":IDClienteFisico", objeto.getNumeroCNH());
        execQuery.bindValue(":IDClienteJuridico", objeto.getNumeroCNH());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
}

MotoristaJuridico* MotoristaJuridicoPersistencia::buscarMotorista(QString cpf) const
{
   /* try {
        QSqlQuery queryExec;
        queryExec.prepare("SELECT * FROM Usuario WHERE cpf = :cpf");
        queryExec.bindValue(":cpf",cpf);

        if(!queryExec.exec())
        {
            throw QString(queryExec.lastError().text());
        }

        //A classe QSqlRecord encapsula a funcionalidade e as características
        //de uma gravação de banco de dados (geralmente uma linha em uma tabela ou exibição no banco de dados).
        QSqlRecord rec = queryExec.record();

        queryExec.next();

        QString nome = queryExec.value(rec.indexOf("nome")).toString();
        QString cpf = queryExec.value(rec.indexOf("cpf")).toString();
        QString telefone = queryExec.value(rec.indexOf("telefone")).toString();
        QString senha = queryExec.value(rec.indexOf("senha")).toString();
        QString email = queryExec.value(rec.indexOf("email")).toString();

        return Usuario(nome,cpf,senha,email,telefone);


    } catch (QString &erro) {
        throw QString(erro);
    }*/
}

void MotoristaJuridicoPersistencia::alterarMotorista(MotoristaJuridico &motorista) const
{
    /*
    try
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
    } catch (QString &erro) { throw QString(erro); }
    */
}
