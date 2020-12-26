#ifndef MOTORISTAJURIDICO_H
#define MOTORISTAJURIDICO_H
#include <QString>
#include <QStringList>
#include <QDate>


class MotoristaJuridico
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
   // MotoristaJuridico();

    MotoristaJuridico():CPFMotorista(""),nomeMotorista(""),RGMotorista(""),telefoneMotorista(""),
                           emailMotorista(""),numeroCNH(""),categoria(""),dataDeValidade(),
                           idClienteF(0),
                                            idClienteJ(0){}
    MotoristaJuridico(QString CPFMotorista,QString nomeMotorista,QString RGMotorista,QString telefoneMotorista,
                         QString emailMotorista,QString numeroCNH,QString categoria,QDate dataDeValidade,
              int idClienteF, int idClienteJ):
        CPFMotorista(CPFMotorista),
        nomeMotorista(nomeMotorista),
        RGMotorista(RGMotorista),
        telefoneMotorista(telefoneMotorista),
        emailMotorista(emailMotorista),
        numeroCNH(numeroCNH),
        categoria(categoria),
        dataDeValidade(dataDeValidade),
        idClienteF(idClienteF),
        idClienteJ(idClienteJ)

        // FALTA FOTO //
    {}

    QString getCPFMotorista()const{return CPFMotorista;}
    QString getNomeMotorista()const{return nomeMotorista;}
    QString getRGMotorista()const{return RGMotorista;}
    QString getTelefoneMotorista()const{return telefoneMotorista;}
    QString getEmailMotorista()const{return emailMotorista;}
    QString getNumeroCNH()const{return numeroCNH;}
    QString getCategoria()const{return categoria;}
    QDate getDataDeValidade()const{return dataDeValidade;}
    int getIdClienteF()const{return idClienteF;}
    int getIdClienteJ()const{return  idClienteJ;}
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
    void setIdClienteJ(int idCLienteJ){this->idClienteJ = idCLienteJ;}
    // FOTO CNH FALTA ADICIONAR //
};

#endif // MOTORISTAJURIDICO_H


