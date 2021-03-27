#include "basicpopup.h"
#include "ui_basicpopup.h"

BasicPopup::BasicPopup ( QWidget *parent ) :
    QDialog ( parent ),
    bp ( new Ui::BasicPopup ) {
    bp->setupUi ( this );

    if ( parent!=nullptr ) {

        auto H= ( this->parentWidget()->width()-this->width() ) /2;
        auto W= ( this->parentWidget()->height()-this->height() ) /2;

        this->move ( H,W );
    }

}

BasicPopup::~BasicPopup() {
    delete bp;
}

void BasicPopup::setText ( QString txt ) {
    bp->tBrowser->setText ( txt );
}

void BasicPopup::setText ( const std::string& txt ) {
    this->setText ( QString ( txt.c_str() ) );
}

void BasicPopup::setText ( const std::stringstream& txt ) {
    this->setText ( txt.str() );
}

void BasicPopup::append ( QString txt ) {
    bp->tBrowser->append ( txt );
}

void BasicPopup::append ( const std::string& txt ) {
    this->append ( QString ( txt.c_str() ) );
}
void BasicPopup::append ( const std::stringstream& txt ) {
    this->append ( txt.str() );
}

void BasicPopup::setTextButton ( QString txt ) {
    bp->bOK->setText ( txt );
}

void BasicPopup::setTextButton ( const std::string& txt ) {
    bp->bOK->setText ( QString ( txt.c_str() ) );
}

void BasicPopup::setTextButton ( const std::stringstream& txt ) {
    bp->bOK->setText ( QString ( txt.str().c_str() ) );
}


void BasicPopup::setTimerDuration ( int tms ) {
}

void BasicPopup::setEnableTitleBar ( bool c ) {
    if ( !c ) {
        this->setModal ( true );
        this->setWindowFlags ( Qt::FramelessWindowHint | Qt::Dialog );
    }
}




void BasicPopup::on_bOK_clicked() {
    this->close();

}

