#ifndef VEICULOPERSISTENCIA_H
#define VEICULOPERSISTENCIA_H
#include <QtSql>
#include <queue>
#include <QString>
#include <Veiculo.h>
#include <ICrudVeiculo.h>

namespace Locadora {class VeiculoPersistencia;}

class VeiculoPersistencia: ICrudVeiculo, Veiculo
{
private:
    //ATRIBUTO QUE REPRESENTA A CONEXÃO COM O BANCO.
    QSqlDatabase bancoDeDados;
public:
    VeiculoPersistencia();
    ~VeiculoPersistencia();


    void incluirVeiculo(Veiculo objeto)const;
    void excluirVeiculo(QString nome)const;
    Veiculo* buscarVeiculo(QString placa)const;
    void  alterarVeiculo(Veiculo &veiculo)const;
};

#endif // VEICULOPERSISTENCIA_H

