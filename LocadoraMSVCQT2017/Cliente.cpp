#include "Cliente.h"

Cliente::Cliente():CPFCliente(""),nomeCliente(""),RGCliente(""),telefoneCliente(""),emailCliente(""){}

Cliente::Cliente(QString CPFCliente,QString nomeCliente,QString RGCliente,
                 QString telefoneCliente,QString emailCliente):

    CPFCliente(CPFCliente),
    nomeCliente(nomeCliente),
    RGCliente(RGCliente),
    telefoneCliente(telefoneCliente),
    emailCliente(emailCliente)
{}
//pronto
