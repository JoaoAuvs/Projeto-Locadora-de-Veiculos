#ifndef TELAINICIOMOTORISTAJ_H
#define TELAINICIOMOTORISTAJ_H
#include "MotoristaJuridicoControle.h"
#include <QDialog>

namespace Ui {
class TelaInicioMotoristaJ;
}

class TelaInicioMotoristaJ : public QDialog
{
    Q_OBJECT

public:
    explicit TelaInicioMotoristaJ(QWidget *parent = nullptr);
    ~TelaInicioMotoristaJ();

private slots:
    void on_Incluir_clicked();

    void on_Listar_clicked();



private:
    Ui::TelaInicioMotoristaJ *ui;
    MotoristaJuridicoControle *controle;
};

#endif // TELAINICIOMOTORISTAJ_H
