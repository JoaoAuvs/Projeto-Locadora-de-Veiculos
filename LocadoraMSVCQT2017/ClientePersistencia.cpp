#include "ClientePersistencia.h"

ClientePersistencia::ClientePersistencia()
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

ClientePersistencia::~ClientePersistencia()
{
    bancoDeDados.close();
}

void ClientePersistencia::incluirCliente(Cliente objeto)const
{
   try
    {
        //A classe QSqlQuery executa requisições ao SGBD
        QSqlQuery execQuery;
        execQuery.prepare("INSERT INTO tb_PessoaFisica(CPFCliente,NomeCliente,"
                          "RGCliente,TelefoneCliente,EmailCliente) VALUES "
                          "(:CPFCliente,:NomeCliente,:RGCliente,:TelefoneCliente,"
                          ":EmailCliente"
                          ")");
        execQuery.bindValue(":CPFCliente",objeto.getCPFCliente());
        execQuery.bindValue(":NomeCliente",objeto.getNomeCliente());
        //execQuery.bindValue(":Nome Fantasia",objeto.getNomeFantasia());
        //execQuery.bindValue(":Razão Social",objeto.getRazaoSocial());
        //execQuery.bindValue(":CNPJCliente", objeto.getCNPJCliente());
        execQuery.bindValue(":RGCliente",objeto.getRGCliente());
        execQuery.bindValue(":TelefoneCliente",objeto.getTelefoneCliente());
        execQuery.bindValue(":EmailCliente",objeto.getEmailCliente());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
}

void ClientePersistencia::alterarCliente(Cliente &cliente)const
{
    try
    {
        QSqlQuery execQuery;

        execQuery.prepare("UPDATE tb_PessoaFisica SET CPFCliente =:CPFCliente, "
                          "NomeCliente =:NomeCliente,"
                          "RGCliente=:RGCliente,TelefoneCliente=:TelefoneCliente,"
                          "EmailCliente =:EmailCliente where idCliente =:IdCliente"
                          );
        execQuery.bindValue(":CPFCliente",cliente.getCPFCliente());
        execQuery.bindValue(":NomeCliente",cliente.getNomeCliente());
        execQuery.bindValue(":RGCliente",cliente.getRGCliente());
        execQuery.bindValue(":TelefoneCliente",cliente.getTelefoneCliente());
        execQuery.bindValue(":EmailCliente",cliente.getEmailCliente());
        execQuery.bindValue(":IdCliente",cliente.getID()); // cria o idClliente na classe dele
        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }

}

/*
void ClientePersistencia::excluirCliente(int  &objeto)const
{
    try
    {
        QSqlQuery execQuery;
        execQuery.prepare("DELETE FROM tb_PessoaFisica WHERE cpf = :cpf");
        execQuery.bindValue(":cpf",obj.getCpf());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }

}
*/
Cliente* ClientePersistencia::buscarCliente(QString cpf)const
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

std::queue<Cliente> *ClientePersistencia::listar()
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
