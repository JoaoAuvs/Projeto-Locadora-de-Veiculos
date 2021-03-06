#include "ClienteJuridicoPersistencia.h"

ClienteJuridicoPersistencia::ClienteJuridicoPersistencia()
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

ClienteJuridicoPersistencia::~ClienteJuridicoPersistencia()
{
    bancoDeDados.close();
}

void ClienteJuridicoPersistencia::incluirCliente(ClienteJuridico objeto)const
{
   try
    {
        //A classe QSqlQuery executa requisições ao SGBD
        QSqlQuery execQuery;
        execQuery.prepare("INSERT INTO tb_PessoaJuridica(CNPJCliente,NomePessoaJuridica,"
                          "NomeFantasia,RazaoSocial,TelefonePessoaJuridica,EmailPessoaJuridica) VALUES "
                          "(:CNPJCliente,:NomePessoaJuridica,:NomeFantasia,:RazaoSocial,:TelefonePessoaJuridica,"
                          ":EmailPessoaJuridica"
                          ")");

        execQuery.bindValue(":NomePessoaJuridica",objeto.getNomeClienteJuridico());
        execQuery.bindValue(":NomeFantasia",objeto.getNomeFantasia());
        execQuery.bindValue(":RazaoSocial",objeto.getRazaoSocial());
        execQuery.bindValue(":CNPJCliente", objeto.getCNPJClienteJuridico());
        execQuery.bindValue(":TelefonePessoaJuridica",objeto.getTelefoneClienteJuridico());
        execQuery.bindValue(":EmailPessoaJuridica",objeto.getEmailClienteJuridico());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
}

void ClienteJuridicoPersistencia::alterarCliente(ClienteJuridico &cliente)const
{
    try
    {
        QSqlQuery execQuery;

        execQuery.prepare("UPDATE tb_PessoaJuridica SET CNPJCliente =:CNPJCliente, "
                          "NomePessoaJuridica =:NomePessoaJuridica,"
                          "NomeFantasia=:NomeFantasia,RazaoSocial=:RazaoSocial,"
                          "TelefonePessoaJuridica =:TelefonePessoaJuridica,EmailPessoaJuridica =:EmailPessoaJuridica "
                          " where IDJuridico =:IDJuridico"
                          );
        execQuery.bindValue(":CNPJCliente",cliente.getCNPJClienteJuridico());
        execQuery.bindValue(":NomePessoaJuridica",cliente.getNomeClienteJuridico());
        execQuery.bindValue(":NomeFantasia",cliente.getNomeFantasia());
        execQuery.bindValue(":RazaoSocial",cliente.getRazaoSocial());
        execQuery.bindValue(":TelefonePessoaJuridica",cliente.getTelefoneClienteJuridico());
        execQuery.bindValue(":EmailPessoaJuridica",cliente.getEmailClienteJuridico());
        execQuery.bindValue(":IDJuridico",cliente.getID()); // cria o idClliente na classe dele
        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }

}

/*
void ClientePersistencia::excluirCliente(QString  &objeto)const
{
    try
    {
        QSqlQuery execQuery;
        execQuery.prepare("DELETE FROM Usuario WHERE cpf = :cpf");
        execQuery.bindValue(":cpf",obj.getCpf());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }

}
*/
ClienteJuridico* ClienteJuridicoPersistencia::buscarCliente(QString cpf)const
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

std::queue<ClienteJuridico> *ClienteJuridicoPersistencia::listar()
{
   /* try
      {
        QString query = "SELECT * FROM Usuario";

        QSqlQuery queryExec;
        if(!queryExec.exec(query))
        {
            throw QString(queryExec.lastError().text());
        }

        QSqlRecord rec = queryExec.record();

        std::queue<Usuario> *saida = new std::queue<Usuario>();

        while(queryExec.next())
        {
            QString nome = queryExec.value(rec.indexOf("nome")).toString();
            QString cpf = queryExec.value(rec.indexOf("cpf")).toString();
            QString telefone = queryExec.value(rec.indexOf("telefone")).toString();
            QString senha = queryExec.value(rec.indexOf("senha")).toString();
            QString email = queryExec.value(rec.indexOf("email")).toString();

            Usuario atual(nome,cpf,senha,email,telefone);
            saida->push(atual);
        }

        return saida;

    } catch (QString &erro) { throw QString(erro); }
      catch (std::bad_alloc&) { throw QString("000 - Erro de alocação de memória"); }
*/
}
