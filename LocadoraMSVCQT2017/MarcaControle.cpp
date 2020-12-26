#include "MarcaControle.h"

MarcaControle::MarcaControle()
{
    try
    {
     // persistencia = new MarcaPersistencia;
        persistencia = new MarcaPersistenciaT;
    } catch (QString &erro) {throw QString(erro);}
}


MarcaControle::~MarcaControle()
{
    delete persistencia;
}

void MarcaControle::incluirMarca(Marca objeto)const
{
    try
    {
        this->validaNome(objeto.getDescricao());


        this->persistencia->incluirMarca(objeto);
    } catch (QString &erro) {throw QString(erro);}
}

void MarcaControle::alterarMarca(Marca &marca)const
{
    try
    {
        this->validaNome(marca.getDescricao());
        this->persistencia->alterarMarca(marca);

    } catch (QString &erro) {throw QString(erro);}
}


void MarcaControle::excluirMarca(int id) const
{

}


void MarcaControle::validaNome(const QString &nome) const
{
    if(nome.isEmpty()) throw QString("001 - Nome vazio");
}

/*
Marca* MarcaControle::(QString ID)const
{
    try{
        return  this->persistencia->
        return this->persistencia->buscarMarca(ID);
    }catch(QString &erro){ throw QString(erro); }

}
*/
/*
std::queue<Usuario> *UsuarioControle::listar()
{
    try
    {
        return this->persistencia->listar();
    } catch (QString &erro) { throw QString(erro); }
}
*/
