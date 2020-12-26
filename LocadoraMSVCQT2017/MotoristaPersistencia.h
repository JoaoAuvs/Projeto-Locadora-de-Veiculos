#ifndef MOTORISTAPERSISTENCIA_H
#define MOTORISTAPERSISTENCIA_H
#include <QtSql>
#include <queue>
#include <QString>
#include <MotoristaF.h>
#include "ICrudMotorista.h"

namespace Locadora {class MotoristaPersistencia;}

class MotoristaPersistencia: public ICrudMotorista
{
private:
    //ATRIBUTO QUE REPRESENTA A CONEXÃO COM O BANCO.
    QSqlDatabase bancoDeDados;
public:
    MotoristaPersistencia();
    ~MotoristaPersistencia();
    void incluirMotorista(MotoristaF objeto)const;
    //void excluirMotorista(QString  &objeto)const;
    MotoristaF* buscarMotorista(QString cpf)const;
    void  alterarMotorista(MotoristaF &motorista)const;
    std::queue<MotoristaF> *listar();
};
#endif // MOTORISTAPERSISTENCIA_H
