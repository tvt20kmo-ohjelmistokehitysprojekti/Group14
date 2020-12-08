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

private:
    Ui::saldo *ui;
};

#endif // SALDO_H
