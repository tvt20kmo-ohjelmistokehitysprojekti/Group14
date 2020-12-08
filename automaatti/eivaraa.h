#ifndef EIVARAA_H
#define EIVARAA_H

#include <QWidget>

namespace Ui {
class eivaraa;
}

class eivaraa : public QWidget
{
    Q_OBJECT

public:
    explicit eivaraa(QWidget *parent = nullptr);
    ~eivaraa();

private:
    Ui::eivaraa *ui;
};

#endif // EIVARAA_H
