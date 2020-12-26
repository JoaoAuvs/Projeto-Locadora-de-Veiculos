#ifndef ICRUDELOCACAO_H
#define ICRUDELOCACAO_H
#include "Locacao.h"

namespace Locadora {class ICrudeLocacao;}
class ICrudeLocacao{
    virtual void LocarVeiculo(Locacao objeto)const=0;
    virtual void devolverVeiculo(Locacao nome)const=0;
};
#endif // ICRUDELOCACAO_H
