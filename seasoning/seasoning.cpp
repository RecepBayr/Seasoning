#include "seasoning.h"
#include "ui_seasoning.h"
#include <QTimer>
#include <QDateTime>
#include <QDebug>
#include <QMessageBox>
#include <QProcess>
#include <QPixmap>



seasoning::seasoning(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::seasoning)

{
    ui->setupUi(this);

    QPixmap background(":/image/leidosseaso.png");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, background);
    this->setPalette(palette);
    timer = new QTimer(this);
    timer2 = new QTimer(this);
    timer2->start(10);
    timer3 = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(fire()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(manualselect()));
    connect(timer3, SIGNAL(timeout()), this, SLOT(kalansure()));
    ui->comboBox->addItem("Select");
    ui->comboBox->addItem("50kV-2mA");
    ui->comboBox->addItem("70kV-2mA");
    ui->comboBox->addItem("90kV-2mA");
    ui->comboBox->addItem("90kV-4mA");
    ui->comboBox->addItem("90kV-6mA");
    ui->comboBox->addItem("90kV-8mA");
    ui->comboBox->addItem("90kV-10mA");
    ui->comboBox->addItem("90kV-6mA");
    ui->comboBox->addItem("105kV-6mA");
    ui->comboBox->addItem("105kV-8mA");
    ui->comboBox->addItem("105kV-10mA");
    ui->comboBox->addItem("105kV-8mA");
    ui->comboBox->addItem("120kV-8mA");
    ui->comboBox->addItem("120kV-10mA");
    ui->comboBox->addItem("120kV-8mA");
    ui->comboBox->addItem("135kV-8mA");
    ui->comboBox->addItem("135kV-10mA");
    ui->comboBox->addItem("135kV-8mA");
    ui->comboBox->addItem("150kV-8mA");
    ui->comboBox->addItem("150kV-6mA");
    ui->comboBox->addItem("165kV-6mA");
    ui->comboBox->addItem("165kV-8mA");
    ui->comboBox->addItem("165kV-6mA");
    ui->comboBox->addItem("180kV-6mA");
    ui->comboBox->addItem("180kV-8mA");
    ui->step1->setStyleSheet("background-color:skyblue");
    ui->step2->setStyleSheet("background-color:skyblue");
    ui->step3->setStyleSheet("background-color:skyblue");
    ui->step4->setStyleSheet("background-color:skyblue");
    ui->step5->setStyleSheet("background-color:skyblue");
    ui->step6->setStyleSheet("background-color:skyblue");
    ui->step7->setStyleSheet("background-color:skyblue");
    ui->step8->setStyleSheet("background-color:skyblue");
    ui->step9->setStyleSheet("background-color:skyblue");
    ui->step10->setStyleSheet("background-color:skyblue");
    ui->step11->setStyleSheet("background-color:skyblue");
    ui->step12->setStyleSheet("background-color:skyblue");
    ui->step13->setStyleSheet("background-color:skyblue");
    ui->step14->setStyleSheet("background-color:skyblue");
    ui->step15->setStyleSheet("background-color:skyblue");
    ui->step16->setStyleSheet("background-color:skyblue");
    ui->step17->setStyleSheet("background-color:skyblue");
    ui->step18->setStyleSheet("background-color:skyblue");
    ui->step19->setStyleSheet("background-color:skyblue");
    ui->step20->setStyleSheet("background-color:skyblue");
    ui->step21->setStyleSheet("background-color:skyblue");
    ui->step22->setStyleSheet("background-color:skyblue");
    ui->step23->setStyleSheet("background-color:skyblue");
    ui->step24->setStyleSheet("background-color:skyblue");
    ui->step25->setStyleSheet("background-color:skyblue");
            qDebug() << "setupui";
            ui->Stop->setEnabled(false);

}

seasoning::~seasoning()
{
    delete ui;
}

void seasoning::fire()
{
        time = time.addSecs(-1);
        time2 = time.toString("hh:mm:ss");
        ui->label->setText(time2);
        if(time2=="00:00:00")   {system("beep -f 400 -l 75");
    }
        remaining = remaining.addSecs(-1);
        remaining1 = remaining.toString("hh:mm:ss");
        ui->label_4->setText(remaining1);
//qDebug() <<  "fire";
}

