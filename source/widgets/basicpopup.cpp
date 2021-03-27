#include "basicpopup.h"


BasicPopup::BasicPopup ( QWidget *parent ) :
    QDialog ( parent ) {

    this->setupUi ( this );

    this->timer_=new QTimer();

    connect ( this->timer_, &QTimer::timeout, this, &BasicPopup::updateOKButton );

    setEnableTimer();

    this->retranslateUI ( this );

}

void BasicPopup::setupUi ( BasicPopup* pb ) {

// items, widgets and stuff

    this->setWindowTitle ( "Message" );


    gridlayout0 = new QGridLayout ( this );

    this->centralWidget=new QGridLayout;

    QSpacerItem* left_button_spacer=new QSpacerItem ( 40,20,QSizePolicy::Expanding, QSizePolicy::Minimum );
    QSpacerItem* right_button_spacer=new QSpacerItem ( 40,20,QSizePolicy::Expanding, QSizePolicy::Minimum );

    this->bOK=new QPushButton ( this );
    this->bOK->setText ( tr ( "OK" ) );
    this->bOK->setSizePolicy ( QSizePolicy::Minimum, QSizePolicy::Minimum );

    this->buttonLayout=new QHBoxLayout;
    this->buttonLayout->addItem ( left_button_spacer );
    this->buttonLayout->addWidget ( this->bOK );
    this->buttonLayout->addItem ( right_button_spacer );

    this->groupBox=new QGroupBox ( this );
    this->groupBox->setFlat ( true );

    this->tbMessage=new QTextBrowser ( this->groupBox );
    this->tbMessage->setFrameShape ( QFrame::NoFrame );
    this->tbMessage->setFrameShadow ( QFrame::Plain );
    this->tbMessage->setAcceptRichText ( true );
    this->tbMessage->setTextInteractionFlags (
        Qt::TextInteractionFlag::NoTextInteraction|
        Qt::TextInteractionFlag::LinksAccessibleByMouse
    );
    this->tbMessage->setOpenExternalLinks ( true );

    this->gridlayout1 =new QGridLayout ( this->groupBox );
    this->gridlayout1->addWidget ( this->tbMessage, 0, 0, 1, 1 );

    this->centralWidget->addWidget ( this->groupBox, 0, 0, 1, 1 );
    this->centralWidget->addLayout ( this->buttonLayout,1, 0, 1, 1 );

    this->gridlayout0->addLayout ( this->centralWidget, 0, 0, 1, 1 );

// objectNames
    this->setObjectName ( "BasicPopup" );
    this->gridlayout0->setObjectName ( "gridlayout0" );
    this->gridlayout1->setObjectName ( "gridlayout1" );
    this->centralWidget->setObjectName ( "centralWidget" );
    this->buttonLayout->setObjectName ( "buttonLayout" );
    this->groupBox->setObjectName ( "groupBox" );
    this->tbMessage->setObjectName ( "tbMessage" );
    this->bOK->setObjectName ( "bOK" );

// events
    this->installEventFilter ( this );
    this->tbMessage->installEventFilter ( this );
    this->bOK->installEventFilter ( this );


// connections
    connect ( this->bOK, &QPushButton::clicked, this, &BasicPopup::on_bOK_clicked );

    QMetaObject::connectSlotsByName(this);

}


void BasicPopup::retranslateUI ( QWidget* BasicPopup ) {

    foreach(auto b, BasicPopup->findChildren<QPushButton*>())
        b->setText(
            QCoreApplication::translate(
                BasicPopup->objectName().toStdString().c_str(),
                b->text().toStdString().c_str(),
                nullptr)
        );

    foreach(auto b, BasicPopup->findChildren<QTextBrowser*>())
        b->setText(
            QCoreApplication::translate(
                BasicPopup->objectName().toStdString().c_str(),
                                        b->toHtml().toStdString().c_str(),
                                        nullptr)
        );

    foreach(auto b, BasicPopup->findChildren<QPushButton*>())
        b->setText(
            QCoreApplication::translate(
                BasicPopup->objectName().toStdString().c_str(),
                                        b->text().toStdString().c_str(),
                                        nullptr)
        );

}


void BasicPopup::setEnableTimer ( bool b ) {
    if (b && !this->timer_->isActive()) {
        this->isTimerEnable=true;
        this->timer_->start(1000);
    }
    else {
        this->isTimerEnable=false;
        if (this->timer_->isActive()) this->timer_->stop();
    }
}


void BasicPopup::setText ( QString txt ) {
    this->tbMessage->setText ( txt );
}

void BasicPopup::setText ( const std::string& txt ) {
    this->setText ( QString ( txt.c_str() ) );
}

void BasicPopup::setText ( const std::stringstream& txt ) {
    this->setText ( txt.str() );
}

void BasicPopup::append ( QString txt ) {
    this->tbMessage->append ( txt );
}

void BasicPopup::append ( const char* txt ) {
    this->tbMessage->append ( txt );
}

void BasicPopup::append ( const std::string& txt ) {
    this->append ( QString ( txt.c_str() ) );
}
void BasicPopup::append ( const std::stringstream& txt ) {
    this->append ( txt.str() );
}

void BasicPopup::setTextButton ( QString txt ) {
    this->textButton_=txt;
    this->bOK->setText ( txt );
}

void BasicPopup::setTextButton ( const std::string& txt ) {
    this->textButton_=(QString(txt.c_str()));
    this->bOK->setText ( QString ( txt.c_str() ) );
}

void BasicPopup::setTextButton ( const std::stringstream& txt ) {
    this->textButton_=(QString(txt.str().c_str()));
    this->bOK->setText ( QString ( txt.str().c_str() ) );
}


void BasicPopup::setTimerDuration ( int tms ) {
}

void BasicPopup::setEnableTitleBar ( bool c ) {
    if ( !c ) {
        this->setModal ( true );
        this->setWindowFlags ( Qt::FramelessWindowHint | Qt::Dialog );
    }
}


bool BasicPopup::eventFilter ( QObject* obj, QEvent* event ) {

    if (event->type()==QEvent::LanguageChange)
        this->retranslateUI(this);


    if (obj==this->bOK) {
        if (event->type()==QEvent::HoverEnter) {

        }
        if (event->type()==QEvent::HoverLeave) {

        }
    }
    if (obj==this) {

        if ( event->type() ==QEvent::Enter ) {
            if ( isTimerEnable ) {
                this->bOK->setText ( this->textButton_ );
                this->count_=0;
                this->timer_->stop();
            }
        }
        if ( event->type() ==QEvent::Leave ) {
            if ( isTimerEnable ) {
                this->timer_->start ( 1000 );
            }
        }
    }


    return QWidget::eventFilter(obj, event);
}

// Slots
//------------------------------------------------------------------

void BasicPopup::on_bOK_clicked() {
    if (this->timer_->isActive())  this->timer_->stop();
    emit(&BasicPopup::finished );
    this->close();
}

// Timer
//------------------------------------------------------------------

void BasicPopup::updateOKButton() {
    this->count_++;

    int diff=Duration_- 1e3*this->count_;
    if (diff<0) {
        emit(&QTimer::timeout);
        timer_->stop();
        this->close();
    }

    this->bOK->setText(QString::number(1+diff*1e-3));

}



