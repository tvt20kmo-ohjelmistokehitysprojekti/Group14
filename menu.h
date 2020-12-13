#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

    QString getIdkortti() const;
    void setIdkortti(const QString &value);

private slots:
    void on_btnNosto_clicked();

    void on_btnSaldo_clicked();

    void on_btnTapahtumat_clicked();

    void on_btnKirjauduulos_clicked();

private:
    Ui::menu *ui;
    QString idkortti;
};

#endif // MENU_H
