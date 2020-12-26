#ifndef TELAINICIOMODELO_H
#define TELAINICIOMODELO_H
#include <Modelo.h>
#include <ModeloControle.h>
#include <ModeloPersistencia.h>
#include <QDialog>

namespace Ui {class TelaInicioModelo;}

class TelaInicioModelo : public QDialog
{
    Q_OBJECT

public:
    explicit TelaInicioModelo(QWidget *parent = nullptr);
    ~TelaInicioModelo();

private slots:
    void on_voltar_clicked();

    void on_pushButtonINCLUIR_clicked();

    void on_pushButton_LISTAR_clicked();

    void on_comboBox_Marca_currentIndexChanged(int index);

    void preencherComboMarca();

private:
    Ui::TelaInicioModelo *ui;
    ModeloControle *controle;
};

#endif // TELAINICIOMODELO_H
