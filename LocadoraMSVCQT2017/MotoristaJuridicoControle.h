#ifndef MOTORISTAJURIDICOCONTROLE_H
#define MOTORISTAJURIDICOCONTROLE_H
#include "MotoristaJuridicoPersistencia.h"
#include "IcrudMotoristaJ.h"
#include "MotoristaJuridico.h"

namespace Locadora {class MotoristaJuridicoControle;}


class MotoristaJuridicoControle: public ICrudMotoristaJ,MotoristaJuridico
{
private:
    MotoristaJuridicoPersistencia *persistencia;
public:
    MotoristaJuridicoControle();
    ~MotoristaJuridicoControle();


    void incluirMotorista(MotoristaJuridico objeto)const;
    //virtual void excluirMotorista(QString cpf)const=0;
    MotoristaJuridico* buscarMotorista(QString cpf)const;
    void  alterarMotorista(MotoristaJuridico &cliente)const;

   void validaNomeMotorista(const QString &nome) const;
   void validaCPFMotorista(const QString &cpf) const;
   void validaEmailMotorista(const QString &email) const;
};

#endif // MOTORISTAJURIDICOCONTROLE_H


