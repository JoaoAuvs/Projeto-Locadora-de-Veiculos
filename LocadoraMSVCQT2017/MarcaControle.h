#ifndef MARCACONTROLE_H
#define MARCACONTROLE_H
#include "Marca.h"
#include "MarcaPersistenciaT.h"
#include "ICrudMarca.h"

namespace Locadora {class MarcaControle;}

class MarcaControle : public ICrudMarca, Marca
{
private:

    MarcaPersistenciaT *persistencia;
public:
    MarcaControle();
    ~MarcaControle();

        void incluirMarca(Marca objeto)const;
        void excluirMarca(int id)const;
        void  alterarMarca(Marca &marca)const;

    void validaNome(const QString &nome) const;

};
#endif // MARCACONTROLE_H



