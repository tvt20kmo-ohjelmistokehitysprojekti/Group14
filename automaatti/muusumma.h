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

private:
    Ui::muusumma *ui;
};

#endif // MUUSUMMA_H
