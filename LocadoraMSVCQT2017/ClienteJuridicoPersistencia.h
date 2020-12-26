#ifndef CLIENTEJURIDICOPERSISTENCIA_H
#define CLIENTEJURIDICOPERSISTENCIA_H
#include <QtSql>
#include <queue>
#include <QString>
#include <ClienteJuridico.h>
#include "ICrudeClienteJuridico.h"

namespace Locadora {
class ClienteJuridicoPersistencia;
}

class ClienteJuridicoPersistencia: public ICrudClienteJuridico, ClienteJuridico
{
private:
    //ATRIBUTO QUE REPRESENTA A CONEXÃO COM O BANCO.
    QSqlDatabase bancoDeDados;

public:
    ClienteJuridicoPersistencia();
    ~ClienteJuridicoPersistencia();
    void incluirCliente(ClienteJuridico objeto)const;
    //void excluirCliente(QString  &objeto)const;
    ClienteJuridico* buscarCliente(QString cpf)const;
    void  alterarCliente(ClienteJuridico &cliente)const;
    std::queue<ClienteJuridico> *listar();
};

#endif // CLIENTEJURIDICOPERSISTENCIA_H


