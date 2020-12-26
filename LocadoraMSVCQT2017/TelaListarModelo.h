#ifndef TELALISTARMODELO_H
#define TELALISTARMODELO_H
#include <QMessageBox>
#include <QtSql>
#include <iostream>
#include <QString>
#include <TelaInicioModelo.h>
#include <TelaPrincipal.h>
#include <QTableWidget>
#include <iostream>
#include <QDialog>

namespace Ui {
class TelaListarModelo;
}

class TelaListarModelo : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListarModelo(QWidget *parent = nullptr);
    ~TelaListarModelo();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_tblModelo_cellClicked(int row, int column);

    void on_pushButton_Alterar_clicked();

    void atualizaTabela();

private:
    Ui::TelaListarModelo *ui;
    ModeloControle *controle;

};

#endif // TELALISTARMODELO_H
