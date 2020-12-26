QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Cliente.cpp \
    ClienteControle.cpp \
    ClienteJuridico.cpp \
    ClienteJuridicoControle.cpp \
    ClienteJuridicoPersistencia.cpp \
    ClientePersistencia.cpp \
    Locacao.cpp \
    LocacaoControle.cpp \
    LocacaoPersistencia.cpp \
    Marca.cpp \
    MarcaControle.cpp \
    MarcaPersistenciaT.cpp \
    Modelo.cpp \
    ModeloControle.cpp \
    ModeloPersistencia.cpp \
    Motorista.cpp \
    MotoristaControle.cpp \
    MotoristaF.cpp \
    MotoristaJuridico.cpp \
    MotoristaJuridicoControle.cpp \
    MotoristaJuridicoPersistencia.cpp \
    MotoristaPersistencia.cpp \
    TelaAlterarClienteJuridico.cpp \
    TelaClienteAlterar.cpp \
    TelaInicioCliente.cpp \
    TelaInicioClienteJuridico.cpp \
    TelaInicioLocacao.cpp \
    TelaInicioMarca.cpp \
    TelaInicioModelo.cpp \
    TelaInicioMotorista.cpp \
    TelaInicioMotoristaJ.cpp \
    TelaInicioVeiculo.cpp \
    TelaListarClienteFisico.cpp \
    TelaListarClienteJuridico.cpp \
    TelaListarLocacao.cpp \
    TelaListarMarca.cpp \
    TelaListarModelo.cpp \
    TelaListarMotorista.cpp \
    TelaListarMotoristaJ.cpp \
    TelaListarVeiculo.cpp \
    TelaPrincipal.cpp \
    Veiculo.cpp \
    VeiculoControle.cpp \
    VeiculoPersistencia.cpp \
    main.cpp \
    TelaDeLogin.cpp \
    motorista.cpp

HEADERS += \
    Cliente.h \
    ClienteControle.h \
    ClienteJuridico.h \
    ClienteJuridicoControle.h \
    ClienteJuridicoPersistencia.h \
    ClientePersistencia.h \
    ICrudCliente.h \
    ICrudMarca.h \
    ICrudModelo.h \
    ICrudMotorista.h \
    ICrudVeiculo.h \
    ICrudeClienteJuridico.h \
    ICrudeLocacao.h \
    IcrudMotoristaJ.h \
    Locacao.h \
    LocacaoControle.h \
    LocacaoPersistencia.h \
    Marca.h \
    MarcaControle.h \
    MarcaPersistenciaT.h \
    Modelo.h \
    ModeloControle.h \
    ModeloPersistencia.h \
    Motorista.h \
    MotoristaControle.h \
    MotoristaF.h \
    MotoristaJuridico.h \
    MotoristaJuridicoControle.h \
    MotoristaJuridicoPersistencia.h \
    MotoristaPersistencia.h \
    TelaAlterarClienteJuridico.h \
    TelaClienteAlterar.h \
    TelaDeLogin.h \
    TelaInicioCliente.h \
    TelaInicioClienteJuridico.h \
    TelaInicioLocacao.h \
    TelaInicioMarca.h \
    TelaInicioModelo.h \
    TelaInicioMotorista.h \
    TelaInicioMotoristaJ.h \
    TelaInicioVeiculo.h \
    TelaListarClienteFisico.h \
    TelaListarClienteJuridico.h \
    TelaListarLocacao.h \
    TelaListarMarca.h \
    TelaListarModelo.h \
    TelaListarMotorista.h \
    TelaListarMotoristaJ.h \
    TelaListarVeiculo.h \
    TelaPrincipal.h \
    Veiculo.h \
    VeiculoControle.h \
    VeiculoPersistencia.h \
    motorista.h

FORMS += \
    TelaAlterarClienteJuridico.ui \
    TelaClienteAlterar.ui \
    TelaDeLogin.ui \
    TelaInicioCliente.ui \
    TelaInicioClienteJuridico.ui \
    TelaInicioMarca.ui \
    TelaInicioModelo.ui \
    TelaInicioMotorista.ui \
    TelaInicioMotoristaJ.ui \
    TelaInicioVeiculo.ui \
    TelaListarClienteFisico.ui \
    TelaListarClienteJuridico.ui \
    TelaListarLocacao.ui \
    TelaListarMarca.ui \
    TelaListarModelo.ui \
    TelaListarMotorista.ui \
    TelaListarMotoristaJ.ui \
    TelaListarVeiculo.ui \
    TelaPrincipal.ui \
    telainiciolocacao.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
