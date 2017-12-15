#ifndef PROPOSERCOURS_H
#define PROPOSERCOURS_H

#include <QDialog>

namespace Ui {
class proposerCours;
}

class proposerCours : public QDialog
{
    Q_OBJECT

public:
    explicit proposerCours(QWidget *parent = 0);
    ~proposerCours();

private slots:
    void on_pushButton_clicked();

private:
    Ui::proposerCours *ui;
};

#endif // PROPOSERCOURS_H
