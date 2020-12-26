#ifndef LOCACAOPERSISTENCIA_H
#define LOCACAOPERSISTENCIA_H
#include <QtSql>
#include <QString>
#include <Locacao.h>
#include "ICrudeLocacao.h"

namespace Locadora {class LocacaoPersistencia;}

class LocacaoPersistencia:public ICrudeLocacao,Locacao
{
private:
    //ATRIBUTO QUE REPRESENTA A CONEXÃO COM O BANCO.
    QSqlDatabase bancoDeDados;
public:
    LocacaoPersistencia();
    ~LocacaoPersistencia();

    void LocarVeiculo(Locacao objeto) const;
    void devolverVeiculo(Locacao nome)const;

    Locacao* buscarLocacao(int id) const;
};

#endif // LOCACAOPERSISTENCIA_H


