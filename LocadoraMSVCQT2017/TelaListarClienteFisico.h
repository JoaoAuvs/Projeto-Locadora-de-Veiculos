#ifndef TELALISTARCLIENTEFISICO_H
#define TELALISTARCLIENTEFISICO_H
#include <QtSql>
#include <QMessageBox>
#include <QDialog>
#include <ClienteControle.h>

namespace Ui {
class TelaListarClienteFisico;
}

class TelaListarClienteFisico : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListarClienteFisico(QWidget *parent = nullptr);
    ~TelaListarClienteFisico();

private slots:
    void on_Voltar_clicked();

    void on_pushButton_Excluir_clicked();

    void on_pushButton_Alterar_clicked();

    void on_pushButton_BuscarClienteFisico_clicked();   

    void on_tblClienteFisico_activated(const QModelIndex &index);

    void on_tblClienteFisico_clicked(const QModelIndex &index);

    void on_tblClienteFisico_cellClicked(int row, int column);

    void atualizaTabela();

private:
    Ui::TelaListarClienteFisico *ui;
    ClienteControle *controle;
};

#endif // TELALISTARCLIENTEFISICO_H
