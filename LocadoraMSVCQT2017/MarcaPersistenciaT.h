#ifndef MARCAPERSISTENCIAT_H
#define MARCAPERSISTENCIAT_H
#include <QtSql>
#include <queue>
#include <QString>
#include <Marca.h>
#include <ICrudMarca.h>

namespace Locadora {
    class MarcaPersistenciaT;
}
class MarcaPersistenciaT: ICrudMarca, Marca
{
private:
    QSqlDatabase bancoDeDados;
public:
    MarcaPersistenciaT();
    ~MarcaPersistenciaT();

    void incluirMarca(Marca objeto)const;
    void excluirMarca(int id)const;
    //virtual Marca* buscarMarca(int id)const=0;
    void  alterarMarca(Marca &marca)const;
};

#endif // MARCAPERSISTENCIAT_H



