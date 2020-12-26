#ifndef TELAALTERARCLIENTEJURIDICO_H
#define TELAALTERARCLIENTEJURIDICO_H
#include <ClienteJuridico.h>
#include <ClienteJuridicoControle.h>
#include <ClienteJuridicoPersistencia.h>
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class TelaAlterarClienteJuridico;
}

class TelaAlterarClienteJuridico : public QDialog
{
    Q_OBJECT

public:
    explicit TelaAlterarClienteJuridico(QWidget *parent = nullptr);
    ~TelaAlterarClienteJuridico();

private slots:
    void on_Voltar_clicked();

    void on_Alterar_clicked();

    void on_Buscar_clicked();

private:
    Ui::TelaAlterarClienteJuridico *ui;
    ClienteJuridicoControle *controle;
};

#endif // TELAALTERARCLIENTEJURIDICO_H
