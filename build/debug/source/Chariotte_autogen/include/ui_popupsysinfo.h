/********************************************************************************
** Form generated from reading UI file 'popupsysinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPSYSINFO_H
#define UI_POPUPSYSINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_popupSysInfo
{
public:
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    QTextBrowser *tbSysinfo;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer;
    QPushButton *bOK;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *popupSysInfo)
    {
        if (popupSysInfo->objectName().isEmpty())
            popupSysInfo->setObjectName(QString::fromUtf8("popupSysInfo"));
        popupSysInfo->resize(400, 300);
        gridLayout = new QGridLayout(popupSysInfo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(popupSysInfo);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 378, 238));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tbSysinfo = new QTextBrowser(scrollAreaWidgetContents);
        tbSysinfo->setObjectName(QString::fromUtf8("tbSysinfo"));

        gridLayout_3->addWidget(tbSysinfo, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lcdNumber = new QLCDNumber(popupSysInfo);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        horizontalLayout->addWidget(lcdNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        bOK = new QPushButton(popupSysInfo);
        bOK->setObjectName(QString::fromUtf8("bOK"));

        horizontalLayout->addWidget(bOK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(popupSysInfo);

        QMetaObject::connectSlotsByName(popupSysInfo);
    } // setupUi

    void retranslateUi(QDialog *popupSysInfo)
    {
        popupSysInfo->setWindowTitle(QCoreApplication::translate("popupSysInfo", "Dialog", nullptr));
        bOK->setText(QCoreApplication::translate("popupSysInfo", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popupSysInfo: public Ui_popupSysInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPSYSINFO_H
