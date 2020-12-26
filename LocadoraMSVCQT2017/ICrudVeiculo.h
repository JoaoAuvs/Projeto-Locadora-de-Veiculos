#ifndef ICRUDVEICULO_H
#define ICRUDVEICULO_H

#include "Veiculo.h"

namespace Locadora {class ICrudVeiculo;}

//Interface
class ICrudVeiculo{
    virtual void incluirVeiculo(Veiculo objeto)const=0;
    virtual void excluirVeiculo(QString nome)const=0;
    virtual Veiculo* buscarVeiculo(QString placa)const=0;
    virtual void  alterarVeiculo(Veiculo &veiculo)const=0;
};
#endif // ICRUDVEICULO_H
