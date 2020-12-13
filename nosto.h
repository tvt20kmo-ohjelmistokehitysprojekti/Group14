#ifndef NOSTO_H
#define NOSTO_H

#include <QWidget>

namespace Ui {
class nosto;
}

class nosto : public QWidget
{
    Q_OBJECT

public:
    explicit nosto(QWidget *parent = nullptr);
    ~nosto();

    QString getIdkortti_nosto() const;
    void setIdkortti_nosto(const QString &value);

private slots:
    void on_btn20_clicked();

    void on_btn40_clicked();

    void on_btn50_clicked();

    void on_btn100_clicked();

    void on_btnmuusumma_clicked();

    void on_btnPalaa_clicked();

private:
    Ui::nosto *ui;
    QString idkortti_nosto;
};

#endif // NOSTO_H
