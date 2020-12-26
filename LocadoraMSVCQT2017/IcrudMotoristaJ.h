#ifndef ICRUDMOTORISTAJ_H
#define ICRUDMOTORISTAJ_H

#include "MotoristaJuridico.h"

namespace Locadora {class ICrudMotoristaJ;}

//Interface
class ICrudMotoristaJ{
    virtual void incluirMotorista(MotoristaJuridico objeto)const=0;
    //virtual void excluirMotorista(QString cpf)const=0;
    virtual MotoristaJuridico* buscarMotorista(QString cpf)const=0;
    virtual void  alterarMotorista(MotoristaJuridico &cliente)const=0;
};

#endif // ICRUDMOTORISTAJ_H
