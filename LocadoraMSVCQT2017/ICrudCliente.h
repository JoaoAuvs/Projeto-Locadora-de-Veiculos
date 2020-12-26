#ifndef ICRUDCLIENTE_H
#define ICRUDCLIENTE_H
#include "Cliente.h"


namespace Locadora {class ICrudCliente;}
class ICrudCliente{
    virtual void incluirCliente(Cliente objeto)const=0;
    virtual Cliente* buscarCliente(QString cpf)const=0;
    virtual void  alterarCliente(Cliente &cliente)const=0;

};
#endif // ICRUDCLIENTE_H
