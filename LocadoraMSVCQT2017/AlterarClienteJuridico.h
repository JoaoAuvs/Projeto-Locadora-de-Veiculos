#ifndef ALTERARCLIENTEJURIDICOPERSISTENCIA_H
#define ALTERARCLIENTEJURIDICOPERSISTENCIA_H

#include <QDialog>

namespace Ui {
class AlterarClienteJuridicoPersistencia;
}

class AlterarClienteJuridicoPersistencia : public QDialog
{
    Q_OBJECT

public:
    explicit AlterarClienteJuridicoPersistencia(QWidget *parent = nullptr);
    ~AlterarClienteJuridicoPersistencia();

private:
    Ui::AlterarClienteJuridicoPersistencia *ui;
};

#endif // ALTERARCLIENTEJURIDICOPERSISTENCIA_H
