#include "VeiculoControle.h"

VeiculoControle::VeiculoControle()
{
    try
    {
        persistencia = new VeiculoPersistencia;
    } catch (QString &erro) {throw QString(erro);}
}

VeiculoControle::~VeiculoControle()
{
    delete persistencia;
}

void VeiculoControle::incluirVeiculo(Veiculo objeto) const
{
    try
    {
        this->validaPlaca(objeto.getPlaca());

        this->persistencia->incluirVeiculo(objeto);

    } catch (QString &erro) {throw QString(erro);}
}

void VeiculoControle::alterarVeiculo(Veiculo &veiculo) const
{
   /* try
    {
        this->validaNome(cliente.getNomeCliente());
        this->validaCpf(cliente.getCPFCliente());
        this->validaEmail(cliente.getEmailCliente());
        this->persistencia->alterarCliente(cliente);
    } catch (QString &erro) {throw QString(erro);} */
}


void VeiculoControle::excluirVeiculo(QString nome) const
{

}

/*
void ClienteControle::validaNome(const QString &nome) const
{
    if(nome.isEmpty()) throw QString("001 - Nome vazio");
}
*/
void VeiculoControle::validaPlaca(const QString &placa) const
{
    if(placa.length()<7) throw QString("002 - Placa invalido");
}
/*
void ClienteControle::validaEmail(const QString &email) const
{
    if(email.split('@').length() != 2) throw QString("003 - Email invalido");
}
*/
Veiculo* VeiculoControle::buscarVeiculo(QString placa) const
{
    try{
        return this->persistencia->buscarVeiculo(placa);
    }catch(QString &erro){ throw QString(erro); }
}

/*
std::queue<Usuario> *UsuarioControle::listar()
{
    try
    {
        return this->persistencia->listar();
    } catch (QString &erro) { throw QString(erro); }
}
*/
