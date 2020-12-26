#include "ModeloPersistencia.h"

ModeloPersistencia::ModeloPersistencia()
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
ModeloPersistencia::~ModeloPersistencia(){
     bancoDeDados.close();
}

void ModeloPersistencia::incluirModelo(Modelo objeto) const
{
   try
    {
        //A classe QSqlQuery executa requisições ao SGBD
        QSqlQuery execQuery;
        execQuery.prepare("INSERT INTO tb_Modelo(Descricao,IDMarca) VALUES "
                          "(:Descricao,:IDMarca)");

        execQuery.bindValue(":Descricao",objeto.getDescricao());
        execQuery.bindValue(":IDMarca",objeto.getIdMarca());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
}

void ModeloPersistencia::alterarModelo(Modelo &modelo) const
{
   try
    {
        QSqlQuery execQuery;
        execQuery.prepare("UPDATE tb_Modelo SET Descricao =:Descricao WHERE ID = :ID");//como colocar o ID da marca aqui

        execQuery.bindValue(":Descricao", modelo.getDescricao());
        execQuery.bindValue(":ID", modelo.getId());
        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }

}


void ModeloPersistencia::excluirModelo(int id) const
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
