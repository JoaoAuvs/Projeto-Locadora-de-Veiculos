#ifndef MARCAPERSISTENCIA_H
#define MARCAPERSISTENCIA_H
#include <QtSql>
#include <queue>
#include <QString>
#include <Marca.h>
#include "ICrudMarca.h"
#include <MarcaControle.h>

namespace Locadora {
class MarcaPersistencia;
}
class MarcaPersistencia: public ICrudMarca, Marca
{
private:
    //ATRIBUTO QUE REPRESENTA A CONEXÃO COM O BANCO.
    QSqlDatabase bancoDeDados;
public:
    MarcaPersistencia();
    ~MarcaPersistencia();

    void incluirMarca(Marca objeto)const;
   // Marca* buscarMarca(QString ID)const;
    void excluirMarca(int id) const;
    void  alterarMarca(Marca &marca)const;
    //std::queue<ClienteJuridico> *listar();
};
#endif // MARCAPERSISTENCIA_H
