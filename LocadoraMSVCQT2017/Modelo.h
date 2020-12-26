#ifndef MODELO_H
#define MODELO_H
#include <QString>
#include <QStringList>

namespace  Locadora {class Modelo;}

class Modelo
{
private:
    int id;
    QString descricao;
    int idMarca;
public:
    Modelo();
    Modelo( QString descricao,int idMarca);
    int getId(){return this-> id;}
    void setId(int id){this->id = id;}

    QString getDescricao(){return this->descricao;}
    void setDescricao(QString descricao){this->descricao = descricao;}

    int getIdMarca(){return this->idMarca;}
    void setIdMarca(int idMarca){this->idMarca=idMarca;}
};

#endif // MODELO_H
