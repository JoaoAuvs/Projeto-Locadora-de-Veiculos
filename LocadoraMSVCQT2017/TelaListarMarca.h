#ifndef TELALISTARMARCA_H
#define TELALISTARMARCA_H
#include <QMessageBox>
#include <QtSql>
#include <iostream>
#include <QString>
#include <TelaInicioMarca.h>
#include <TelaPrincipal.h>
#include <QTableWidget>
#include <iostream>
#include <QDialog>

namespace Ui {
class TelaListarMarca;
}

class TelaListarMarca : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListarMarca(QWidget *parent = nullptr);
    ~TelaListarMarca();

private slots:
    void on_pushButtonVoltar_clicked();

    void on_tblMarca_cellClicked(int row, int column);

    void on_pushButton_Alterar_clicked();

    void atualizaTabela();

private:
    Ui::TelaListarMarca *ui;
    MarcaControle *controle;
};

#endif // TELALISTARMARCA_H
