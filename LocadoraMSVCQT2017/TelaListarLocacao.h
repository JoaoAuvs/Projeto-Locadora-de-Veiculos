#ifndef TELALISTARLOCACAO_H
#define TELALISTARLOCACAO_H
#include <QMessageBox>
#include <QtSql>
#include <iostream>
#include <QString>
#include <TelaInicioLocacao.h>
#include <TelaPrincipal.h>
#include <QTableWidget>
#include <iostream>
#include <QDialog>

namespace Ui {
class TelaListarLocacao;
}

class TelaListarLocacao : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListarLocacao(QWidget *parent = nullptr);
    ~TelaListarLocacao();

private slots:
    void on_pushButton_Voltar_clicked();

    void on_tblLocacao_cellClicked(int row, int column);

    void on_pushButton_Alterar_clicked();

    void atualizarTabela();

private:
    Ui::TelaListarLocacao *ui;
    //LocacaoControle *controleD;
};

#endif // TELALISTARLOCACAO_H
