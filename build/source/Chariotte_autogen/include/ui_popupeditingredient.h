/********************************************************************************
** Form generated from reading UI file 'popupeditingredient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPEDITINGREDIENT_H
#define UI_POPUPEDITINGREDIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widgets/blinkablepushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_popupEditIngredient
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_4;
    QHBoxLayout *lColumns;
    QHBoxLayout *horizontalLayout;
    QPushButton *bOK;
    QPushButton *bCancel;
    BlinkablePushButton *bDelCol;
    BlinkablePushButton *bAddCol;

    void setupUi(QWidget *popupEditIngredient)
    {
        if (popupEditIngredient->objectName().isEmpty())
            popupEditIngredient->setObjectName(QString::fromUtf8("popupEditIngredient"));
        popupEditIngredient->resize(640, 200);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(popupEditIngredient->sizePolicy().hasHeightForWidth());
        popupEditIngredient->setSizePolicy(sizePolicy);
        popupEditIngredient->setMaximumSize(QSize(800, 16777215));
        gridLayout_2 = new QGridLayout(popupEditIngredient);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(popupEditIngredient);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        scrollArea = new QScrollArea(groupBox);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy2);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 536, 79));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lColumns = new QHBoxLayout();
        lColumns->setObjectName(QString::fromUtf8("lColumns"));

        gridLayout_4->addLayout(lColumns, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        bOK = new QPushButton(popupEditIngredient);
        bOK->setObjectName(QString::fromUtf8("bOK"));

        horizontalLayout->addWidget(bOK);

        bCancel = new QPushButton(popupEditIngredient);
        bCancel->setObjectName(QString::fromUtf8("bCancel"));

        horizontalLayout->addWidget(bCancel);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        bDelCol = new BlinkablePushButton(popupEditIngredient);
        bDelCol->setObjectName(QString::fromUtf8("bDelCol"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(bDelCol->sizePolicy().hasHeightForWidth());
        bDelCol->setSizePolicy(sizePolicy3);
        bDelCol->setMaximumSize(QSize(20, 20));
        QFont font;
        font.setKerning(false);
        bDelCol->setFont(font);
        bDelCol->setFlat(true);

        gridLayout_2->addWidget(bDelCol, 0, 1, 1, 1);

        bAddCol = new BlinkablePushButton(popupEditIngredient);
        bAddCol->setObjectName(QString::fromUtf8("bAddCol"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(bAddCol->sizePolicy().hasHeightForWidth());
        bAddCol->setSizePolicy(sizePolicy4);
        bAddCol->setMaximumSize(QSize(20, 20));
        bAddCol->setFlat(true);

        gridLayout_2->addWidget(bAddCol, 0, 2, 1, 1);


        retranslateUi(popupEditIngredient);

        QMetaObject::connectSlotsByName(popupEditIngredient);
    } // setupUi

    void retranslateUi(QWidget *popupEditIngredient)
    {
        popupEditIngredient->setWindowTitle(QCoreApplication::translate("popupEditIngredient", "Ingredients", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(accessibility)
        groupBox->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        groupBox->setTitle(QCoreApplication::translate("popupEditIngredient", "New Ingredient", nullptr));
        bOK->setText(QCoreApplication::translate("popupEditIngredient", "OK", nullptr));
        bCancel->setText(QCoreApplication::translate("popupEditIngredient", "Cancel", nullptr));
        bDelCol->setText(QCoreApplication::translate("popupEditIngredient", "-", nullptr));
        bAddCol->setText(QCoreApplication::translate("popupEditIngredient", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popupEditIngredient: public Ui_popupEditIngredient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPEDITINGREDIENT_H