void seasoning::manualselect()
{
    if(ui->checkBox->checkState())   {
        ui->comboBox->setEnabled(true);
    }
    else    {
        ui->comboBox->setEnabled(false);
    }
    qDebug() << "manualselect";
}

void seasoning::on_start_clicked()
{
    ui->start->setEnabled(false);
    ui->Stop->setEnabled(true);
    ui->label_3->setText("Current value");
    timer->start(1000);
    timer3->start(1000);
    remaining.setHMS(2,20,0);
    time.setHMS(0,12,0);
    ui->checkBox->setEnabled(false);


    a = ui->comboBox->currentIndex();

    if(ui->checkBox->checkState())   {

    if(a==0)    {
        timer->stop();
        QMessageBox::warning(this, "Warning","Please select value.");
        ui->label_3->setText(" ");
        ui->label->setText("00:00:00");
        connect(timer2, SIGNAL(timeout()), this, SLOT(manualselect()));
        ui->start->setEnabled(true);
        ui->checkBox->setEnabled(true);
        ui->Stop->setEnabled(false);
    }
    else
    {
        disconnect(timer2, SIGNAL(timeout()), this, SLOT(manualselect()));
        ui->checkBox->setEnabled(false);
        ui->comboBox->setEnabled(false);
        ui->start->setEnabled(false);

    }
    if(a==1)    {
        time.setHMS(0,12,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station()));
        ui->label_2->setText("During 12 minutes 50kV-2mA");
        ui->step1->setStyleSheet("background-color:gold");
        remaining.setHMS(2,20,0);
    }
    if(a==2)    {
        time.setHMS(0,4,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station1()));
        ui->label_2->setText("During 4 minutes 70kV-2mA");
        ui->step2->setStyleSheet("background-color:gold");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        remaining.setHMS(2,8,0);
    }
    if(a==3)    {
        time.setHMS(0,2,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station2()));
        ui->label_2->setText("During 2 minutes 90kV-2mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:gold");
        remaining.setHMS(2,4,0);
    }
    if(a==4)    {
        time.setHMS(0,3,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station3()));
        ui->label_2->setText("During 3 minutes 90kV-4mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:gold");
        remaining.setHMS(2,2,0);
    }
    if(a==5)    {
        time.setHMS(0,4,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station4()));
        ui->label_2->setText("During 4 minutes 90kV-6mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:gold");
        remaining.setHMS(1,59,0);
    }

    if(a==6)    {
        time.setHMS(0,5,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station5()));
        ui->label_2->setText("During 5 minutes 90kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:gold");
        remaining.setHMS(1,55,0);
    }
    if(a==7)    {
        time.setHMS(0,10,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station6()));
        ui->label_2->setText("During 10 minutes 90kV-10mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:gold");
        remaining.setHMS(1,50,0);
    }
    if(a==8)    {
        time.setHMS(0,2,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station7()));
        ui->label_2->setText("During 2 minutes 90kV-6mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:gold");
        remaining.setHMS(1,40,0);
    }
    if(a==9)    {
        time.setHMS(0,3,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station8()));
        ui->label_2->setText("During 3 minutes 105kV-6mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:gold");
        remaining.setHMS(1,38,0);
    }
    if(a==10)    {
        time.setHMS(0,5,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station9()));
        ui->label_2->setText("During 5 minutes 105kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:gold");
        remaining.setHMS(1,35,0);
    }
    if(a==11)    {
        time.setHMS(0,12,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station10()));
        ui->label_2->setText("During 12 minutes 105kV-10mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:gold");
        remaining.setHMS(1,30,0);
    }
    if(a==12)    {
        time.setHMS(0,2,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station11()));
        ui->label_2->setText("During 2 minutes 105kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:gold");
        remaining.setHMS(1,18,0);
    }
    if(a==13)    {
        time.setHMS(0,3,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station12()));
        ui->label_2->setText("During 3 minutes 120kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:gold");
        remaining.setHMS(1,16,0);
    }
    if(a==14)    {
        time.setHMS(0,12,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station13()));
        ui->label_2->setText("During 12 minutes 120kV-10mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:gold");
        remaining.setHMS(1,13,0);
    }
    if(a==15)    {
        time.setHMS(0,2,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station14()));
        ui->label_2->setText("During 2 minutes 120kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:gold");
        remaining.setHMS(1,1,0);
    }
    if(a==16)    {
        time.setHMS(0,3,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station15()));
        ui->label_2->setText("During 3 minutes 135kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:gold");
        remaining.setHMS(0,59,0);
    }
    if(a==17)    {
        time.setHMS(0,12,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station16()));
        ui->label_2->setText("During 12 minutes 135kV-10mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:gold");
        remaining.setHMS(0,56,0);

    }
    if(a==18)    {
        time.setHMS(0,2,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station17()));
        ui->label_2->setText("During 2 minutes 135kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:gold");
        remaining.setHMS(0,44,0);
    }
    if(a==19)    {
        time.setHMS(0,10,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station18()));
        ui->label_2->setText("During 10 minutes 150kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step19->setStyleSheet("background-color:gold");
        remaining.setHMS(0,42,0);
    }
    if(a==20)    {
        time.setHMS(0,2,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station19()));
        ui->label_2->setText("During 2 minutes 150kV-6mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step19->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step20->setStyleSheet("background-color:gold");
        remaining.setHMS(0,32,0);
    }
    if(a==21)    {
        time.setHMS(0,3,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station20()));
        ui->label_2->setText("During 3 minutes 165kV-6mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step19->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step20->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step21->setStyleSheet("background-color:gold");
        remaining.setHMS(0,30,0);
    }
    if(a==22)    {
        time.setHMS(0,10,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station21()));
        ui->label_2->setText("During 10 minutes 165kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step19->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step20->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step21->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step22->setStyleSheet("background-color:gold");
        remaining.setHMS(0,27,0);
    }
    if(a==23)    {
        time.setHMS(0,2,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station22()));
        ui->label_2->setText("During 2 minutes 165kV-6mA");
        ui->label_2->setText("During 10 minutes 165kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step19->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step20->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step21->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step22->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step23->setStyleSheet("background-color:gold");
        remaining.setHMS(0,17,0);
    }
    if(a==24)    {
        time.setHMS(0,5,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station23()));
        ui->label_2->setText("During 5 minutes 180kV-6mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step19->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step20->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step21->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step22->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step23->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step24->setStyleSheet("background-color:gold");
        remaining.setHMS(0,15,0);
    }
    if(a==25)    {
        time.setHMS(0,10,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station24()));
        ui->label_2->setText("During 10 minutes 180kV-8mA");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step19->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step20->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step21->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step22->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step23->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step24->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step25->setStyleSheet("background-color:gold");
        remaining.setHMS(0,10,0);
    }
}

     else        {
          connect(timer, SIGNAL(timeout()), this, SLOT(station()));
          ui->label_2->setText("During 12 minutes 50kV-2mA");
          ui->step1->setStyleSheet("background-color:gold");
          disconnect(timer2, SIGNAL(timeout()), this, SLOT(manualselect()));
     }

