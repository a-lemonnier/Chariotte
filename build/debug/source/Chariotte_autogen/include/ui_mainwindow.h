/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QKeySequenceEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "log.h"
#include "widgets/statuslabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *mQuit;
    QAction *mAbout;
    QAction *mParameters;
    QAction *actionDebug;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionOpen;
    QWidget *centralwidget;
    QGridLayout *gridLayout_13;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *Panels;
    QGroupBox *gbChariotte;
    QGridLayout *gridLayout_4;
    QToolButton *bToggleLeftPanel;
    QTabWidget *tbChariotte;
    QWidget *pageIngredient;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeIngredient;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbAddIngredient;
    QPushButton *pbRemoveIngredient;
    QToolButton *tbEditIngredient;
    QWidget *pageRecipes;
    QGridLayout *gridLayout_10;
    QTableWidget *listRecipes;
    QWidget *pageParameters;
    QGridLayout *gridLayout_7;
    QPushButton *bTest;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QRadioButton *rbEnglish;
    QRadioButton *rbFrench;
    QRadioButton *rbGerman;
    QWidget *pageDebug;
    QGridLayout *gridLayout_8;
    QPushButton *bPrintListIngredients;
    QPushButton *bPrintSysInfo;
    QPushButton *bPrintRecipts;
    QPushButton *bExportLog;
    QGroupBox *gbActions;
    QGridLayout *gridLayout_2;
    QToolButton *bToggleRightPanel;
    QTabWidget *tabActions;
    QWidget *LogTab;
    QGridLayout *gridLayout_5;
    QScrollArea *saLog;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_3;
    Log *tbLog;
    QWidget *ComputeTab;
    QGridLayout *gridLayout_9;
    QCalendarWidget *calendarWidget;
    QGridLayout *bottomButtons;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *cbHideLog;
    QKeySequenceEdit *keySequenceEdit;
    QSpacerItem *horizontalSpacer;
    QPushButton *bQuit;
    StatusLabel *lStatus;
    QProgressBar *pbProgress;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *mEdit;
    QMenu *mView;
    QMenu *menuTools;
    QMenu *menuHelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1008, 628);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/rc/ico/Chariotte.svg"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/rc/ico/Chariotte.svg"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8(":/rc/ico/Chariotte.svg"), QSize(), QIcon::Active, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/rc/ico/Chariotte.svg"), QSize(), QIcon::Active, QIcon::On);
        icon.addFile(QString::fromUtf8(":/rc/ico/Chariotte.svg"), QSize(), QIcon::Selected, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/rc/ico/Chariotte.svg"), QSize(), QIcon::Selected, QIcon::On);
        MainWindow->setWindowIcon(icon);
        mQuit = new QAction(MainWindow);
        mQuit->setObjectName(QString::fromUtf8("mQuit"));
        mAbout = new QAction(MainWindow);
        mAbout->setObjectName(QString::fromUtf8("mAbout"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/rc/ico/about.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mAbout->setIcon(icon1);
        mParameters = new QAction(MainWindow);
        mParameters->setObjectName(QString::fromUtf8("mParameters"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/rc/ico/sys/options-outline.svg"), QSize(), QIcon::Normal, QIcon::Off);
        mParameters->setIcon(icon2);
        actionDebug = new QAction(MainWindow);
        actionDebug->setObjectName(QString::fromUtf8("actionDebug"));
        actionDebug->setCheckable(true);
        actionDebug->setChecked(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/rc/ico/sys/bug-outline.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDebug->setIcon(icon3);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_13 = new QGridLayout(centralwidget);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        Panels = new QHBoxLayout();
        Panels->setObjectName(QString::fromUtf8("Panels"));
        gbChariotte = new QGroupBox(centralwidget);
        gbChariotte->setObjectName(QString::fromUtf8("gbChariotte"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gbChariotte->sizePolicy().hasHeightForWidth());
        gbChariotte->setSizePolicy(sizePolicy);
        gbChariotte->setContextMenuPolicy(Qt::NoContextMenu);
        gbChariotte->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        gbChariotte->setFlat(true);
        gbChariotte->setCheckable(false);
        gridLayout_4 = new QGridLayout(gbChariotte);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        bToggleLeftPanel = new QToolButton(gbChariotte);
        bToggleLeftPanel->setObjectName(QString::fromUtf8("bToggleLeftPanel"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bToggleLeftPanel->sizePolicy().hasHeightForWidth());
        bToggleLeftPanel->setSizePolicy(sizePolicy1);
        bToggleLeftPanel->setMaximumSize(QSize(25, 25));
        bToggleLeftPanel->setCheckable(false);
        bToggleLeftPanel->setPopupMode(QToolButton::InstantPopup);
        bToggleLeftPanel->setToolButtonStyle(Qt::ToolButtonIconOnly);
        bToggleLeftPanel->setAutoRaise(false);
        bToggleLeftPanel->setArrowType(Qt::LeftArrow);

        gridLayout_4->addWidget(bToggleLeftPanel, 0, 0, 1, 1);

        tbChariotte = new QTabWidget(gbChariotte);
        tbChariotte->setObjectName(QString::fromUtf8("tbChariotte"));
        tbChariotte->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tbChariotte->sizePolicy().hasHeightForWidth());
        tbChariotte->setSizePolicy(sizePolicy2);
        tbChariotte->setMinimumSize(QSize(0, 0));
        tbChariotte->setTabPosition(QTabWidget::West);
        tbChariotte->setTabShape(QTabWidget::Rounded);
        tbChariotte->setElideMode(Qt::ElideLeft);
        tbChariotte->setUsesScrollButtons(true);
        tbChariotte->setDocumentMode(true);
        tbChariotte->setTabsClosable(false);
        tbChariotte->setMovable(false);
        tbChariotte->setTabBarAutoHide(true);
        pageIngredient = new QWidget();
        pageIngredient->setObjectName(QString::fromUtf8("pageIngredient"));
        verticalLayout = new QVBoxLayout(pageIngredient);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeIngredient = new QTreeWidget(pageIngredient);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QString::fromUtf8("Price/Unit"));
        __qtreewidgetitem->setText(2, QString::fromUtf8("Score"));
        __qtreewidgetitem->setText(1, QString::fromUtf8("Category"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("Name"));
        treeIngredient->setHeaderItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeIngredient);
        new QTreeWidgetItem(treeIngredient);
        treeIngredient->setObjectName(QString::fromUtf8("treeIngredient"));
        sizePolicy.setHeightForWidth(treeIngredient->sizePolicy().hasHeightForWidth());
        treeIngredient->setSizePolicy(sizePolicy);
        treeIngredient->setIndentation(20);
        treeIngredient->setUniformRowHeights(true);
        treeIngredient->setSortingEnabled(true);
        treeIngredient->setAnimated(true);
        treeIngredient->setHeaderHidden(false);
        treeIngredient->setColumnCount(6);

        verticalLayout->addWidget(treeIngredient);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbAddIngredient = new QPushButton(pageIngredient);
        pbAddIngredient->setObjectName(QString::fromUtf8("pbAddIngredient"));

        horizontalLayout_2->addWidget(pbAddIngredient);

        pbRemoveIngredient = new QPushButton(pageIngredient);
        pbRemoveIngredient->setObjectName(QString::fromUtf8("pbRemoveIngredient"));

        horizontalLayout_2->addWidget(pbRemoveIngredient);

        tbEditIngredient = new QToolButton(pageIngredient);
        tbEditIngredient->setObjectName(QString::fromUtf8("tbEditIngredient"));

        horizontalLayout_2->addWidget(tbEditIngredient);


        verticalLayout->addLayout(horizontalLayout_2);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/rc/ico/food/steak.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tbChariotte->addTab(pageIngredient, icon4, QString());
        pageRecipes = new QWidget();
        pageRecipes->setObjectName(QString::fromUtf8("pageRecipes"));
        gridLayout_10 = new QGridLayout(pageRecipes);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        listRecipes = new QTableWidget(pageRecipes);
        if (listRecipes->columnCount() < 4)
            listRecipes->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        listRecipes->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        listRecipes->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        listRecipes->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        listRecipes->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (listRecipes->rowCount() < 1)
            listRecipes->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        listRecipes->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        listRecipes->setItem(0, 0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        listRecipes->setItem(0, 1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        listRecipes->setItem(0, 2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        listRecipes->setItem(0, 3, __qtablewidgetitem8);
        listRecipes->setObjectName(QString::fromUtf8("listRecipes"));

        gridLayout_10->addWidget(listRecipes, 0, 0, 1, 1);

        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/rc/ico/food/cook-book.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tbChariotte->addTab(pageRecipes, icon5, QString());
        pageParameters = new QWidget();
        pageParameters->setObjectName(QString::fromUtf8("pageParameters"));
        gridLayout_7 = new QGridLayout(pageParameters);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        bTest = new QPushButton(pageParameters);
        bTest->setObjectName(QString::fromUtf8("bTest"));

        gridLayout_7->addWidget(bTest, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(pageParameters);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        rbEnglish = new QRadioButton(pageParameters);
        rbEnglish->setObjectName(QString::fromUtf8("rbEnglish"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/rc/ico/english.svg"), QSize(), QIcon::Normal, QIcon::Off);
        rbEnglish->setIcon(icon6);
        rbEnglish->setChecked(true);

        horizontalLayout->addWidget(rbEnglish);

        rbFrench = new QRadioButton(pageParameters);
        rbFrench->setObjectName(QString::fromUtf8("rbFrench"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/rc/ico/french.svg"), QSize(), QIcon::Normal, QIcon::Off);
        rbFrench->setIcon(icon7);

        horizontalLayout->addWidget(rbFrench);

        rbGerman = new QRadioButton(pageParameters);
        rbGerman->setObjectName(QString::fromUtf8("rbGerman"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/rc/ico/german.svg"), QSize(), QIcon::Normal, QIcon::Off);
        rbGerman->setIcon(icon8);

        horizontalLayout->addWidget(rbGerman);


        gridLayout_7->addLayout(horizontalLayout, 1, 0, 1, 1);

        tbChariotte->addTab(pageParameters, icon2, QString());
        pageDebug = new QWidget();
        pageDebug->setObjectName(QString::fromUtf8("pageDebug"));
        gridLayout_8 = new QGridLayout(pageDebug);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        bPrintListIngredients = new QPushButton(pageDebug);
        bPrintListIngredients->setObjectName(QString::fromUtf8("bPrintListIngredients"));

        gridLayout_8->addWidget(bPrintListIngredients, 0, 0, 1, 1);

        bPrintSysInfo = new QPushButton(pageDebug);
        bPrintSysInfo->setObjectName(QString::fromUtf8("bPrintSysInfo"));

        gridLayout_8->addWidget(bPrintSysInfo, 0, 1, 1, 1);

        bPrintRecipts = new QPushButton(pageDebug);
        bPrintRecipts->setObjectName(QString::fromUtf8("bPrintRecipts"));

        gridLayout_8->addWidget(bPrintRecipts, 1, 0, 1, 1);

        bExportLog = new QPushButton(pageDebug);
        bExportLog->setObjectName(QString::fromUtf8("bExportLog"));

        gridLayout_8->addWidget(bExportLog, 1, 1, 1, 1);

        tbChariotte->addTab(pageDebug, icon3, QString());

        gridLayout_4->addWidget(tbChariotte, 1, 0, 1, 1);


        Panels->addWidget(gbChariotte);

        gbActions = new QGroupBox(centralwidget);
        gbActions->setObjectName(QString::fromUtf8("gbActions"));
        sizePolicy.setHeightForWidth(gbActions->sizePolicy().hasHeightForWidth());
        gbActions->setSizePolicy(sizePolicy);
        gbActions->setLayoutDirection(Qt::RightToLeft);
        gbActions->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gbActions->setFlat(true);
        gbActions->setCheckable(false);
        gridLayout_2 = new QGridLayout(gbActions);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        bToggleRightPanel = new QToolButton(gbActions);
        bToggleRightPanel->setObjectName(QString::fromUtf8("bToggleRightPanel"));
        bToggleRightPanel->setMaximumSize(QSize(25, 25));
        bToggleRightPanel->setLayoutDirection(Qt::RightToLeft);
        bToggleRightPanel->setPopupMode(QToolButton::InstantPopup);
        bToggleRightPanel->setToolButtonStyle(Qt::ToolButtonIconOnly);
        bToggleRightPanel->setArrowType(Qt::RightArrow);

        gridLayout_2->addWidget(bToggleRightPanel, 0, 0, 1, 1);

        tabActions = new QTabWidget(gbActions);
        tabActions->setObjectName(QString::fromUtf8("tabActions"));
        sizePolicy2.setHeightForWidth(tabActions->sizePolicy().hasHeightForWidth());
        tabActions->setSizePolicy(sizePolicy2);
        tabActions->setLayoutDirection(Qt::RightToLeft);
        tabActions->setTabShape(QTabWidget::Rounded);
        tabActions->setElideMode(Qt::ElideRight);
        tabActions->setTabsClosable(false);
        tabActions->setTabBarAutoHide(true);
        LogTab = new QWidget();
        LogTab->setObjectName(QString::fromUtf8("LogTab"));
        gridLayout_5 = new QGridLayout(LogTab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        saLog = new QScrollArea(LogTab);
        saLog->setObjectName(QString::fromUtf8("saLog"));
        sizePolicy.setHeightForWidth(saLog->sizePolicy().hasHeightForWidth());
        saLog->setSizePolicy(sizePolicy);
        saLog->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 453, 333));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        tbLog = new Log(scrollAreaWidgetContents);
        tbLog->setObjectName(QString::fromUtf8("tbLog"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tbLog->sizePolicy().hasHeightForWidth());
        tbLog->setSizePolicy(sizePolicy3);
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans Light"));
        tbLog->setFont(font);
        tbLog->setFrameShape(QFrame::NoFrame);
        tbLog->setFrameShadow(QFrame::Plain);

        gridLayout_3->addWidget(tbLog, 0, 0, 1, 1);

        saLog->setWidget(scrollAreaWidgetContents);

        gridLayout_5->addWidget(saLog, 0, 0, 1, 1);

        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/rc/ico/sys/terminal-outline.svg"), QSize(), QIcon::Normal, QIcon::Off);
        tabActions->addTab(LogTab, icon9, QString());
        ComputeTab = new QWidget();
        ComputeTab->setObjectName(QString::fromUtf8("ComputeTab"));
        gridLayout_9 = new QGridLayout(ComputeTab);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        calendarWidget = new QCalendarWidget(ComputeTab);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));

        gridLayout_9->addWidget(calendarWidget, 0, 0, 1, 1);

        tabActions->addTab(ComputeTab, QString());

        gridLayout_2->addWidget(tabActions, 2, 0, 1, 1);


        Panels->addWidget(gbActions);


        verticalLayout_6->addLayout(Panels);

        bottomButtons = new QGridLayout();
        bottomButtons->setObjectName(QString::fromUtf8("bottomButtons"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        bottomButtons->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        cbHideLog = new QCheckBox(centralwidget);
        cbHideLog->setObjectName(QString::fromUtf8("cbHideLog"));
        cbHideLog->setEnabled(false);

        horizontalLayout_6->addWidget(cbHideLog);

        keySequenceEdit = new QKeySequenceEdit(centralwidget);
        keySequenceEdit->setObjectName(QString::fromUtf8("keySequenceEdit"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(keySequenceEdit->sizePolicy().hasHeightForWidth());
        keySequenceEdit->setSizePolicy(sizePolicy4);
        QFont font1;
        font1.setPointSize(8);
        keySequenceEdit->setFont(font1);

        horizontalLayout_6->addWidget(keySequenceEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        bQuit = new QPushButton(centralwidget);
        bQuit->setObjectName(QString::fromUtf8("bQuit"));

        horizontalLayout_6->addWidget(bQuit);


        gridLayout_6->addLayout(horizontalLayout_6, 4, 1, 1, 1);

        lStatus = new StatusLabel(centralwidget);
        lStatus->setObjectName(QString::fromUtf8("lStatus"));

        gridLayout_6->addWidget(lStatus, 4, 0, 1, 1);

        pbProgress = new QProgressBar(centralwidget);
        pbProgress->setObjectName(QString::fromUtf8("pbProgress"));
        pbProgress->setEnabled(false);
        pbProgress->setAutoFillBackground(true);
        pbProgress->setValue(0);
        pbProgress->setTextVisible(false);

        gridLayout_6->addWidget(pbProgress, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout_6, 0, 0, 1, 1);


        bottomButtons->addLayout(gridLayout, 0, 0, 1, 1);


        verticalLayout_6->addLayout(bottomButtons);


        gridLayout_13->addLayout(verticalLayout_6, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1008, 34));
        menubar->setDefaultUp(false);
        menubar->setNativeMenuBar(false);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        mEdit = new QMenu(menubar);
        mEdit->setObjectName(QString::fromUtf8("mEdit"));
        mView = new QMenu(menubar);
        mView->setObjectName(QString::fromUtf8("mView"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(mEdit->menuAction());
        menubar->addAction(mView->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(mQuit);
        mEdit->addAction(mParameters);
        mEdit->addSeparator();
        menuTools->addAction(actionDebug);
        menuHelp->addAction(mAbout);

        retranslateUi(MainWindow);
        QObject::connect(mQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tbChariotte->setCurrentIndex(0);
        tabActions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Chariotte", nullptr));
        mQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        mAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        mParameters->setText(QCoreApplication::translate("MainWindow", "Parameters", nullptr));
        actionDebug->setText(QCoreApplication::translate("MainWindow", "Debug", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as ...", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        gbChariotte->setTitle(QCoreApplication::translate("MainWindow", "Chariotte", nullptr));
        bToggleLeftPanel->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeIngredient->headerItem();
        ___qtreewidgetitem->setText(5, QCoreApplication::translate("MainWindow", "Currency", nullptr));
        ___qtreewidgetitem->setText(4, QCoreApplication::translate("MainWindow", "Unit", nullptr));

        const bool __sortingEnabled = treeIngredient->isSortingEnabled();
        treeIngredient->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeIngredient->topLevelItem(0);
        ___qtreewidgetitem1->setText(5, QCoreApplication::translate("MainWindow", "\342\202\254", nullptr));
        ___qtreewidgetitem1->setText(4, QCoreApplication::translate("MainWindow", "Kg", nullptr));
        ___qtreewidgetitem1->setText(3, QCoreApplication::translate("MainWindow", "1", nullptr));
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("MainWindow", "A", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", "Fruit", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("MainWindow", "Tomate", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeIngredient->topLevelItem(1);
        ___qtreewidgetitem2->setText(5, QCoreApplication::translate("MainWindow", "$", nullptr));
        ___qtreewidgetitem2->setText(4, QCoreApplication::translate("MainWindow", "L", nullptr));
        ___qtreewidgetitem2->setText(3, QCoreApplication::translate("MainWindow", "0.5", nullptr));
        ___qtreewidgetitem2->setText(2, QCoreApplication::translate("MainWindow", "A+", nullptr));
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("MainWindow", "Alcool", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("MainWindow", "Bi\303\250re", nullptr));
        treeIngredient->setSortingEnabled(__sortingEnabled);

        pbAddIngredient->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pbRemoveIngredient->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        tbEditIngredient->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        tbChariotte->setTabText(tbChariotte->indexOf(pageIngredient), QCoreApplication::translate("MainWindow", "Ingredients", nullptr));
        QTableWidgetItem *___qtablewidgetitem = listRecipes->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Partouze", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = listRecipes->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Quantit\303\251 de froutre", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = listRecipes->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Unit\303\251", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = listRecipes->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Lieu", nullptr));

        const bool __sortingEnabled1 = listRecipes->isSortingEnabled();
        listRecipes->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem4 = listRecipes->item(0, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "P\303\242ques", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = listRecipes->item(0, 1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = listRecipes->item(0, 2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "L", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = listRecipes->item(0, 3);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "Vatican", nullptr));
        listRecipes->setSortingEnabled(__sortingEnabled1);

        tbChariotte->setTabText(tbChariotte->indexOf(pageRecipes), QCoreApplication::translate("MainWindow", "Recipes", nullptr));
        bTest->setText(QCoreApplication::translate("MainWindow", "Test", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Language", nullptr));
        rbEnglish->setText(QCoreApplication::translate("MainWindow", "English", nullptr));
        rbFrench->setText(QCoreApplication::translate("MainWindow", "French", nullptr));
        rbGerman->setText(QCoreApplication::translate("MainWindow", "German", nullptr));
        tbChariotte->setTabText(tbChariotte->indexOf(pageParameters), QCoreApplication::translate("MainWindow", "Parameters", nullptr));
        bPrintListIngredients->setText(QCoreApplication::translate("MainWindow", "PrintListIngredients", nullptr));
        bPrintSysInfo->setText(QCoreApplication::translate("MainWindow", "PrintSysInfo", nullptr));
        bPrintRecipts->setText(QCoreApplication::translate("MainWindow", "PrintRecipts", nullptr));
        bExportLog->setText(QCoreApplication::translate("MainWindow", "ExportLog", nullptr));
        tbChariotte->setTabText(tbChariotte->indexOf(pageDebug), QCoreApplication::translate("MainWindow", "Debug", nullptr));
        gbActions->setTitle(QCoreApplication::translate("MainWindow", "Actions", nullptr));
        bToggleRightPanel->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        tbLog->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Open Sans Light'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" text-decoration: underline;\">Log:</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        tabActions->setTabText(tabActions->indexOf(LogTab), QCoreApplication::translate("MainWindow", "Log", nullptr));
        tabActions->setTabText(tabActions->indexOf(ComputeTab), QCoreApplication::translate("MainWindow", "Miscellaneous", nullptr));
        cbHideLog->setText(QCoreApplication::translate("MainWindow", "Hide right panel", nullptr));
        keySequenceEdit->setKeySequence(QString());
        bQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        mEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        mView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuTools->setTitle(QCoreApplication::translate("MainWindow", "Tools", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
