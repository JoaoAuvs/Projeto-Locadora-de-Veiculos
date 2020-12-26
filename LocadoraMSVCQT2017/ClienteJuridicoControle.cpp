#include "ClienteJuridicoControle.h"

ClienteJuridicoControle::ClienteJuridicoControle()
{
  try
    {
        persistencia = new ClienteJuridicoPersistencia;
    } catch (QString &erro) {throw QString(erro);}
}

ClienteJuridicoControle::~ClienteJuridicoControle()
{
    delete persistencia;
}

void ClienteJuridicoControle::incluirCliente(ClienteJuridico objeto)const
{
    try
    {
        this->validaNome(objeto.getNomeClienteJuridico());
        this->validaCNPJ(objeto.getCNPJClienteJuridico());
        this->validaEmail(objeto.getEmailClienteJuridico());

        this->persistencia->incluirCliente(objeto);
    } catch (QString &erro) {throw QString(erro);}
}

void ClienteJuridicoControle::alterarCliente(ClienteJuridico &cliente)const
{
    try
    {
        this->validaNome(cliente.getNomeClienteJuridico());
        this->validaCNPJ(cliente.getCNPJClienteJuridico());
        this->validaEmail(cliente.getEmailClienteJuridico());
        this->persistencia->alterarCliente(cliente);
    } catch (QString &erro) {throw QString(erro);}
}


/*void ClienteControle::excluirCliente(QString &cliente) const
{

}
*/

void ClienteJuridicoControle::validaNome(const QString &nome) const
{
    if(nome.isEmpty()) throw QString("001 - Nome vazio");
}

void ClienteJuridicoControle::validaCNPJ(const QString &cnpj) const
{
    if(cnpj.length()<14) throw QString("002 - CNPJ invalido");
}

void ClienteJuridicoControle::validaEmail(const QString &email) const
{
    if(email.split('@').length() != 2) throw QString("003 - Email invalido");
}

ClienteJuridico* ClienteJuridicoControle::buscarCliente(QString cpf)const
{
    try{
        return this->persistencia->buscarCliente(cpf);
    }catch(QString &erro){ throw QString(erro); }
}

/*
std::queue<Usuario> *UsuarioControle::listar()
{
    try
    {
        return this->persistencia->listar();
    } catch (QString &erro) { throw QString(erro); }
}
*/
