#ifndef TELALISTARMOTORISTA_H
#define TELALISTARMOTORISTA_H
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
class TelaListarMotorista;
}

class TelaListarMotorista : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListarMotorista(QWidget *parent = nullptr);
    ~TelaListarMotorista();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_tblMotorista_cellClicked(int row, int column);

    void atualizaTabela();

    void on_pushButton_Alterar_clicked();

private:
    Ui::TelaListarMotorista *ui;
    MotoristaControle *controle;
};

#endif // TELALISTARMOTORISTA_H
