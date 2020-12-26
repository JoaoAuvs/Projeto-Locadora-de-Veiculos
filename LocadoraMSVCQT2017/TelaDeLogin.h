#ifndef TELADELOGIN_H
#define TELADELOGIN_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include "TelaPrincipal.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TelaDeLogin; }
QT_END_NAMESPACE

class TelaDeLogin : public QMainWindow
{
    Q_OBJECT

public:
    TelaDeLogin(QWidget *parent = nullptr);
    ~TelaDeLogin();

private slots:
    void on_login_clicked();

private:
    Ui::TelaDeLogin *ui;
};
#endif // TELADELOGIN_H
