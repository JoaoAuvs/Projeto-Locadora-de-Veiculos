#ifndef TELACLIENTEALTERAR_H
#define TELACLIENTEALTERAR_H

#include <QDialog>

namespace Ui {class TelaClienteAlterar;}

class TelaClienteAlterar : public QDialog
{
    Q_OBJECT

public:
    explicit TelaClienteAlterar(QWidget *parent = nullptr);
    ~TelaClienteAlterar();

private slots:
    void on_Voltar_clicked();

    void on_Incluir_clicked();

private:
    Ui::TelaClienteAlterar *ui;
};

#endif // TELACLIENTEALTERAR_H
