#include "ModeloControle.h"

ModeloControle::ModeloControle()
{
    try
    {
      persistencia = new ModeloPersistencia;
    } catch (QString &erro) {throw QString(erro);}
}


ModeloControle::~ModeloControle()
{
    delete persistencia;
}

void ModeloControle::incluirModelo(Modelo objeto)const
{
    try
    {
        this->validaNome(objeto.getDescricao());


        this->persistencia->incluirModelo(objeto);
    } catch (QString &erro) {throw QString(erro);}
}

void ModeloControle::alterarModelo(Modelo &modelo)const
{
    try
    {
        this->validaNome(modelo.getDescricao());
        this->persistencia->alterarModelo(modelo);

    } catch (QString &erro) {throw QString(erro);}
}


void ModeloControle::excluirModelo(int id) const
{

}


void ModeloControle::validaNome(const QString &nome) const
{
    if(nome.isEmpty()) throw QString("001 - Nome vazio");
}


