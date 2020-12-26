#ifndef MODELOCONTROLE_H
#define MODELOCONTROLE_H
#include <Modelo.h>
#include <ModeloPersistencia.h>
#include <ICrudModelo.h>

namespace Locadora {class ModeloControle;}

class ModeloControle: ICrudModelo, Modelo
{
private:
    ModeloPersistencia *persistencia;
public:
    ModeloControle();
    ~ModeloControle();

    void incluirModelo(Modelo objeto)const;
    void excluirModelo(int id)const;
  //  Modelo* buscarModelo(int id)const;
    void  alterarModelo(Modelo &modelo)const;

    void validaNome(const QString &nome) const;

};
#endif // MODELOCONTROLE_H




