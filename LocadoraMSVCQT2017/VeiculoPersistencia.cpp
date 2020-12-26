#include "VeiculoPersistencia.h"

VeiculoPersistencia::VeiculoPersistencia()
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

VeiculoPersistencia::~VeiculoPersistencia()
{
    bancoDeDados.close();
}

void VeiculoPersistencia::incluirVeiculo(Veiculo objeto) const
{
   try
    {
      /*  QSqlQuery execQuery;
        execQuery.prepare("INSERT INTO tb_Motorista(CPFMotorista,NomeMotorista,"
                          "RGMotorista,TelefoneMotorista,EmailMotorista, DataValidadeCNH, NumeroRegistroCNH) VALUES "
                          "(:CPFMotorista,:NomeMotorista,:RGCliente,:TelefoneMotorista,"
                          ":EmailMotorista, :DataValidadeCNH, NumeroRegistroCNH"
                          ")");*/

        //A classe QSqlQuery executa requisições ao SGBD
        QSqlQuery execQuery;
        execQuery.prepare("INSERT INTO tb_Veiculo(Placa,Chassi,Renavan,PrecoDeCompra,PrecoDeVenda,"
                          "NumeroDePassageiros, AnoDeFabricacao, AnoModelo, Quilometragem,"
                          "Potencia, CapacidadeDoPortaMala) VALUES "
                          "(:Placa,:Chassi,:Renavan,:PrecoDeCompra,:PrecoDeVenda,:NumeroDePassageiros,"
                          ":AnoDeFabricacao,"
                          ":AnoModelo,:Quilometragem,:Potencia,:CapacidadeDoPortaMala"
                          ")");
        execQuery.bindValue(":Placa",objeto.getPlaca());
        execQuery.bindValue(":Chassi",objeto.getChassi());
        execQuery.bindValue(":Renavan",objeto.getRenavan());
        execQuery.bindValue(":PrecoDeCompra",objeto.getPrecodeCompra());
        execQuery.bindValue(":PrecoDeVenda",objeto.getPrecodeVenda());
        execQuery.bindValue(":NumeroDePassageiros", objeto.getNumeroPassageiros());
        execQuery.bindValue(":AnoDeFabricacao",objeto.getAnoFabricacao());
        execQuery.bindValue(":AnoModelo",objeto.getAnoModelo());
        execQuery.bindValue(":Quilometragem",objeto.getQuilometragem());
        execQuery.bindValue(":Potencia",objeto.getPotencia());
        execQuery.bindValue(":CapacidadeDoPortaMala",objeto.getCapacidadePortaMalas());

        if(!execQuery.exec())
        {
            throw QString(execQuery.lastError().text());
        }
    } catch (QString &erro) { throw QString(erro); }

}

void VeiculoPersistencia::alterarVeiculo(Veiculo &veiculo) const
{/*
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


void VeiculoPersistencia::excluirVeiculo(QString nome) const
{
  /*  try
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
Veiculo* VeiculoPersistencia::buscarVeiculo(QString placa)const{

}
