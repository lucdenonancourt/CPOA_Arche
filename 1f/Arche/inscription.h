#ifndef INSCRIPTION_H
#define INSCRIPTION_H

#include <QDialog>

namespace Ui {
class Inscription;
}

class Inscription : public QDialog
{
    Q_OBJECT

public:
    explicit Inscription(QWidget *parent = 0);
    ~Inscription();

private slots:
    void on_buttonBox_accepted();




private:
    Ui::Inscription *ui;
};

#endif // INSCRIPTION_H