qDebug() << "start";
}

void seasoning::on_Stop_toggled(bool checked)
{
    if(checked==true)
    {
        ui->Stop->setText("Resume");
        timer->stop();
    }
    else
    {
        ui->Stop->setText("Pause");
        timer->start(1000);
    }
}

void seasoning::on_reset_clicked()
{
    qApp->quit();
    QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
}

void seasoning::station()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station()));
        QMessageBox::information(this, "Set Value", "Please set the value to 70kV-2mA.");
        timer->start();
        time.setHMS(0,4,0);
        connect(timer, SIGNAL(timeout()), this, SLOT(station1()));
        ui->label_2->setText("During 4 minutes 70kV-2mA.");
        ui->step1->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step2->setStyleSheet("background-color:gold");
        }
        qDebug() << "station";
}


void seasoning::station1()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station1()));
        QMessageBox::information(this, "Set Value", "Please set the value to 90kV-2mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station2()));
        time.setHMS(0,2,0);
        ui->label_2->setText("During 2 minutes 90kV-2mA");
        ui->step2->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step3->setStyleSheet("background-color:gold");
        }
        qDebug() << "1";
}

void seasoning::station2()
{
    if(time2=="00:00:00")   {

       disconnect(timer, SIGNAL(timeout()), this, SLOT(station2()));
       QMessageBox::information(this, "Set Value", "Please set the value to 90kV-4mA.");
       timer->start();
       connect(timer, SIGNAL(timeout()), this, SLOT(station3()));
       time.setHMS(0,3,0);
       ui->label_2->setText("During 3 minutes 90kV-4mA");
       ui->step3->setStyleSheet("background-color:rgb(10,214,0)");
       ui->step4->setStyleSheet("background-color:gold");
       }
           qDebug() << "2";
}

