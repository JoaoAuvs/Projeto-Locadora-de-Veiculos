#ifndef TELAINICIOCLIENTEJURIDICO_H
#define TELAINICIOCLIENTEJURIDICO_H
#include "ClienteJuridicoControle.h"
#include "ClienteJuridico.h"
#include "ClienteJuridicoPersistencia.h"
#include <QDialog>

namespace Ui {
class TelaInicioClienteJuridico;
}

class TelaInicioClienteJuridico : public QDialog
{
    Q_OBJECT

public:
    explicit TelaInicioClienteJuridico(QWidget *parent = nullptr);
    ~TelaInicioClienteJuridico();

private slots:
    void on_Incluir_clicked();

    void on_Voltar_clicked();

    void on_Listar_clicked();

private:
    Ui::TelaInicioClienteJuridico *ui;

    ClienteJuridicoControle *controle;
};

#endif // TELAINICIOCLIENTEJURIDICO_H
