#include "LocacaoControle.h"

LocacaoControle::LocacaoControle()
{
  try
    {
      persistencia = new LocacaoPersistencia;
    }
    catch (QString &erro) {throw QString(erro);}
}

LocacaoControle::~LocacaoControle()
{
    delete persistencia;
}

void LocacaoControle::LocarVeiculo(Locacao objeto) const
{
  try
    {
        this->persistencia->LocarVeiculo(objeto);
    }
    catch (QString &erro) {throw QString(erro);}
}

void LocacaoControle::devolverVeiculo(Locacao nome) const
{
  try
    {
     //Não sei fazer a funcao de devolver, essa parte não era minha e se fosse eu continuaria sem saber
    // this->persistencia->alterarCliente(cliente);
        this->persistencia->devolverVeiculo(nome);
    }
    catch (QString &erro) {throw QString(erro);}
}


/*
void ClienteControle::validaNome(const QString &nome) const
{
   if(nome.isEmpty()) throw QString("001 - Nome vazio");
}

void ClienteControle::validaCpf(const QString &cpf) const
{
    if(cpf.length()<11) throw QString("002 - CPF invalido");
}

 void ClienteControle::validaEmail(const QString &email) const
{
    if(email.split('@').length() != 2) throw QString("003 - Email invalido");
}

Cliente* ClienteControle::buscarCliente(QString cpf)const
{
try
  {
  return this->persistencia->buscarCliente(cpf);
  }
   catch(QString &erro)
    { throw QString(erro); }
}

*/


