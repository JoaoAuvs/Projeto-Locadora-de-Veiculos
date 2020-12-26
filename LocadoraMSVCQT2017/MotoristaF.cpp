#include "MotoristaF.h"

MotoristaF::MotoristaF():CPFMotorista(""),nomeMotorista(""),RGMotorista(""),telefoneMotorista(""),
                       emailMotorista(""),dataDeValidade(),numeroCNH(""),categoria(0),idClienteF(0){}

MotoristaF::MotoristaF(QString CPFMotorista,QString nomeMotorista,QString RGMotorista,
                       QString telefoneMotorista,
                       QString emailMotorista,
                       QDate dataDeValidade,
                       QString numeroCNH,
                       int  categoria,
                       int idClienteF):
    CPFMotorista(CPFMotorista),
    nomeMotorista(nomeMotorista),
    RGMotorista(RGMotorista),
    telefoneMotorista(telefoneMotorista),
    emailMotorista(emailMotorista),
    dataDeValidade(dataDeValidade),
    numeroCNH(numeroCNH),
    categoria(categoria),
    idClienteF(idClienteF)
    // FALTA FOTO //
{}


