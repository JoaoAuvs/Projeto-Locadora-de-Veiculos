#ifndef CLIENTEPERSISTENCIA_H
#define CLIENTEPERSISTENCIA_H
#include <QtSql>
#include <queue>
#include <QString>
#include <Cliente.h>
#include "ICrudCliente.h"

namespace Locadora {class ClientePersistencia;}

class ClientePersistencia: public ICrudCliente
{
private:
    //ATRIBUTO QUE REPRESENTA A CONEXÃO COM O BANCO.
    QSqlDatabase bancoDeDados;
public:
    ClientePersistencia();
    ~ClientePersistencia();
    void incluirCliente(Cliente objeto)const;
    //void excluirCliente(QString  &objeto)const;
    Cliente* buscarCliente(QString cpf)const;
    void  alterarCliente(Cliente &cliente)const;
    std::queue<Cliente> *listar();
};

#endif // CLIENTEPERSISTENCIA_H
