#ifndef CLIENTECONTROLE_H
#define CLIENTECONTROLE_H
#include "ClientePersistencia.h"
#include "ICrudCliente.h"
#include "Cliente.h"

namespace Locadora {class ClienteControle;}

class ClienteControle: public ICrudCliente,Cliente
{
private:
    ClientePersistencia *persistencia;
public:
    ClienteControle();
    ~ClienteControle();
    void incluirCliente(Cliente objeto)const;
    Cliente* buscarCliente(QString cpf)const;
    void  alterarCliente(Cliente &cliente)const;
    std::queue<Cliente> *listar();
    void validaNome(const QString &nome) const;
    void validaCpf(const QString &cpf) const;
    void validaEmail(const QString &email) const;
    void validaRG(const QString &rg) const;
};
#endif // CLIENTECONTROLE_H
