#ifndef TELAINICIOCLIENTE_H
#define TELAINICIOCLIENTE_H
#include "Cliente.h"
#include "ClienteControle.h"
#include "ClientePersistencia.h"
#include <QDialog>
#include "TelaPrincipal.h"
#include "TelaListarClienteFisico.h"

namespace Ui {class TelaInicioCliente;}

class TelaInicioCliente : public QDialog
{
    Q_OBJECT

public:
    explicit TelaInicioCliente(QWidget *parent = nullptr);
    ~TelaInicioCliente();

private slots:
    void on_Voltar_clicked();

    void on_Incluir_clicked();

    void on_Alterar_clicked();

    void on_Listar_clicked();

private:
    Ui::TelaInicioCliente *ui;
   // Cliente  cliente();
    ClienteControle *controle;
};

#endif // TELAINICIOCLIENTE_H
