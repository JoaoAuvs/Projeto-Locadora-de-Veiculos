#include "ClienteJuridico.h"

ClienteJuridico::ClienteJuridico():CNPJCliente(""),nomeClienteJuridico(""),nomeFantasia(""),
    razaoSocial(""),telefoneClienteJuridico(""),emailClienteJuridico(""){}

ClienteJuridico::ClienteJuridico(QString CNPJCliente,QString nomeClienteJuridico,
                                 QString nomeFantasia,QString razaoSocial,
                                 QString telefoneClienteJuridico,QString emailClienteJuridico):

    CNPJCliente(CNPJCliente),
    nomeClienteJuridico(nomeClienteJuridico),
    nomeFantasia(nomeFantasia),
    razaoSocial(razaoSocial),
    telefoneClienteJuridico(telefoneClienteJuridico),
    emailClienteJuridico(emailClienteJuridico)
{}
