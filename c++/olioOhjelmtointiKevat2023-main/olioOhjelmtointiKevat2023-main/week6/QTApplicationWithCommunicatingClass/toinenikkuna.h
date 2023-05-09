#ifndef TOINENIKKUNA_H
#define TOINENIKKUNA_H

#include <QDialog>

namespace Ui {
class ToinenIkkuna;
}

class ToinenIkkuna : public QDialog
{
    Q_OBJECT

public:
    explicit ToinenIkkuna(QWidget *parent = nullptr);
    ~ToinenIkkuna();

private:
    Ui::ToinenIkkuna *ui;
};

#endif // TOINENIKKUNA_H
