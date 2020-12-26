#include "MotoristaControle.h"


MotoristaControle::MotoristaControle()
{
    try
    {
        persistencia = new MotoristaPersistencia;
    } catch (QString &erro) {throw QString(erro);}
}

MotoristaControle::~MotoristaControle()
{
    delete persistencia;
}

void MotoristaControle::incluirMotorista(MotoristaF objeto)const
{
    try
    {
        this->validaNomeMotorista(objeto.getNomeMotorista());
        this->validaCPFMotorista(objeto.getCPFMotorista());
        this->validaEmailMotorista(objeto.getEmailMotorista());

        this->persistencia->incluirMotorista(objeto);
    } catch (QString &erro) {throw QString(erro);}
}

MotoristaF* MotoristaControle::buscarMotorista(QString cpf)const
{
    try{
        return this->persistencia->buscarMotorista(cpf);
    }catch(QString &erro){ throw QString(erro); }
}

void MotoristaControle::alterarMotorista(MotoristaF &motorista)const
{
    try
    {
        this->validaNomeMotorista(motorista.getNomeMotorista());
        this->validaCPFMotorista(motorista.getCPFMotorista());
        this->validaEmailMotorista(motorista.getEmailMotorista());
        this->persistencia->alterarMotorista(motorista);
    } catch (QString &erro) {throw QString(erro);}
}

void MotoristaControle::validaNomeMotorista(const QString &nome) const
{
    if(nome.isEmpty()) throw QString("001 - Nome vazio");
}

void MotoristaControle::validaCPFMotorista(const QString &cpf) const
{
    if(cpf.length()<11) throw QString("002 - CPF invalido");
}

void MotoristaControle::validaEmailMotorista(const QString &email) const
{
    if(email.split('@').length() != 2) throw QString("003 - Email invalido");
}
