#ifndef ICRUDECLIENTEJURIDICO_H
#define ICRUDECLIENTEJURIDICO_H
#include "ClienteJuridico.h"


namespace Locadora {class ICrudClienteJuridico;}

class ICrudClienteJuridico{
    virtual void incluirCliente(ClienteJuridico objeto)const=0;
    virtual ClienteJuridico* buscarCliente(QString cpf)const=0;
    virtual void  alterarCliente(ClienteJuridico &cliente)const=0;

};

#endif // ICRUDECLIENTEJURIDICO_H
