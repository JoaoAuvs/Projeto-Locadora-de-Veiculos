#ifndef TELAINICIOMOTORISTA_H
#define TELAINICIOMOTORISTA_H
#include "MotoristaF.h"
#include "MotoristaControle.h"
#include "MotoristaPersistencia.h"
#include <QDialog>
#include "QMessageBox"

namespace Ui {
class TelaInicioMotorista;
}

class TelaInicioMotorista : public QDialog
{
    Q_OBJECT

public:
    explicit TelaInicioMotorista(QWidget *parent = nullptr);
    ~TelaInicioMotorista();

private slots:
    void on_Voltar_clicked();

    void on_Incluir_clicked();

    void on_Listar_clicked();

    void preencherComboCategoria();

    void preencherComboCliente();


    void on_comboBox_Cliente_currentIndexChanged(int index);

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::TelaInicioMotorista *ui;

    MotoristaControle *controle;
};

#endif // TELAINICIOMOTORISTA_H
