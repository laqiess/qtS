/********************************************************************************
** Form generated from reading UI file 'slot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLOT_H
#define UI_SLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Slot
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonGreen;
    QPushButton *pushButtonRed;
    QPushButton *pushButtonBlue;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Slot)
    {
        if (Slot->objectName().isEmpty())
            Slot->setObjectName(QString::fromUtf8("Slot"));
        Slot->resize(647, 425);
        centralwidget = new QWidget(Slot);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonGreen = new QPushButton(centralwidget);
        pushButtonGreen->setObjectName(QString::fromUtf8("pushButtonGreen"));
        pushButtonGreen->setGeometry(QRect(110, 130, 93, 28));
        pushButtonRed = new QPushButton(centralwidget);
        pushButtonRed->setObjectName(QString::fromUtf8("pushButtonRed"));
        pushButtonRed->setGeometry(QRect(110, 170, 93, 28));
        pushButtonBlue = new QPushButton(centralwidget);
        pushButtonBlue->setObjectName(QString::fromUtf8("pushButtonBlue"));
        pushButtonBlue->setGeometry(QRect(110, 210, 93, 28));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(280, 150, 271, 71));
        Slot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Slot);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 647, 26));
        Slot->setMenuBar(menubar);
        statusbar = new QStatusBar(Slot);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Slot->setStatusBar(statusbar);

        retranslateUi(Slot);

        QMetaObject::connectSlotsByName(Slot);
    } // setupUi

    void retranslateUi(QMainWindow *Slot)
    {
        Slot->setWindowTitle(QApplication::translate("Slot", "Slot", nullptr));
        pushButtonGreen->setText(QApplication::translate("Slot", "\321\206\320\262\320\265\321\202 1", nullptr));
        pushButtonRed->setText(QApplication::translate("Slot", "\321\206\320\262\320\265\321\202 2", nullptr));
        pushButtonBlue->setText(QApplication::translate("Slot", "\321\206\320\262\320\265\321\202 3", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Slot: public Ui_Slot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLOT_H
