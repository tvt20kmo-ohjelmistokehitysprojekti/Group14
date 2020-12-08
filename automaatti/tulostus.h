#ifndef TULOSTUS_H
#define TULOSTUS_H

#include <QWidget>

namespace Ui {
class tulostus;
}

class tulostus : public QWidget
{
    Q_OBJECT

public:
    explicit tulostus(QWidget *parent = nullptr);
    ~tulostus();

private:
    Ui::tulostus *ui;
};

#endif // TULOSTUS_H
