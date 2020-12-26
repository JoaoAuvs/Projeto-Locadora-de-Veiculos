#include "Locacao.h"

Locacao::Locacao():dataLocacao(),dataDevolucao(),quilometragemInicial(""),quilometragemFinal("")
  ,valorCaucao(0),valorSeguro(0),valorTotal(0),idVeiculo(0),
                                                   idCliente(0),
                                                  idMotorista(0),
                                                   idCategoria(0),
                                                   situacao(0){}

Locacao::Locacao(QDate dataLocacao, QDate dataDevolucao,QString quilometragemInicial,
                 QString quilometragemFinal,
                 float valorCaucao,float valorSeguro,float valorTotal,int idVeiculo,
                         int idCliente,
                         int idMotorista,
                         int idCategoria,
                         int situacao):
    dataLocacao(dataLocacao),
    dataDevolucao(dataDevolucao),
    quilometragemInicial(quilometragemInicial),
    quilometragemFinal(quilometragemFinal),
    valorCaucao(valorCaucao),
    valorSeguro(valorSeguro),
    valorTotal(valorTotal),
   idVeiculo(idVeiculo),
   idCliente(idCliente),
     idMotorista(idMotorista),
    idCategoria(idCategoria),
    situacao(situacao)
{}

