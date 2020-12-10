#ifndef SALDO_H
#define SALDO_H

#include <QWidget>

namespace Ui {
class saldo;
}

class saldo : public QWidget
{
    Q_OBJECT

public:
    explicit saldo(QWidget *parent = nullptr);
    ~saldo();

private slots:
    void on_btnPalaa1_clicked();

private:
    Ui::saldo *ui;
};

#endif // SALDO_H
