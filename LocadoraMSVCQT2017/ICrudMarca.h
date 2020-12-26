#ifndef ICRUDMARCA_H
#define ICRUDMARCA_H
#include "Marca.h"

namespace Locadora {class ICrudMarca;}

//Interface
class ICrudMarca{
    virtual void incluirMarca(Marca objeto)const=0;
    virtual void excluirMarca(int id)const=0;
    //virtual Marca* buscarMarca(int id)const=0;
    virtual void  alterarMarca(Marca &marca)const=0;
};
#endif // ICRUDMARCA_H
