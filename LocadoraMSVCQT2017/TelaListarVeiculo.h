#ifndef TELALISTARVEICULO_H
#define TELALISTARVEICULO_H
#include <QMessageBox>
#include <QtSql>
#include <iostream>
#include <QString>
#include <TelaInicioCliente.h>
#include <TelaPrincipal.h>
#include <QTableWidget>
#include <iostream>
#include <QDialog>

namespace Ui {
class TelaListarVeiculo;
}

class TelaListarVeiculo : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListarVeiculo(QWidget *parent = nullptr);
    ~TelaListarVeiculo();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_tblVeiculo_cellClicked(int row, int column);

private:
    Ui::TelaListarVeiculo *ui;
};

#endif // TELALISTARVEICULO_H
