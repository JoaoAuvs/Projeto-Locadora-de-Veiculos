#ifndef VEICULO_H
#define VEICULO_H
#include <QString>
#include <QStringList>

namespace  Locadora {class Veiculo;}

class Veiculo
{
private:
    int IDVeiculo;
    QString placa;
    int idMarca;
    int idModelo;
    QString chassi;
    QString renavan;
    int idCategoria;
    QString precodeCompra;
    QString precodeVenda;
    QString numeroPassageiros;
    QString anoFabricacao;
    QString anoModelo;
    int IDCombustivel;
    QString quilometragem;
    QString  potencia;
    QString capacidadePortaMalas;
    QString  situacao;

public:
    Veiculo();
    Veiculo(QString placa,QString chassi,QString renavan,QString precodeCompra,QString precodeVenda,
            QString numeroPassageiros, QString anoFabricacao,QString anoModelo,QString quilometragem,
            QString potencia,QString  capacidadePortaMalas,int idMarca,
            int idModelo,int idCategoria,int IDCombustivel);

    QString getPlaca(){return this-> placa;}
    void setPlaca(QString placa){this->placa = placa;}

  /*  QString getMarca(){return this-> marca;}
    void setMarca(QString marca){this->marca = marca;}
*/
    int getIdModelo(){return this->idModelo;}
    void setIdModelo(int idModelo){this->idModelo=idModelo;}

    QString getChassi(){return this-> chassi;}
    void setChassi(QString chassi){this->chassi=chassi;}

    QString getRenavan(){return this-> renavan;}
    void setRenavan(QString renavan){this->renavan=renavan;}

    int getIdCategoria(){return this->idCategoria;}
    void setIdCategoria(int idCategoria){this->idCategoria=idCategoria;}

    QString getPrecodeCompra(){return this->precodeCompra;}
    void setPrecodeCompra(QString precodeCompra){this->precodeCompra=precodeCompra;}

    QString getPrecodeVenda(){return this->precodeVenda;}
    void setPrecodeVenda(QString precodeVenda){this->precodeVenda=precodeVenda;}

    QString getNumeroPassageiros(){return this->numeroPassageiros;}
    void setnumeroPassageiros(QString numeroPassageiros){this->numeroPassageiros=numeroPassageiros;}

    QString getAnoFabricacao(){return this->anoFabricacao;}
    void setAnoFabricacao(QString anoFabricacao){this->anoFabricacao=anoFabricacao;}

    QString getAnoModelo(){return this->anoModelo;}
    void setAnoModelo(QString anoModelo){this->anoModelo=anoModelo;}

 /*  int getIDCombustivel(){return this->IdCombustivel;}
    void setCombustivel(QString IdCombustivel){this->IdCombustivel=IdCombustivel;}
*/
    QString getQuilometragem(){return this->quilometragem;}
    void setQuilometragem(QString quilometragem){this->quilometragem=quilometragem;}

    QString getPotencia(){return this->potencia;}
    void setPotencia(QString potencia){this->potencia=potencia;}

    QString getCapacidadePortaMalas(){return this->capacidadePortaMalas;}
    void setCapacidadePortaMalas(QString capacidadePortaMalas){this->capacidadePortaMalas=capacidadePortaMalas;}

   /* int getSituacao(){return this->situacao;}
    void setSituacao(int situacao){ this->situacao=situacao;}*/
};

#endif // VEICULO_H
