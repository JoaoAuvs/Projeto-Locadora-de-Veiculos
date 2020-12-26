#ifndef CLIENTEJURIDICO_H
#define CLIENTEJURIDICO_H
#include <QString>
#include <QStringList>

namespace Locadora {
class ClienteJuridico;
}
class ClienteJuridico
{
private:
    int ID;
    QString CNPJCliente;
    QString nomeClienteJuridico;
    QString nomeFantasia;
    QString razaoSocial;
    QString telefoneClienteJuridico;
    QString emailClienteJuridico;

public:
    ClienteJuridico();
    ClienteJuridico(QString CNPJCliente,QString nomeClienteJuridico,
                    QString nomeFantasia,QString razaoSocial,
                    QString telefoneClienteJuridico,QString emailClienteJuridico);



    QString getCNPJClienteJuridico()const{return CNPJCliente;}
    QString getNomeClienteJuridico()const{return nomeClienteJuridico;}
    QString getNomeFantasia()const{return nomeFantasia;}
    QString getRazaoSocial()const{return razaoSocial;}
    QString getTelefoneClienteJuridico()const{return telefoneClienteJuridico;}
    QString getEmailClienteJuridico()const{return emailClienteJuridico;}
    int getID()const{return ID;}

    void setCNPJCliente(QString CNPJCliente){this->CNPJCliente=CNPJCliente;}
    void setNomeClienteJuridico(QString nomeClienteJuridico){this->nomeClienteJuridico=nomeClienteJuridico;}
    void setNomeFantasia(QString nomeFantasia){this->nomeFantasia=nomeFantasia;}
    void setRazaoSocial(QString razaoSocial){this->razaoSocial=razaoSocial;}

    void setTelefoneClienteJuridico(QString telefoneClienteJuridico){this->telefoneClienteJuridico=
                telefoneClienteJuridico;}
    void setEmailClienteJuridico(QString emailClienteJuridico){this->emailClienteJuridico=
                emailClienteJuridico;}
    void setID(int ID){this->ID = ID;}
};

#endif // CLIENTEJURIDICO_H

