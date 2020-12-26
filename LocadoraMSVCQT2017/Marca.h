#ifndef MARCA_H
#define MARCA_H
#include <QString>
#include <QStringList>
//#include <MarcaPersistencia.h>
namespace  Locadora {class Marca;}

class Marca
{
private:
    int id;
    QString descricao;
   // QString foto;
  //  MarcaPersistencia *persistencia;
public:
    Marca();
    Marca(QString descricao);
  int getId(){return this-> id;}
  void setId(int id){this->id = id;}
    QString getDescricao(){return this->descricao;}
    void setDescricao(QString descricao){this->descricao = descricao;}
  //  QString getFoto()const{return foto;}
  //  void setFoto(QString foto){this->foto=foto;}
};

#endif // MARCA_H
