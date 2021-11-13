/********************************************************************************
** Form generated from reading UI file 'seasoning.ui'
**
** Created: Sat Nov 13 12:03:55 2021
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEASONING_H
#define UI_SEASONING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_seasoning
{
public:
    QWidget *centralWidget;
    QPushButton *start;
    QPushButton *Stop;
    QFrame *frame;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QCheckBox *checkBox;
    QLabel *step1;
    QLabel *step2;
    QLabel *step3;
    QLabel *step4;
    QLabel *step5;
    QLabel *step6;
    QLabel *step7;
    QLabel *step8;
    QLabel *step9;
    QLabel *step10;
    QLabel *step11;
    QLabel *step12;
    QLabel *step13;
    QLabel *step23;
    QLabel *step15;
    QLabel *step19;
    QLabel *step22;
    QLabel *step17;
    QLabel *step21;
    QLabel *step14;
    QLabel *step20;
    QLabel *step24;
    QLabel *step18;
    QLabel *step16;
    QLabel *step25;
    QFrame *frame_2;
    QFrame *frame_3;
    QFrame *frame_4;
    QFrame *frame_5;
    QFrame *frame_6;
    QFrame *frame_7;
    QFrame *frame_8;
    QFrame *frame_10;
    QFrame *frame_12;
    QFrame *frame_14;
    QFrame *frame_15;
    QFrame *frame_16;
    QFrame *frame_17;
    QFrame *frame_18;
    QFrame *frame_19;
    QFrame *frame_21;
    QFrame *frame_22;
    QFrame *frame_23;
    QFrame *frame_25;
    QFrame *frame_26;
    QFrame *frame_27;
    QFrame *frame_28;
    QFrame *frame_30;
    QFrame *frame_32;
    QFrame *frame_34;
    QPushButton *reset;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *seasoning)
    {
        if (seasoning->objectName().isEmpty())
            seasoning->setObjectName(QString::fromUtf8("seasoning"));
        seasoning->resize(526, 359);
        seasoning->setMinimumSize(QSize(526, 359));
        seasoning->setMaximumSize(QSize(526, 359));
        QFont font;
        font.setPointSize(11);
        seasoning->setFont(font);
        seasoning->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(seasoning);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        start = new QPushButton(centralWidget);
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(30, 110, 80, 26));
        Stop = new QPushButton(centralWidget);
        Stop->setObjectName(QString::fromUtf8("Stop"));
        Stop->setGeometry(QRect(210, 110, 80, 26));
        Stop->setCheckable(true);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 10, 221, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 0, 181, 91));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(90, 150, 141, 25));
        comboBox->setEditable(false);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 230, 281, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        label_2->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 210, 131, 21));
        QFont font3;
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(50, 140, 21, 41));
        checkBox->setLayoutDirection(Qt::LeftToRight);
        checkBox->setChecked(false);
        step1 = new QLabel(centralWidget);
        step1->setObjectName(QString::fromUtf8("step1"));
        step1->setGeometry(QRect(350, 30, 61, 21));
        step2 = new QLabel(centralWidget);
        step2->setObjectName(QString::fromUtf8("step2"));
        step2->setGeometry(QRect(350, 50, 61, 21));
        step3 = new QLabel(centralWidget);
        step3->setObjectName(QString::fromUtf8("step3"));
        step3->setGeometry(QRect(350, 70, 61, 21));
        step4 = new QLabel(centralWidget);
        step4->setObjectName(QString::fromUtf8("step4"));
        step4->setGeometry(QRect(350, 90, 61, 21));
        step5 = new QLabel(centralWidget);
        step5->setObjectName(QString::fromUtf8("step5"));
        step5->setGeometry(QRect(350, 110, 61, 21));
        step6 = new QLabel(centralWidget);
        step6->setObjectName(QString::fromUtf8("step6"));
        step6->setGeometry(QRect(350, 130, 61, 21));
        step7 = new QLabel(centralWidget);
        step7->setObjectName(QString::fromUtf8("step7"));
        step7->setGeometry(QRect(350, 150, 61, 21));
        step8 = new QLabel(centralWidget);
        step8->setObjectName(QString::fromUtf8("step8"));
        step8->setGeometry(QRect(350, 170, 61, 21));
        step9 = new QLabel(centralWidget);
        step9->setObjectName(QString::fromUtf8("step9"));
        step9->setGeometry(QRect(350, 190, 61, 21));
        step10 = new QLabel(centralWidget);
        step10->setObjectName(QString::fromUtf8("step10"));
        step10->setGeometry(QRect(350, 210, 61, 21));
        step11 = new QLabel(centralWidget);
        step11->setObjectName(QString::fromUtf8("step11"));
        step11->setGeometry(QRect(350, 230, 61, 21));
        step12 = new QLabel(centralWidget);
        step12->setObjectName(QString::fromUtf8("step12"));
        step12->setGeometry(QRect(350, 250, 61, 21));
        step13 = new QLabel(centralWidget);
        step13->setObjectName(QString::fromUtf8("step13"));
        step13->setGeometry(QRect(350, 270, 61, 21));
        step23 = new QLabel(centralWidget);
        step23->setObjectName(QString::fromUtf8("step23"));
        step23->setGeometry(QRect(440, 210, 61, 21));
        step15 = new QLabel(centralWidget);
        step15->setObjectName(QString::fromUtf8("step15"));
        step15->setGeometry(QRect(440, 50, 61, 21));
        step19 = new QLabel(centralWidget);
        step19->setObjectName(QString::fromUtf8("step19"));
        step19->setGeometry(QRect(440, 130, 61, 21));
        step22 = new QLabel(centralWidget);
        step22->setObjectName(QString::fromUtf8("step22"));
        step22->setGeometry(QRect(440, 190, 61, 21));
        step17 = new QLabel(centralWidget);
        step17->setObjectName(QString::fromUtf8("step17"));
        step17->setGeometry(QRect(440, 90, 61, 21));
        step21 = new QLabel(centralWidget);
        step21->setObjectName(QString::fromUtf8("step21"));
        step21->setGeometry(QRect(440, 170, 61, 21));
        step14 = new QLabel(centralWidget);
        step14->setObjectName(QString::fromUtf8("step14"));
        step14->setGeometry(QRect(440, 30, 61, 21));
        step20 = new QLabel(centralWidget);
        step20->setObjectName(QString::fromUtf8("step20"));
        step20->setGeometry(QRect(440, 150, 61, 21));
        step24 = new QLabel(centralWidget);
        step24->setObjectName(QString::fromUtf8("step24"));
        step24->setGeometry(QRect(440, 230, 61, 21));
        step18 = new QLabel(centralWidget);
        step18->setObjectName(QString::fromUtf8("step18"));
        step18->setGeometry(QRect(440, 110, 61, 21));
        step16 = new QLabel(centralWidget);
        step16->setObjectName(QString::fromUtf8("step16"));
        step16->setGeometry(QRect(440, 70, 61, 21));
        step25 = new QLabel(centralWidget);
        step25->setObjectName(QString::fromUtf8("step25"));
        step25->setGeometry(QRect(440, 250, 61, 21));
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(350, 30, 61, 21));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(centralWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(350, 50, 61, 21));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(350, 70, 61, 21));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(350, 90, 61, 21));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_6 = new QFrame(centralWidget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(350, 110, 61, 21));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(centralWidget);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(350, 210, 61, 21));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(centralWidget);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(350, 190, 61, 21));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_10 = new QFrame(centralWidget);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(350, 130, 61, 21));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        frame_12 = new QFrame(centralWidget);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(350, 170, 61, 21));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        frame_14 = new QFrame(centralWidget);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setGeometry(QRect(350, 150, 61, 21));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        frame_15 = new QFrame(centralWidget);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setGeometry(QRect(350, 230, 61, 21));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        frame_16 = new QFrame(centralWidget);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setGeometry(QRect(350, 250, 61, 21));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        frame_17 = new QFrame(centralWidget);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(350, 270, 61, 21));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        frame_18 = new QFrame(centralWidget);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setGeometry(QRect(440, 150, 61, 21));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        frame_19 = new QFrame(centralWidget);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(440, 230, 61, 21));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        frame_21 = new QFrame(centralWidget);
        frame_21->setObjectName(QString::fromUtf8("frame_21"));
        frame_21->setGeometry(QRect(440, 110, 61, 21));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        frame_22 = new QFrame(centralWidget);
        frame_22->setObjectName(QString::fromUtf8("frame_22"));
        frame_22->setGeometry(QRect(440, 90, 61, 21));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        frame_23 = new QFrame(centralWidget);
        frame_23->setObjectName(QString::fromUtf8("frame_23"));
        frame_23->setGeometry(QRect(440, 30, 61, 21));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        frame_25 = new QFrame(centralWidget);
        frame_25->setObjectName(QString::fromUtf8("frame_25"));
        frame_25->setGeometry(QRect(440, 70, 61, 21));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        frame_26 = new QFrame(centralWidget);
        frame_26->setObjectName(QString::fromUtf8("frame_26"));
        frame_26->setGeometry(QRect(440, 250, 61, 21));
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);
        frame_27 = new QFrame(centralWidget);
        frame_27->setObjectName(QString::fromUtf8("frame_27"));
        frame_27->setGeometry(QRect(440, 50, 61, 21));
        frame_27->setFrameShape(QFrame::StyledPanel);
        frame_27->setFrameShadow(QFrame::Raised);
        frame_28 = new QFrame(centralWidget);
        frame_28->setObjectName(QString::fromUtf8("frame_28"));
        frame_28->setGeometry(QRect(440, 170, 61, 21));
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);
        frame_30 = new QFrame(centralWidget);
        frame_30->setObjectName(QString::fromUtf8("frame_30"));
        frame_30->setGeometry(QRect(440, 130, 61, 21));
        frame_30->setFrameShape(QFrame::StyledPanel);
        frame_30->setFrameShadow(QFrame::Raised);
        frame_32 = new QFrame(centralWidget);
        frame_32->setObjectName(QString::fromUtf8("frame_32"));
        frame_32->setGeometry(QRect(440, 190, 61, 21));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);
        frame_34 = new QFrame(centralWidget);
        frame_34->setObjectName(QString::fromUtf8("frame_34"));
        frame_34->setGeometry(QRect(440, 210, 61, 21));
        frame_34->setFrameShape(QFrame::StyledPanel);
        frame_34->setFrameShadow(QFrame::Raised);
        reset = new QPushButton(centralWidget);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setGeometry(QRect(120, 110, 80, 26));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 280, 121, 41));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        label_4->setFont(font4);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 280, 251, 41));
        QFont font5;
        font5.setBold(true);
        font5.setWeight(75);
        label_5->setFont(font5);
        label_5->setWordWrap(true);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(450, 300, 71, 16));
        QFont font6;
        font6.setPointSize(5);
        font6.setItalic(true);
        label_6->setFont(font6);
        seasoning->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(seasoning);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 526, 26));
        seasoning->setMenuBar(menuBar);
        mainToolBar = new QToolBar(seasoning);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        seasoning->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(seasoning);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        seasoning->setStatusBar(statusBar);

        retranslateUi(seasoning);

        QMetaObject::connectSlotsByName(seasoning);
    } // setupUi

    void retranslateUi(QMainWindow *seasoning)
    {
        seasoning->setWindowTitle(QApplication::translate("seasoning", "seasoning", 0, QApplication::UnicodeUTF8));
        start->setText(QApplication::translate("seasoning", "Start", 0, QApplication::UnicodeUTF8));
        Stop->setText(QApplication::translate("seasoning", "Pause", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("seasoning", "00:00:00", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
        checkBox->setText(QString());
        step1->setText(QApplication::translate("seasoning", " 50-2", 0, QApplication::UnicodeUTF8));
        step2->setText(QApplication::translate("seasoning", " 70-2", 0, QApplication::UnicodeUTF8));
        step3->setText(QApplication::translate("seasoning", " 90-2", 0, QApplication::UnicodeUTF8));
        step4->setText(QApplication::translate("seasoning", " 90-4", 0, QApplication::UnicodeUTF8));
        step5->setText(QApplication::translate("seasoning", " 90-6", 0, QApplication::UnicodeUTF8));
        step6->setText(QApplication::translate("seasoning", " 90-8", 0, QApplication::UnicodeUTF8));
        step7->setText(QApplication::translate("seasoning", " 90-10", 0, QApplication::UnicodeUTF8));
        step8->setText(QApplication::translate("seasoning", " 90-6", 0, QApplication::UnicodeUTF8));
        step9->setText(QApplication::translate("seasoning", " 105-6", 0, QApplication::UnicodeUTF8));
        step10->setText(QApplication::translate("seasoning", " 105-8", 0, QApplication::UnicodeUTF8));
        step11->setText(QApplication::translate("seasoning", " 105-10", 0, QApplication::UnicodeUTF8));
        step12->setText(QApplication::translate("seasoning", " 105-8", 0, QApplication::UnicodeUTF8));
        step13->setText(QApplication::translate("seasoning", " 120-8", 0, QApplication::UnicodeUTF8));
        step23->setText(QApplication::translate("seasoning", " 165-6", 0, QApplication::UnicodeUTF8));
        step15->setText(QApplication::translate("seasoning", " 120-8", 0, QApplication::UnicodeUTF8));
        step19->setText(QApplication::translate("seasoning", " 150-8", 0, QApplication::UnicodeUTF8));
        step22->setText(QApplication::translate("seasoning", " 165-8", 0, QApplication::UnicodeUTF8));
        step17->setText(QApplication::translate("seasoning", " 135-10", 0, QApplication::UnicodeUTF8));
        step21->setText(QApplication::translate("seasoning", " 165-6", 0, QApplication::UnicodeUTF8));
        step14->setText(QApplication::translate("seasoning", " 120-10", 0, QApplication::UnicodeUTF8));
        step20->setText(QApplication::translate("seasoning", " 150-6", 0, QApplication::UnicodeUTF8));
        step24->setText(QApplication::translate("seasoning", " 180-6", 0, QApplication::UnicodeUTF8));
        step18->setText(QApplication::translate("seasoning", " 135-8", 0, QApplication::UnicodeUTF8));
        step16->setText(QApplication::translate("seasoning", " 135-8", 0, QApplication::UnicodeUTF8));
        step25->setText(QApplication::translate("seasoning", " 180-8", 0, QApplication::UnicodeUTF8));
        reset->setText(QApplication::translate("seasoning", "Reset", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("seasoning", "Total Remaining Time:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("seasoning", "recepbayram", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class seasoning: public Ui_seasoning {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEASONING_H
