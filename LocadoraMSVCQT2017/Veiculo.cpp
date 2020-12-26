#include "Veiculo.h"

Veiculo::Veiculo():placa(""),chassi(""),renavan(""),precodeCompra(""),
    precodeVenda(""),numeroPassageiros(""),anoFabricacao(""),
    anoModelo(""),quilometragem(""),potencia(""),capacidadePortaMalas(""){}

Veiculo::Veiculo(QString placa,QString chassi,QString renavan,
                 QString precodeCompra,QString precodeVenda,QString numeroPassageiros,
                 QString anoFabricacao,QString anoModelo,QString quilometragem,
                 QString potencia,
                 QString  capacidadePortaMalas,int idMarca,
                 int idModelo,int idCategoria,int IDCombustivel):
    placa(placa),
    chassi(chassi),
    renavan(renavan),
    precodeCompra(precodeCompra),
    precodeVenda(precodeVenda),
    numeroPassageiros(numeroPassageiros),
    anoFabricacao(anoFabricacao),
    anoModelo(anoModelo),
    quilometragem(quilometragem),
    potencia(potencia),
    capacidadePortaMalas(capacidadePortaMalas),
    idMarca(idMarca),
    idModelo(idModelo),
    idCategoria(idCategoria),
    IDCombustivel(IDCombustivel)
{}
