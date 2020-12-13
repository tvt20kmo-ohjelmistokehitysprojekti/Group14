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

    QString getIdkortti_saldo() const;
    void setIdkortti_saldo(const QString &value);

private slots:
    void on_btnPalaa1_clicked();

    void on_showSaldo_clicked();

private:
    Ui::saldo *ui;
    QString idkortti_saldo;
};

#endif // SALDO_H
