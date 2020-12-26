#ifndef VEICULOCONTROLE_H
#define VEICULOCONTROLE_H
#include <Veiculo.h>
#include <ICrudVeiculo.h>
#include <VeiculoPersistencia.h>

namespace Locadora {
    class VeiculoControle;
}
class VeiculoControle: ICrudVeiculo, Veiculo
{
private:
    VeiculoPersistencia *persistencia;
public:
    VeiculoControle();
    ~VeiculoControle();

    void incluirVeiculo(Veiculo objeto)const;
    void excluirVeiculo(QString nome)const;
    Veiculo* buscarVeiculo(QString placa)const;
    void  alterarVeiculo(Veiculo &veiculo)const;

    //void validaNome(const QString &nome) const;
    void validaPlaca(const QString &placa) const;
   // void validaEmail(const QString &email) const;

};

#endif // VEICULOCONTROLE_H
