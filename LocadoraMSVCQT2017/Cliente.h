#ifndef CLIENTE_H
#define CLIENTE_H
#include <QString>
#include <QStringList>

namespace Locadora {class Cliente;}

class Cliente
{
private:
    int ID;
    QString CPFCliente;
    QString nomeCliente;
    QString RGCliente;
    QString telefoneCliente;
    QString emailCliente;
public:
    Cliente();
    Cliente(QString CPFCliente,QString nomeCliente,
            QString RGCliente, QString telefoneCliente,QString emailCliente);

    QString getCPFCliente()const{return CPFCliente;}
    QString getNomeCliente()const{return nomeCliente;}
    QString getRGCliente()const{return RGCliente;}
    QString getTelefoneCliente()const{return telefoneCliente;}
    QString getEmailCliente()const{return emailCliente;}
    int getID()const{return ID;}

    void setCPFCliente(QString CPFCliente){this->CPFCliente=CPFCliente;}
    void setNomeCliente(QString nomeCliente){this->nomeCliente=nomeCliente;}
    void setRGCliente(QString RGCliente){this->RGCliente=RGCliente;}
    void setTelefoneCliente(QString telefoneCliente){this->telefoneCliente=telefoneCliente;}
    void setEmailCliente(QString emailCliente){this->emailCliente=emailCliente;}
    void setID(int ID){this->ID = ID;}
};
#endif // CLIENTE_H
