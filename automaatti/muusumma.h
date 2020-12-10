#ifndef MUUSUMMA_H
#define MUUSUMMA_H

#include <QWidget>

namespace Ui {
class muusumma;
}

class muusumma : public QWidget
{
    Q_OBJECT

public:
    explicit muusumma(QWidget *parent = nullptr);
    ~muusumma();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_btnOK_clicked();

    void on_btnPalaa4_clicked();

    void on_btnPalaatakaisin_clicked();

private:
    Ui::muusumma *ui;
};

#endif // MUUSUMMA_H
