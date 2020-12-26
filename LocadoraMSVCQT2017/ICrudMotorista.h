#ifndef ICRUDMOTORISTA_H
#define ICRUDMOTORISTA_H
#include "MotoristaF.h"

namespace Locadora {class ICrudMotorista;}

//Interface
class ICrudMotorista{
    virtual void incluirMotorista(MotoristaF objeto)const=0;
    //virtual void excluirMotorista(QString cpf)const=0;
    virtual MotoristaF* buscarMotorista(QString cpf)const=0;
    virtual void  alterarMotorista(MotoristaF &cliente)const=0;
};
#endif // ICRUDMOTORISTA_H
