#ifndef ICRUDMODELO_H
#define ICRUDMODELO_H
#include "Modelo.h"

namespace Locadora {class ICrudModelo;}

//Interface
class ICrudModelo{
    virtual void incluirModelo(Modelo objeto)const=0;
    virtual void excluirModelo(int id)const=0;
  //  virtual Modelo* buscarModelo(int id)const=0;
    virtual void  alterarModelo(Modelo &modelo)const=0;
};
#endif // ICRUDMODELO_H
