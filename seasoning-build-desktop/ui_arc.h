/********************************************************************************
** Form generated from reading UI file 'arc.ui'
**
** Created: Sat Nov 13 11:52:48 2021
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARC_H
#define UI_ARC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Arc
{
public:

    void setupUi(QDialog *Arc)
    {
        if (Arc->objectName().isEmpty())
            Arc->setObjectName(QString::fromUtf8("Arc"));
        Arc->resize(400, 300);

        retranslateUi(Arc);

        QMetaObject::connectSlotsByName(Arc);
    } // setupUi

    void retranslateUi(QDialog *Arc)
    {
        Arc->setWindowTitle(QApplication::translate("Arc", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Arc: public Ui_Arc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARC_H
