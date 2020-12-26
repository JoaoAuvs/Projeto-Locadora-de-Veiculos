#ifndef LOCACAO_H
#define LOCACAO_H
#include <QString>
#include <QStringList>
#include <QDate>
namespace Locadora {class Locacao;}

class Locacao
{

private:
   int idLocacao;
   QDate dataLocacao;//deve ser isso
   QDate dataDevolucao;
   QString quilometragemInicial;
   QString quilometragemFinal;
   float valorCaucao;
   float valorSeguro;
   float valorTotal;
   int idVeiculo;
   int idCliente;
   int idMotorista;
   int idCategoria;

   int situacao;//Se o veiculo esta locado, não locado ou vendido


public:
    Locacao();
    Locacao(
    QDate dataLocacao,
    QDate dataDevolucao,
    QString quilometragemInicial,
    QString quilometragemFinal,
    float valorCaucao,
    float valorSeguro,
    float valorTotal,
    int idVeiculo,
    int idCliente,
    int idMotorista,
    int idCategoria,
    int situacao);

    int getSituacao(){return this->situacao;}
    void setSitucao(int situacao){this->situacao=situacao;}

    int getId(){return this-> idLocacao;}
    void setId(int id){this->idLocacao = id;}

    int getIDVeiculo(){return this->idVeiculo;}
    void setIDVeiculo(int IDVeiculo){this->idVeiculo = IDVeiculo;}

    int getIDCLiente(){return  this->idCliente;};
    void setIDCLiente(int idCliente){this->idCliente=idCliente;}

    int getIDMotorista(){return  this->idMotorista;}
    void setIdMotorista(int IdMotorista){this->idMotorista=IdMotorista;}

    int getIDCategoria(){return  this->idCategoria;}
    void setIDCategoria(int IdCategoria){this->idCategoria=IdCategoria;}

    QDate getDataLocacao(){return this->dataLocacao;}
    void setDataLocacao(QDate dataLocacao){this->dataLocacao=dataLocacao;}

    QDate getDataDevolucao(){return this->dataDevolucao;}
    void setDatadevolucao(QDate dataDevolucao){this->dataDevolucao=dataDevolucao;}

    QString getQuilInicial(){return this->quilometragemInicial;}
    void setQuiInicial(QString quilometragemInicial){this->quilometragemInicial=quilometragemInicial;}

    QString getQuiFinal(){return  this->quilometragemFinal;}
    void setQuiFinal(QString quilometragemFinal){this->quilometragemFinal=quilometragemFinal;}


    float getValorCaucao(){return  this->valorCaucao;}
    void setValorCaucao(float valorCaucao){this->valorCaucao=valorCaucao;}

    float getValorSeguro(){return  this->valorSeguro;}
    void setValorSeguro(float valorSeguro){this->valorSeguro=valorSeguro;}

    float getValorTotal(){return this->valorTotal;}
    void setValorTotal(float valorTotal){this->valorTotal=valorTotal;}

    /*bool getSituacao(){return this->situacao;}
    void setSituacao(bool situacao){this->situacao=situacao;}

    QString getCPF(){return this->cpf;}
    void setCPF(QString cpf){this->cpf=cpf;}

    QString getPlaca(){return this->placa;}
    void setPlaca(QString placa){this->placa=placa;}
    */

};

#endif // LOCACAO_H
