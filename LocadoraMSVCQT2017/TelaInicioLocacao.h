#ifndef TELAINICIOLOCACAO_H
#define TELAINICIOLOCACAO_H
#include  "Cliente.h"
#include "ClienteControle.h"
#include "ClientePersistencia.h"
#include "ClienteJuridico.h"
#include "ClienteJuridicoControle.h"
#include "ClienteJuridicoPersistencia.h"
#include "TelaListarLocacao.h"
#include "Locacao.h"
#include "LocacaoControle.h"
#include "LocacaoPersistencia.h"
#include "Veiculo.h"
#include "VeiculoControle.h"
#include "VeiculoPersistencia.h"
#include "Motorista.h"
#include "MotoristaControle.h"
#include "MotoristaPersistencia.h"
#include "Marca.h"
#include "MarcaControle.h"
#include "MarcaPersistenciaT.h"
#include "Modelo.h"
#include "ModeloControle.h"
#include "ModeloPersistencia.h"  //acho que foi todos

#include <QDialog>

namespace Ui {class TelaInicioLocacao;}

class TelaInicioLocacao : public QDialog
{
    Q_OBJECT

public:
    explicit TelaInicioLocacao(QWidget *parent = nullptr);
    ~TelaInicioLocacao();

private slots:
    void on_Voltar_clicked();

    void on_Motorista_clicked();

    void on_pushButton_clicked();

    void on_cbmCliente_currentIndexChanged(int index);

    void preencherComboClientes();

    void preencherComboMotorista();

    void preencherComboVeiculo();

    void preencherComboCategoria();



    void on_cbmVeiculo_currentIndexChanged(int index);

    void on_cbmMotorista_currentIndexChanged(int index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_cbmCategoria_currentIndexChanged(int index);

    void on_pushButton_CadastrarMF_clicked();

private:
    Ui::TelaInicioLocacao *ui;
    LocacaoControle *controle;
};

#endif // TELAINICIOLOCACAO_H
