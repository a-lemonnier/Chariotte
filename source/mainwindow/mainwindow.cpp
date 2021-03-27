#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QTranslator *translator, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) ,
     translator(translator) {
    ui->setupUi(this);



    // Timers
    this->ProgressBarTimer_K2000=new QTimer;

    connect(this->ProgressBarTimer_K2000, &QTimer::timeout, this, &MainWindow::updateProgressBar_K2000);
    connect(this->ProgressBarTimer_K2000, &QTimer::destroyed, this, &MainWindow::deleteLater);

    this->ProgressBarTimer_K2000->start(this->ProgressBarTimerPeriod_K2000);

    // Init Style Var
    initStyleVar();


     // Some connections
     connect ( ui->mParameters, &QAction::triggered, this, [this]() {
         ui->tbChariotte->setCurrentIndex ( 1 );
     } );
     connect ( ui->mAbout, &QAction::triggered, this, &MainWindow::showAbout);
     connect ( ui->actionDebug, &QAction::triggered, this, &MainWindow::ToggleDebugPanel);



     // Events
     this->setMouseTracking(true);
     this->installEventFilter(this);

     // LeftPanel
     ui->tbChariotte->setCurrentIndex(0);
     ui->tbChariotte->setTabVisible(ui->tbChariotte->indexOf(ui->pageDebug), false);
     ui->gbChariotte->setStyleSheet( this->StylePanelOn );

     ui->cbHideLog->setVisible(false);

     ui->ComputeTab->setHidden(true);

}

MainWindow::~MainWindow() {
    delete ui;
}

//     **********************
//   ****** METHODS ******
// *********************


void MainWindow::showAbout() {

    ui->tbLog->appendInfo(tr("Show About."));

    if (!this->SI) {
        this->About=new popupAbout(this);

    }

    if (!this->About->isVisible()) {
        this->About->show();
//         this->About->resetTimer();
    }
}

void MainWindow::hideLeftPanel()  {
    if (!this->isRightPanelVisible) this->showRightPanel();

    auto * tab_pane = ui->tbChariotte->findChild<QStackedWidget *>();
    if (tab_pane) {

        this->isLeftPanelVisible=false;
        tab_pane->hide();
        this->LeftPanelSize_= ui->tbChariotte->maximumWidth();
        ui->tbChariotte->setMaximumWidth(0);
        ui->tbChariotte->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Preferred);

        ui->bToggleLeftPanel->setArrowType(Qt::ArrowType::RightArrow);

        ui->gbChariotte->setStyle(new CustomTabStyle);

        ui->gbChariotte->setStyleSheet( this->StylePanelOff );
    }

}


void MainWindow::showLeftPanel()  {
    auto * tab_pane = ui->tbChariotte->findChild<QStackedWidget *>();
    if (tab_pane) {
        this->isLeftPanelVisible=true;
        tab_pane->setHidden(false);

        ui->tbChariotte->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

        ui->tbChariotte->setMaximumWidth(this->LeftPanelSize_);
        ui->bToggleLeftPanel->setArrowType(Qt::ArrowType::LeftArrow);


        ui->gbChariotte->setStyle(nullptr);
        ui->gbChariotte->setStyleSheet( this->StylePanelOn );
    }
}


void MainWindow::hideRightPanel()  {

    if (!this->isLeftPanelVisible) this->showLeftPanel();

    this->isRightPanelVisible=false;

    this->RightPanelSize_= ui->tabActions->maximumWidth();
    ui->tabActions->setMaximumWidth(0);

    ui->tabActions->setSizePolicy(QSizePolicy::Maximum,QSizePolicy::Preferred);

    ui->bToggleRightPanel->setArrowType(Qt::ArrowType::LeftArrow);
}


void MainWindow::showRightPanel()  {

    this->isRightPanelVisible=true;
    ui->tabActions->setMaximumWidth(this->RightPanelSize_);
    ui->tabActions->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    ui->bToggleRightPanel->setArrowType(Qt::ArrowType::RightArrow);

}

