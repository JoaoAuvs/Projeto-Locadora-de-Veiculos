#ifndef MOTORISTA_H
#define MOTORISTA_H
#include <QString>
#include <QStringList>
#include <QDate>
namespace Locadora {class Motorista;}

class Motorista
{
private:
    QString CPFMotorista;
    QString nomeMotorista;
    QString RGMotorista;
    QString telefoneMotorista;
    QString emailMotorista;
    QString numeroCNH;
    QString categoria;
    QDate dataDeValidade;
    int idClienteF;
    int idClienteJ;
    // FOTO CNH FALTA ADICIONAR //

public:
    Motorista();
    Motorista(QString CPFMotorista,
    QString nomeMotorista,
    QString RGMotorista,
    QString telefoneMotorista,
    QString emailMotorista,
    QString numeroCNH,
    int categoria,
    QDate dataDeValidade,
    int idClienteF
    );

/*    Motorista():CPFMotorista(""),nomeMotorista(""),RGMotorista(""),telefoneMotorista(""),
                           emailMotorista(""),numeroCNH(""),categoria(""),dataDeValidade(),
                           idClienteF(0){}

    Motorista(QString CPFMotorista,QString nomeMotorista,QString RGMotorista,QString telefoneMotorista,
                         QString emailMotorista,QString numeroCNH,QString categoria,QDate dataDeValidade,
              int idClienteF):
        CPFMotorista(CPFMotorista),
        nomeMotorista(nomeMotorista),
        RGMotorista(RGMotorista),
        telefoneMotorista(telefoneMotorista),
        emailMotorista(emailMotorista),
        numeroCNH(numeroCNH),
        categoria(categoria),
        dataDeValidade(dataDeValidade),
        idClienteF(idClienteF)

        // FALTA FOTO //
    {}
*/
    QString getCPFMotorista()const{return CPFMotorista;}
    QString getNomeMotorista()const{return nomeMotorista;}
    QString getRGMotorista()const{return RGMotorista;}
    QString getTelefoneMotorista()const{return telefoneMotorista;}
    QString getEmailMotorista()const{return emailMotorista;}
    QString getNumeroCNH()const{return numeroCNH;}
    QString getCategoria()const{return categoria;}
    QDate getDataDeValidade()const{return dataDeValidade;}
    int getIdClienteF()const{return idClienteF;}

    // FOTO CNH FALTA ADICIONAR //

    void setCPFMotorista(QString CPFMotorista){this->CPFMotorista=CPFMotorista;}
    void setNomeMotorista(QString nomeMotorista){this->nomeMotorista=nomeMotorista;}
    void setRGMotorista(QString RGMotorista){this->RGMotorista=RGMotorista;}
    void setTelefoneMotorista(QString telefoneMotorista){this->telefoneMotorista=telefoneMotorista;}
    void setEmailMotorista(QString emailMotorista){this->emailMotorista=emailMotorista;}
    void setNumeroCNH(QString numeroCNH){this->numeroCNH=numeroCNH;}
    void setCategoria(QString categoria){this->categoria=categoria;}
    void setDataDeValidade(QDate dataDeValidade){this->dataDeValidade=dataDeValidade;}
    void setIdClienteF(int idClienteF){this->idClienteF = idClienteF;}

    // FOTO CNH FALTA ADICIONAR //
};
#endif // MOTORISTA_H
