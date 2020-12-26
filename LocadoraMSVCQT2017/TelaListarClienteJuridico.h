#ifndef TELALISTARCLIENTEJURIDICO_H
#define TELALISTARCLIENTEJURIDICO_H
#include <QMessageBox>
#include <QtSql>
#include <iostream>
#include <QString>
#include <TelaInicioCliente.h>
#include <TelaPrincipal.h>
#include <QTableWidget>
#include <iostream>
#include <QDialog>
#include "ClienteJuridicoControle.h"

namespace Ui {
class TelaListarClienteJuridico;
}

class TelaListarClienteJuridico : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListarClienteJuridico(QWidget *parent = nullptr);
    ~TelaListarClienteJuridico();

private slots:
    void on_pushButton_Voltar_clicked();

    void on_tblClienteJuridico_cellClicked(int row, int column);

    void atualizaTabela();

    void on_pushButton_Alterar_clicked();

    //void on_pushButtonAlterar_clicked();

  //  void on_pushButtonAlterar_clicked();




    void on_pushButtonAlterar_clicked();

private:
    Ui::TelaListarClienteJuridico *ui;
    ClienteJuridicoControle *controle;
};

#endif // TELALISTARCLIENTEJURIDICO_H
