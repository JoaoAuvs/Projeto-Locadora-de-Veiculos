#include "ClienteControle.h"

ClienteControle::ClienteControle()
{
    try
    {
        persistencia = new ClientePersistencia;
    } catch (QString &erro) {throw QString(erro);}
}

ClienteControle::~ClienteControle()
{
    delete persistencia;
}

void ClienteControle::incluirCliente(Cliente objeto)const
{
    try
    {
        this->validaNome(objeto.getNomeCliente());
        this->validaCpf(objeto.getCPFCliente());
        this->validaEmail(objeto.getEmailCliente());

        this->persistencia->incluirCliente(objeto);
    } catch (QString &erro) {throw QString(erro);}
}

void ClienteControle::alterarCliente(Cliente &cliente)const
{
    try
    {
        this->validaNome(cliente.getNomeCliente());
        this->validaCpf(cliente.getCPFCliente());
        this->validaEmail(cliente.getEmailCliente());
        this->validaRG(cliente.getRGCliente());
        this->persistencia->alterarCliente(cliente);
    } catch (QString &erro) {throw QString(erro);}
}


/*void ClienteControle::excluirCliente(QString &cliente) const
{

}
*/

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
void ClienteControle::validaRG(const QString &rg) const
{
    if(rg.length()<8) throw QString("004 - RG invalido");
}

Cliente* ClienteControle::buscarCliente(QString cpf)const
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