void seasoning::station3()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station3()));
        QMessageBox::information(this, "Set Value", "Please set the value to 90kV-6mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station4()));
        time.setHMS(0,4,0);
        ui->label_2->setText("During 4 minutes 90kV-6mA");
        ui->step4->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step5->setStyleSheet("background-color:gold");
        }
        qDebug() << "3";
}

void seasoning::station4()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station4()));
        QMessageBox::information(this, "Set Value", "Please set the value to 90kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station5()));
        time.setHMS(0,5,0);
        ui->label_2->setText("During 5 minutes 90kV-8mA");
        ui->step5->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step6->setStyleSheet("background-color:gold");
        }
        qDebug() << "4";
}

void seasoning::station5()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station5()));
        QMessageBox::information(this, "Set Value", "Please set the value to 90kV-10mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station6()));
        time.setHMS(0,10,0);
        ui->label_2->setText("During 10 minutes 90kV-10mA");
        ui->step6->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step7->setStyleSheet("background-color:gold");
        }
        qDebug() << "5";
}

void seasoning::station6()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station6()));
        QMessageBox::information(this, "Set Value", "Please set the value to 90kV-6mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station7()));
        time.setHMS(0,2,0);
        ui->label_2->setText("During 2 minutes 90kV-6mA");
        ui->step7->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step8->setStyleSheet("background-color:gold");
        }
        qDebug() << "6";
}

void seasoning::station7()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station7()));
        QMessageBox::information(this, "Set Value", "Please set the value to 105kV-6mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station8()));
        time.setHMS(0,3,0);
        ui->label_2->setText("During 3 minutes 105kV-6mA");
        ui->step9->setStyleSheet("background-color:gold");
        ui->step8->setStyleSheet("background-color:rgb(10,214,0)");
        }
        qDebug() << "7";
}

void seasoning::station8()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station8()));
        QMessageBox::information(this, "Set Value", "Please set the value to 105kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station9()));
        time.setHMS(0,5,0);
        ui->label_2->setText("During 5 minutes 105kV-8mA");
        ui->step9->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step10->setStyleSheet("background-color:gold");
        }
        qDebug() << "8";
}

void seasoning::station9()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station9()));
        QMessageBox::information(this, "Set Value", "Please set the value to 105kV-10mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station10()));
        time.setHMS(0,12,0);
        ui->label_2->setText("During 12 minutes 105kV-10mA");
        ui->step10->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step11->setStyleSheet("background-color:gold");
        }
        qDebug() << "9";
}

void seasoning::station10()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station10()));
        QMessageBox::information(this, "Set Value", "Please set the value to 105kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station11()));
        time.setHMS(0,2,0);
        ui->label_2->setText("During 2 minutes 105kV-8mA");
        ui->step11->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step12->setStyleSheet("background-color:gold");
        }
        qDebug() << "10";
}

void seasoning::station11()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station11()));
        QMessageBox::information(this, "Set Value", "Please set the value to 120kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station12()));
        time.setHMS(0,3,0);
        ui->label_2->setText("During 3 minutes 120kV-8mA");
        ui->step12->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step13->setStyleSheet("background-color:gold");
        }
        qDebug() << "11";
}

void seasoning::station12()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station12()));
        QMessageBox::information(this, "Set Value", "Please set the value to 120kV-10mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station13()));
        time.setHMS(0,12,0);
        ui->label_2->setText("During 12 minutes 120kV-10mA");
        ui->step13->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step14->setStyleSheet("background-color:gold");
        }
        qDebug() << "12";
}

void seasoning::station13()
{

    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station13()));
        QMessageBox::information(this, "Set Value", "Please set the value to 120kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station14()));
        time.setHMS(0,2,0);
        ui->label_2->setText("During 2 minutes 120kV-8mA");
        ui->step14->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step15->setStyleSheet("background-color:gold");
        }
        qDebug() << "13";
}

