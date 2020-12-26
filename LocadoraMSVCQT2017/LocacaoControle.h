#ifndef LOCACAOCONTROLE_H
#define LOCACAOCONTROLE_H
#include "ICrudeLocacao.h"
#include "Locacao.h"
#include "LocacaoPersistencia.h"


namespace Locadora {class LocacaoControle;}
class LocacaoControle : public ICrudeLocacao,Locacao
{
private:
    LocacaoPersistencia *persistencia;
public:
    LocacaoControle();
    ~LocacaoControle();

   // void novaLocacao(int CPFCliente) const; não sei pq ele colocou isso

     void LocarVeiculo(Locacao objeto)const;
     void devolverVeiculo(Locacao nome)const;

    Locacao* buscarLocacao(int id)const;



    void validaId(const int &id)const;
    void validaPlaca(const QString &placa) const;
    void validaCpfCliente(const int &CPFCliente) const;
    void validaCNHMotorista(const int &CNHMotorista) const;
};

#endif // LOCACAOCONTROLE_H


