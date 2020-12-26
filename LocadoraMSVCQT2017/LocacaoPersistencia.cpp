#include "LocacaoPersistencia.h"

LocacaoPersistencia::LocacaoPersistencia()
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

LocacaoPersistencia::~LocacaoPersistencia()
{
    bancoDeDados.close();
}
void LocacaoPersistencia::LocarVeiculo(Locacao objeto) const
{
   try
    {
        //A classe QSqlQuery executa requisições ao SGBD
        QSqlQuery execQuery;
        execQuery.prepare("INSERT INTO tb_Locacao(DataDeRetirada,DataDeDevolucao,"
                          "QuilometragemInicial,QuilometragemFinal,ValorDoCaucao,ValorDoSeguro,"
                          "PagamentoFinal, idVeiculo, idCliente, idMotorista, idCategoria,"
                          "Situacao) VALUES "
                          "(:DataDeRetirada,:DataDeDevolucao,:QuilometragemInicial,"
                          ":QuilometragemFinal,:ValorDoCaucao,:ValorDoSeguro,:PagamentoFinal,"
                          ":idVeiculo,:idCliente,:idMotorista,:idCategoria,:Situacao"
                          ")");
        //o id é auto incremento do banco
        execQuery.bindValue(":DataDeRetirada",objeto.getDataLocacao());
        execQuery.bindValue(":DataDeDevolucao",objeto.getDataDevolucao());
        execQuery.bindValue(":QuilometragemInicial",objeto.getQuilInicial());
        execQuery.bindValue(":QuilometragemFinal", objeto.getQuiFinal());
        execQuery.bindValue(":ValorDoCaucao",objeto.getValorCaucao());
        execQuery.bindValue(":ValorDoSeguro",objeto.getValorSeguro());
        execQuery.bindValue(":PagamentoFinal",objeto.getValorTotal());
        execQuery.bindValue(":idVeiculo",objeto.getIDVeiculo());
        execQuery.bindValue(":idCliente",objeto.getIDCLiente());
        execQuery.bindValue(":idMotorista",objeto.getIDMotorista());
        execQuery.bindValue(":idCategoria",objeto.getIDCategoria());
        execQuery.bindValue(":Situacao",objeto.getSituacao());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
}

void LocacaoPersistencia::devolverVeiculo(Locacao nome) const{
   /* try
    {
        QSqlQuery execQuery;
        execQuery.prepare("UPDATE tb_PessoaJuridica SET "
                        " NomePessoaJuridica= :NomePessoaJuridica,"
                        "NomeFantasia = :NomeFantasia, RazaoSocial = :RazaoSocial, "
                         "TelefonePessoaJuridica = :TelefonePessoaJuridica"
                          " EmailPessoaJuridica = :EmailPessoaJuridica"
                        "WHERE CNPJCliente = :CNPJCLiente");

        execQuery.bindValue(":NomePessoaJuridica", nome.getNomeClienteJuridico());
        execQuery.bindValue(":NomeFantasia",nome.getNomeFantasia());
        execQuery.bindValue(":RazaoSocial",nome.getRazaoSocial());
        execQuery.bindValue(":TelefonePessoaJuridica",nome.getTelefoneClienteJuridico());
        execQuery.bindValue(":EmailPessoaJuridica",nome.getNomeFantasia());


        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }
    */
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
