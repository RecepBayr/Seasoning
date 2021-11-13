#ifndef SEASONING_H
#define SEASONING_H

#include <QMainWindow>
#include <QTimer>
#include <QDateTime>
#include <QMessageBox>



namespace Ui {
    class seasoning;
}

class seasoning : public QMainWindow
{
    Q_OBJECT

public:
    explicit seasoning(QWidget *parent = 0);
    ~seasoning();
    QTime time;
    QTime remaining;
    QString remaining1;
    QString time2;
    int a;


public slots:
void fire();
void station();
void station1();
void station2();
void station3();
void station4();
void station5();
void station6();
void station7();
void station8();
void station9();
void station10();
void station11();
void station12();
void station13();
void station14();
void station15();
void station16();
void station17();
void station18();
void station19();
void station20();
void station21();
void station22();
void station23();
void station24();
void station25();
void manualselect();


private:
    Ui::seasoning *ui;

    QTimer *timer;
    QTimer *timer2;
    QTimer *timer3;


private slots:



    void on_reset_clicked();
    void on_Stop_toggled(bool checked);
    void on_start_clicked();

};

#endif // SEASONING_H
