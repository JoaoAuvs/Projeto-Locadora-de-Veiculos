#ifndef MOTORISTACONTROLE_H
#define MOTORISTACONTROLE_H
#include "MotoristaPersistencia.h"
#include "ICrudMotorista.h"
#include "MotoristaF.h"

namespace Locadora {class MotoristaControle;}

class MotoristaControle: public ICrudMotorista,MotoristaF
{
private:
    MotoristaPersistencia *persistencia;
public:
     MotoristaControle();
    ~MotoristaControle();

    void incluirMotorista(MotoristaF objeto)const;
    MotoristaF* buscarMotorista(QString cpf)const;
    void  alterarMotorista(MotoristaF &motorista)const;

    void validaNomeMotorista(const QString &nome) const;
    void validaCPFMotorista(const QString &cpf) const;
    void validaEmailMotorista(const QString &email) const;
};
#endif // MOTORISTACONTROLE_H
