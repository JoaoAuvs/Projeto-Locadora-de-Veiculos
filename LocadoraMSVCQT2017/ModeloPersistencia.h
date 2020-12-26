#ifndef MODELOPERSISTENCIA_H
#define MODELOPERSISTENCIA_H
#include <QtSql>
#include <queue>
#include <QString>
#include <Modelo.h>
#include <ICrudModelo.h>

namespace Locadora {
    class ModeloPersistencia;
}

class ModeloPersistencia: ICrudModelo, Modelo
{
private:
     QSqlDatabase bancoDeDados;
public:
    ModeloPersistencia();
    ~ModeloPersistencia();

    void incluirModelo(Modelo objeto)const;
    void excluirModelo(int id)const;
  //  Modelo* buscarModelo(int id)const;
    void  alterarModelo(Modelo &modelo)const;

};

#endif // MODELOPERSISTENCIA_H