void seasoning::station14()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station14()));
        QMessageBox::information(this, "Set Value", "Please set the value to 135kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station15()));
        time.setHMS(0,3,0);
        ui->label_2->setText("During 3 minutes 135kV-8mA");
        ui->step15->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step16->setStyleSheet("background-color:gold");
        }
        qDebug() << "14";
}

void seasoning::station15()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station15()));
        QMessageBox::information(this, "Set Value", "Please set the value to 135kV-10mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station16()));
        time.setHMS(0,12,0);
        ui->label_2->setText("During 12 minutes 135kV-10mA");
        ui->step16->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step17->setStyleSheet("background-color:gold");
        }
        qDebug() << "15";
}

void seasoning::station16()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station16()));
        QMessageBox::information(this, "Set Value", "Please set the value to 135kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station17()));
        time.setHMS(0,2,0);
        ui->label_2->setText("During 2 minutes 135kV-8mA");
        ui->step17->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step18->setStyleSheet("background-color:gold");
        }
        qDebug() << "16";
}

void seasoning::station17()
{

    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station17()));
        QMessageBox::information(this, "Set Value", "Please set the value to 150kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station18()));
        time.setHMS(0,10,0);
        ui->label_2->setText("During 10 minutes 150kV-8mA");
        ui->step18->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step19->setStyleSheet("background-color:gold");
        }
        qDebug() << "17";
}

void seasoning::station18()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station18()));
        QMessageBox::information(this, "Set Value", "Please set the value to 150kV-6mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station19()));
        time.setHMS(0,2,0);
        ui->label_2->setText("During 2 minutes 150kV-6mA");
        ui->step19->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step20->setStyleSheet("background-color:gold");
        }
        qDebug() << "18";
}

void seasoning::station19()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station19()));
        QMessageBox::information(this, "Set Value", "Please set the value to 165kV-6mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station20()));
        time.setHMS(0,3,0);
        ui->label_2->setText("During 3 minutes 165kV-6mA");
        ui->step20->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step21->setStyleSheet("background-color:gold");
        }
        qDebug() << "19";
}

void seasoning::station20()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station20()));
        QMessageBox::information(this, "Set Value", "Please set the value to 165kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station21()));
        time.setHMS(0,10,0);
        ui->label_2->setText("During 10 minutes 165kV-8mA");
        ui->step21->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step22->setStyleSheet("background-color:gold");
        }
        qDebug() << "20";
}

void seasoning::station21()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station21()));
        QMessageBox::information(this, "Set Value", "Please set the value to 165kV-6mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station22()));
        time.setHMS(0,2,0);
        ui->label_2->setText("During 2 minutes 165kV-6mA");
        ui->step22->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step23->setStyleSheet("background-color:gold");
        }
        qDebug() << "21";
}

void seasoning::station22()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station22()));
        QMessageBox::information(this, "Set Value", "Please set the value to 180kV-6mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station23()));
        time.setHMS(0,5,0);
        ui->label_2->setText("During 5 minutes 180kV-6mA");
        ui->step23->setStyleSheet("background-color:rgb(10,214,0)");
        ui->step24->setStyleSheet("background-color:gold");
        }
        qDebug() << "22";
}

void seasoning::station23()
{
    if(time2=="00:00:00")   {

        disconnect(timer, SIGNAL(timeout()), this, SLOT(station23()));
        QMessageBox::information(this, "Set Value", "Please set the value to 180kV-8mA.");
        timer->start();
        connect(timer, SIGNAL(timeout()), this, SLOT(station24()));
        time.setHMS(0,10,0);
        ui->label_2->setText("During 10 minutes 180kV-8mA");
        ui->step24->setStyleSheet("background-color:rgb(10,214,0)");
        }
        qDebug() << " 23";
}

void seasoning::station24()
{
    if(time2=="00:00:00")    {
        disconnect(timer, SIGNAL(timeout()), this, SLOT(station24()));
        connect(timer, SIGNAL(timeout()), this, SLOT(station25()));

    }
    ui->step25->setStyleSheet("background-color:gold");
    qDebug() << "24";
    }

void seasoning::station25()
{
    QMessageBox::information(this, "Seasoning", "Seasoning completed.");
   qApp->quit();
   //QProcess::startDetached(qApp->arguments()[0], qApp->arguments());
   qDebug() << "25";
}








