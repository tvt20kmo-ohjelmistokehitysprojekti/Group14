#ifndef TAPAHTUMAT_H
#define TAPAHTUMAT_H

#include <QWidget>

namespace Ui {
class tapahtumat;
}

class tapahtumat : public QWidget
{
    Q_OBJECT

public:
    explicit tapahtumat(QWidget *parent = nullptr);
    ~tapahtumat();

private:
    Ui::tapahtumat *ui;
};

#endif // TAPAHTUMAT_H
