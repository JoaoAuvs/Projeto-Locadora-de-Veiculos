#ifndef TELALISTARMOTORISTAJ_H
#define TELALISTARMOTORISTAJ_H

#include <QDialog>

namespace Ui {
class TelaListarMotoristaJ;
}

class TelaListarMotoristaJ : public QDialog
{
    Q_OBJECT

public:
    explicit TelaListarMotoristaJ(QWidget *parent = nullptr);
    ~TelaListarMotoristaJ();

private slots:
    void on_pushButton_Alterar_clicked();

private:
    Ui::TelaListarMotoristaJ *ui;
};

#endif // TELALISTARMOTORISTAJ_H
