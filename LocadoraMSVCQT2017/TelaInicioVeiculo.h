#ifndef TELAINICIOVEICULO_H
#define TELAINICIOVEICULO_H
#include "Veiculo.h"
#include "VeiculoControle.h"
#include "VeiculoPersistencia.h"

#include <QDialog>

namespace Ui {class TelaInicioVeiculo;}

class TelaInicioVeiculo : public QDialog
{
    Q_OBJECT

public:
    explicit TelaInicioVeiculo(QWidget *parent = nullptr);
    ~TelaInicioVeiculo();

private slots:
    void on_voltar_clicked();

    void on_pushButtonIncluir_clicked();

    void on_pushButton_Listar_clicked();

    void on_pushButton_Alterar_clicked();

    void preencherComboMarca();

    void preencherComboModelo(int codigoMarca);

    void preencherComboCategoria();

    void preencherComboCombustivel();

    void preencherComboSituacao();

    void on_comboBox_Marca_currentIndexChanged(int index);

private:
    Ui::TelaInicioVeiculo *ui;
    VeiculoControle *controle;
    int idModelo;
    int idCategoria;
    int idSituacao;
};

#endif // TELAINICIOVEICULO_H
