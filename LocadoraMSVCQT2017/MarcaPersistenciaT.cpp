#include "MarcaPersistenciaT.h"

MarcaPersistenciaT::MarcaPersistenciaT()
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
MarcaPersistenciaT::~MarcaPersistenciaT(){
     bancoDeDados.close();
}

void MarcaPersistenciaT::incluirMarca(Marca objeto)const
{
   try
    {
        //A classe QSqlQuery executa requisições ao SGBD
        QSqlQuery execQuery;
        execQuery.prepare("INSERT INTO tb_Marca(Descricao) VALUES "
                          "(:Descricao)");

        execQuery.bindValue(":Descricao",objeto.getDescricao());


        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
}

void MarcaPersistenciaT::alterarMarca(Marca &marca)const
{
    try
    {
        QSqlQuery execQuery;
        execQuery.prepare("UPDATE tb_Marca SET Descricao =:Descricao where ID =:ID");

        execQuery.bindValue(":Descricao", marca.getDescricao());
        execQuery.bindValue(":ID",marca.getId()); // cria o idClliente na classe dele

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
}


void MarcaPersistenciaT::excluirMarca(int id)const
{
   /* try
    {
        QSqlQuery execQuery;
        execQuery.prepare("DELETE FROM Usuario WHERE cpf = :cpf");
        execQuery.bindValue(":cpf",obj.getCpf());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
*/
}
/*
ClienteJuridico* ClienteJuridicoPersistencia::buscarCliente(QString cpf)const
{
    try {
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
    }
}

std::queue<ClienteJuridico> *ClienteJuridicoPersistencia::listar()
{
    try
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
}
*/
