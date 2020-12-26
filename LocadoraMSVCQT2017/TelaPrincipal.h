#ifndef TELAPRINCIPAL_H
#define TELAPRINCIPAL_H

#include <QMessageBox>
#include <QDialog>
#include "TelaDeLogin.h"
#include "TelaInicioCliente.h"
#include "TelaInicioMarca.h"
#include "TelaInicioModelo.h"
#include "TelaInicioVeiculo.h"
#include "TelaInicioLocacao.h"
#include "TelaClienteAlterar.h"
#include "TelaInicioClienteJuridico.h"

namespace Ui {class TelaPrincipal;}

class TelaPrincipal : public QDialog
{
    Q_OBJECT

public:
    explicit TelaPrincipal(QWidget *parent = nullptr);
    ~TelaPrincipal();

private slots:


    void on_Cliente_clicked();

    void on_Veiculos_clicked();

    void on_Marca_clicked();

    void on_Modelo_clicked();

    void on_Locacao_clicked();

    void on_Voltar_clicked();

    void on_ClienteJuridico_clicked();


    void on_Veiculos_2_clicked();

private:
    Ui::TelaPrincipal *ui;
};

#endif // TELAPRINCIPAL_H
