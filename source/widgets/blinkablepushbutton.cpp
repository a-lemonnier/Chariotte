#include "blinkablepushbutton.h"


//  BlinkablePushButton
// ------------------------


BlinkablePushButton::BlinkablePushButton (QWidget* parent,  int duration, int periode)  : QPushButton(parent) ,
periode_(periode),
duration_(duration) {

    this->count_= periode>0 ? duration/periode : 3;

    if ( parent != nullptr ) {
        this->color_= this->parentWidget()->palette().color ( QWidget::backgroundRole() );
        this->palette_= this->parentWidget()->palette();
    }
    else {
        this->color_= this->palette().color ( QWidget::backgroundRole() );
        this->palette_=this->palette().color ( QWidget::backgroundRole() );
    }

    int r=this->color_.red()*1.5;
    int g=this->color_.green()*1.5;
    int b=this->color_.blue()*1.5;

    auto rgb=r*pow(16, 4)+g*pow(16, 2)+b;

    this->colorA_.setRgb(rgb>0xffffff?0xffffff:rgb);

    paletteA_=QPalette(QWidget::backgroundRole(),  this->colorA_);


    this->timer_=new QTimer();

    connect(this->timer_, &QTimer::timeout, this, &BlinkablePushButton::blink);

    this->timer_->start(this->periode_);

}

BlinkablePushButton::~BlinkablePushButton() {
    if (this->timer_->isActive()) this->timer_->stop();
}


void BlinkablePushButton::blink() {
    this->count_--;
    if (this->count_<0) timer_->stop();

    if (this->count_%2==0)  this->setPalette(this->paletteA_);
    else this->setPalette(this->palette_);

}