void MainWindow::updateProgressBar_K2000() {
    this-> ProgressBarValue+=this->ProgressBarStepSign;

    if (this-> ProgressBarValue>100) {
//         this->ProgressBarValue=0;
        this->ProgressBarStepSign=-this->ProgressBarStepSign;
//         ui->pbProgress->setInvertedAppearance(!ui->pbProgress->invertedAppearance());

    }
    if (this-> ProgressBarValue<0) {
        this->ProgressBarStepSign=-this->ProgressBarStepSign;
//         ui->pbProgress->setInvertedAppearance(!ui->pbProgress->invertedAppearance());
    }

    ui->pbProgress->setValue( this->ProgressBarValue);
}



//     **********************
//   ******* STYLES *******
// **********************

void MainWindow::initStyleVar(){

    ui->gbChariotte->setCheckable(false);

    this->StylePanelOn =
                "QGroupBox::title{"

                     "margin: 5% auto;"
//                      "border: 2px solid rgb(0,0,127);"
                     "border-radius: 3px;"
                    "subcontrol-position: top left;"
                 "}"

                 "QGroupBox {"
                    "border-left: 1px solid rgb(127,127,127);"
                    "border-bottom: 1px dotted rgb(127,127,127);"
                    "border-radius: 10px;"
                 "}";

    this->StylePanelOff =
                "QGroupBox::title{"
                "color: white;"
//                     "padding: 30px;"
//                     "margin: auto auto auto auto;"
//                     "border: 2px solid rgb(0,0,127);"
//                     "border-radius: 3px;"
//                     "subcontrol-position: top left;"
                 "}"
//                 "QGroupBox::indicator:checked {"
//                     "image: url(:/rc/ico/Chariotte.svg);"
//                 "}"
//                 "QGroupBox::indicator:unchecked {"
//                     "image: url(:/rc/ico/Chariotte.svg);"
//                 "}"
                 "QGroupBox {"
                 "border-left: 1px solid rgb(127,127,127);"
                 "border-bottom: 1px dotted rgb(127,127,127);"
                 "border-right: 1px dotted rgb(127,127,127);"
                 "border-top: 1px dotted rgb(127,127,127);"
                 "border-radius: 10px;"
                 "}";
}



void MainWindow::ToggleDebugPanel(bool b) {
    ui->tbLog->appendInfo("Toggle debug panel");
    ui->tbChariotte->setTabVisible(ui->tbChariotte->indexOf(ui->pageDebug),
                                   !ui->tbChariotte->isTabVisible(ui->tbChariotte->indexOf(ui->pageDebug)));

}

//      ***********************
//    ******* EVENTS *******
// **********************

bool MainWindow::eventFilter ( QObject* obj, QEvent* event ) {
    if (event->type()==QEvent::KeyPress) ui->keySequenceEdit->setFocus();

    return QWidget::eventFilter(obj, event);
}

//      ***********************
//    ******* PAINTER *******
// **********************

void MainWindow::paintEvent ( QPaintEvent* event ) {

}




//      *********************
//    ******* SLOTS ********
// *********************


void MainWindow::on_bTest_clicked() {
    ui->tbLog->appendInfo("bTest clicked");
}


void MainWindow::on_cbHideLog_stateChanged(int arg1) {

}

void MainWindow::on_pbAddIngredient_clicked() {
    ui->tbLog->appendInfo("Add ingredient");
    ui->lStatus->setText("Adding an ingredient");

    if (!this->EditIngredient) this->EditIngredient=new popupEditIngredient(this);
    if (!this->EditIngredient->isVisible()) this->EditIngredient->show();

    ui->lStatus->setText("Done");
}

void MainWindow::on_bQuit_clicked() {
    this->close();
}

