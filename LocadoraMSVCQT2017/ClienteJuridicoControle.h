#ifndef CLIENTEJURIDICOCONTROLE_H
#define CLIENTEJURIDICOCONTROLE_H
#include "ClienteJuridicoPersistencia.h"
#include "ICrudeClienteJuridico.h"
#include "ClienteJuridico.h"

namespace Locadora {
class ClienteJuridicoControle;
}

class ClienteJuridicoControle : public ICrudClienteJuridico ,ClienteJuridico
{
private:
    ClienteJuridicoPersistencia *persistencia;
public:
    ClienteJuridicoControle();
    ~ClienteJuridicoControle();

    void incluirCliente(ClienteJuridico objeto)const;
    ClienteJuridico* buscarCliente(QString cpf)const;
    void  alterarCliente(ClienteJuridico &cliente)const;

    std::queue<ClienteJuridico> *listar();
    void validaNome(const QString &nome) const;
    void validaCNPJ(const QString &cnpj) const;
    void validaEmail(const QString &email) const;
};

#endif // CLIENTEJURIDICOCONTROLE_H

