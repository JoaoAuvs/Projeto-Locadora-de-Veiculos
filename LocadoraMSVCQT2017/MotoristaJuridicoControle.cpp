#include "MotoristaJuridicoControle.h"

MotoristaJuridicoControle::MotoristaJuridicoControle()
{
    try
    {
        persistencia = new MotoristaJuridicoPersistencia;
    } catch (QString &erro) {throw QString(erro);}
}

MotoristaJuridicoControle::~MotoristaJuridicoControle()
{
    delete persistencia;
}

void MotoristaJuridicoControle::incluirMotorista(MotoristaJuridico objeto)const
{
    try
    {
        this->validaNomeMotorista(objeto.getNomeMotorista());
        this->validaCPFMotorista(objeto.getCPFMotorista());
        this->validaEmailMotorista(objeto.getEmailMotorista());

        this->persistencia->incluirMotorista(objeto);
    } catch (QString &erro) {throw QString(erro);}
}

MotoristaJuridico* MotoristaJuridicoControle::buscarMotorista(QString cpf)const
{
    try{
        return this->persistencia->buscarMotorista(cpf);
    }catch(QString &erro){ throw QString(erro); }
}

void MotoristaJuridicoControle::alterarMotorista(MotoristaJuridico &motorista)const
{
    try
    {
        this->validaNomeMotorista(motorista.getNomeMotorista());
        this->validaCPFMotorista(motorista.getCPFMotorista());
        this->validaEmailMotorista(motorista.getEmailMotorista());
        this->persistencia->alterarMotorista(motorista);
    } catch (QString &erro) {throw QString(erro);}
}

void MotoristaJuridicoControle::validaNomeMotorista(const QString &nome) const
{
    if(nome.isEmpty()) throw QString("001 - Nome vazio");
}

void MotoristaJuridicoControle::validaCPFMotorista(const QString &cpf) const
{
    if(cpf.length()<11) throw QString("002 - CPF invalido");
}

void MotoristaJuridicoControle::validaEmailMotorista(const QString &email) const
{
    if(email.split('@').length() != 2) throw QString("003 - Email invalido");
}