void MainWindow::on_bPrintListIngredients_clicked() {

    ui->treeIngredient->clear();

    ui->treeIngredient->setColumnCount(6);

    ui->tbLog->appendInfo("Fill tree");
    for(int i=0; i<12; i++) {

        QStringList Header{};
        for(int j=0; j<6; j++) {
            int k=(i+1)%(j+1);
            Header << QString::number(k);
        }

        QString h{};
        for(const auto& s: Header) h+="\t"+s;

        ui->tbLog->appendInfo(h);

        QTreeWidgetItem* item=new QTreeWidgetItem(Header);

        ui->treeIngredient->addTopLevelItem(item);

    }


    for(int i=0; i< ui->treeIngredient->topLevelItemCount(); i++) {

        auto item = ui->treeIngredient->topLevelItem(i);

        std::stringstream ss{};

        ss << "line " << i << ":\n";

        for(auto j=0; j<item->columnCount(); j++)
            ss << item->text(j).toStdString() << "\t";

        ui->tbLog->appendInfo(ss.str().c_str());
    }

}

void MainWindow::on_bPrintSysInfo_clicked() {
    ui->tbLog->appendInfo(tr("Show sysinfo."));

    if (!this->SI) this->SI = new popupSysInfo(this);

    if (!this->SI->isVisible()) {
        this->SI->show();
        this->SI->resetTimer();
    }

}


void MainWindow::on_rbFrench_clicked() {
    if (this->translator) {
        qApp->removeTranslator(this->translator);

        if (translator->load("Chariotte_fr_FR.qm")) {
            qApp->installTranslator(translator);
            ui->retranslateUi(this);
            ui->tbLog->appendInfo(tr("Switch to French."));
        }
        else ui->tbLog->appendErr("Cannot load French translation file."); // popup error
    }
}


void MainWindow::on_rbEnglish_clicked() {
    if (this->translator) {
        qApp->removeTranslator(this->translator);
        ui->retranslateUi(this);
        ui->tbLog->appendInfo(tr("Switch to English."));
    }
}


void MainWindow::on_rbGerman_clicked() {
    if ( this->translator ) {
        qApp->removeTranslator ( this->translator );

        if ( translator->load ( "Chariotte_de_DE.qm" ) ) {
            qApp->installTranslator ( translator );
            ui->retranslateUi ( this );
            ui->tbLog->appendInfo ( tr ( "Switch to German." ) );
        } else ui->tbLog->appendErr ( "Cannot load German translation file." ); // popup error
    }
}


void MainWindow::on_keySequenceEdit_keySequenceChanged ( const QKeySequence &keySequence ) {
    bool quit_test=false;
    quit_test|=ui->keySequenceEdit->keySequence()==QKeySequence::fromString ( "Ctrl+Q" );
    quit_test|=ui->keySequenceEdit->keySequence()==QKeySequence::fromString ( "Escape" );

    bool stop_animations=false;
    stop_animations|=ui->keySequenceEdit->keySequence()==QKeySequence::fromString ( "Ctrl+A" );

    if ( quit_test ) this->close();
    if (stop_animations)  {
        if (this->ProgressBarTimer_K2000->isActive()) this->ProgressBarTimer_K2000->stop();
        else  this->ProgressBarTimer_K2000->start(ProgressBarTimerPeriod_K2000);
    }

}

void MainWindow::on_tbChariotte_tabBarClicked(int index) {
    auto * tab_pane = ui->tbChariotte->findChild<QStackedWidget *>();
    if (tab_pane)
        if (tab_pane->isHidden()) {
            tab_pane->setHidden(false);
             ui->bToggleLeftPanel->setArrowType(Qt::ArrowType::LeftArrow);
        }
}


void MainWindow::on_gbChariotte_toggled(bool arg1) {

}


void MainWindow::on_bToggleLeftPanel_clicked() {
    auto * tab_pane = ui->tbChariotte->findChild<QStackedWidget *>();
    if (tab_pane) {
        if (!tab_pane->isHidden()) hideLeftPanel();
        else  showLeftPanel();
    }
}



void MainWindow::on_bToggleRightPanel_clicked() {
    if (!this->isRightPanelVisible) showRightPanel();
    else    hideRightPanel();
}

