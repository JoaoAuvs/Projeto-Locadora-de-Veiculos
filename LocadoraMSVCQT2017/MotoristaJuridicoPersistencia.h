#ifndef MOTORISTAJURIDICOPERSISTENCIA_H
#define MOTORISTAJURIDICOPERSISTENCIA_H
#include <QtSql>
#include <queue>
#include <QString>
#include <Motorista.h>
#include "IcrudMotoristaJ.h"

namespace Locadora {class MotoristaJuridicoPersistencia;}

class MotoristaJuridicoPersistencia: public ICrudMotoristaJ
{
private:
    //ATRIBUTO QUE REPRESENTA A CONEXÃO COM O BANCO.
    QSqlDatabase bancoDeDados;
public:
    MotoristaJuridicoPersistencia();
    ~MotoristaJuridicoPersistencia();

    void incluirMotorista(MotoristaJuridico objeto)const;
    //void excluirMotorista(QString  &objeto)const;
    MotoristaJuridico* buscarMotorista(QString cpf)const;
    void  alterarMotorista(MotoristaJuridico &motorista)const;
    std::queue<Motorista> *listar();
};

#endif // MOTORISTAJURIDICOPERSISTENCIA_H

