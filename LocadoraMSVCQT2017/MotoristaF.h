#ifndef MOTORISTAF_H
#define MOTORISTAF_H
#include <QString>
#include <QStringList>
#include <QDate>
namespace Locadora {class MotoristaF;}


class MotoristaF
{
private:
    int ID;
    QString CPFMotorista;
    QString nomeMotorista;
    QString RGMotorista;
    QString telefoneMotorista;
    QString emailMotorista;
    QString numeroCNH;
    int categoria;
    QDate dataDeValidade;
    int idClienteF;
public:
    MotoristaF();

    MotoristaF(QString CPFMotorista,
    QString nomeMotorista,
    QString RGMotorista,
    QString telefoneMotorista,
    QString emailMotorista,
    QDate dataDeValidade,
    QString numeroCNH,
    int  categoria,
    int idClienteF
    );

    int getId()const{return ID;}

    QString getCPFMotorista()const{return CPFMotorista;}
    QString getNomeMotorista()const{return nomeMotorista;}
    QString getRGMotorista()const{return RGMotorista;}
    QString getTelefoneMotorista()const{return telefoneMotorista;}
    QString getEmailMotorista()const{return emailMotorista;}
    QString getNumeroCNH()const{return numeroCNH;}
    int getCategoria()const{return categoria;}
    QDate getDataDeValidade()const{return dataDeValidade;}
    int getIdClienteF()const{return idClienteF;}

    // FOTO CNH FALTA ADICIONAR //

    void setCPFMotorista(QString CPFMotorista){this->CPFMotorista=CPFMotorista;}
    void setNomeMotorista(QString nomeMotorista){this->nomeMotorista=nomeMotorista;}
    void setRGMotorista(QString RGMotorista){this->RGMotorista=RGMotorista;}
    void setTelefoneMotorista(QString telefoneMotorista){this->telefoneMotorista=telefoneMotorista;}
    void setEmailMotorista(QString emailMotorista){this->emailMotorista=emailMotorista;}
    void setNumeroCNH(QString numeroCNH){this->numeroCNH=numeroCNH;}
    void setCategoria(int categoria){this->categoria=categoria;}
    void setDataDeValidade(QDate dataDeValidade){this->dataDeValidade=dataDeValidade;}
    void setIdClienteF(int idClienteF){this->idClienteF = idClienteF;}
    void setId(int ID){this->ID = ID;}


};

#endif // MOTORISTAF_H





