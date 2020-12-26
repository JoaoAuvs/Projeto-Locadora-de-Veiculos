#ifndef TELAINICIOMARCA_H
#define TELAINICIOMARCA_H
#include <Marca.h>
#include <MarcaControle.h>
#include <MarcaPersistenciaT.h>
#include <QDialog>

namespace Ui {class TelaInicioMarca;}

class TelaInicioMarca : public QDialog
{
    Q_OBJECT

public:
    explicit TelaInicioMarca(QWidget *parent = nullptr);
    ~TelaInicioMarca();

private slots:
    void on_Voltar_clicked();

    void on_pushButton_Incluir_clicked();

    void on_pushButton_Listar_clicked();



private:
    Ui::TelaInicioMarca *ui;
    MarcaControle *controle;
};

#endif // TELAINICIOMARCA_H
