#include "interactivelabel.h"


//  ILabel
// ------------------------

ILabel::ILabel ( QWidget* parent ) : QLineEdit(parent) {

    // get background color of the parent widget. the goal is to change the color of the label when mouse if hovering the widget

        setAutoFillBackground(true);



    if ( parent != nullptr ) {
        this->color_= this->parentWidget()->palette().color ( QPalette::Base );
        this->palette_= this->parentWidget()->palette();
    }
    else {
        this->color_= this->palette().color ( QPalette::Base );
        this->palette_=this->palette().color ( QPalette::Base);
    }

    int r=this->color_.red()*1.0;
    int g=this->color_.green()*0.99;
    int b=this->color_.blue()*0.99;

    auto rgb=r*pow(16, 4)+g*pow(16, 2)+b;


    this->colorA_.setRgb(rgb>0xffffff?0xffffff:rgb);

    paletteA_=QPalette(QPalette::Base,  this->colorA_);
    this->setPalette(palette_);

    this->setEnabled(false);

    this->setMouseTracking(true);
    this->installEventFilter(this);


}
ILabel::~ILabel() { }

bool ILabel::eventFilter ( QObject* obj, QEvent* event ) {

    if (event->type()==QEvent::Enter)  {
        this->setPalette ( paletteA_ );
    }

    if ( event->type() ==QEvent::Leave ||
            static_cast<QKeyEvent*> ( event )->key() ==Qt::Key_Return )  {

        this->setEnabled ( false );
        this->setPalette ( palette_ );
        this->isEditing_=false;

    }

    if ( event->type() ==QEvent::MouseButtonDblClick )  {
        this->setEnabled ( true );
        this->isEditing_=true;
    }

        return QWidget::eventFilter(obj, event);
}
