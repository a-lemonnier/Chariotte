#include "popupeditingredient.h"
#include "ui_popupeditingredient.h"

popupEditIngredient::popupEditIngredient ( QWidget *parent ) :
    QDialog ( parent ),
    ei ( new Ui::popupEditIngredient ) {
    ei->setupUi ( this );

    this->installEventFilter(this);


    this->setModal ( true );
    this->setWindowFlags ( Qt::FramelessWindowHint | Qt::Dialog );

    ei->bOK->setEnabled ( false );



}

popupEditIngredient::~popupEditIngredient() {
    delete ei;
}


void popupEditIngredient::setColumnCount ( int c )  {

}

void popupEditIngredient::updateColumn() {

}

void popupEditIngredient::addColumn() {


}

void popupEditIngredient::addColumn ( const QString& colname ) {

    ei->bOK->setEnabled(true);

    this->ColNumber_++;

    ILabel* label=new ILabel();

    label->setText ( colname+" "+QString::number ( this->ColNumber_ ) );
    label->setObjectName ( "l"+QString::number ( this->ColNumber_ )+"_"+colname );

    label->setMinimumWidth ( 75 );
    label->setMaximumWidth ( 300 );

    QLineEdit* line_edit=new QLineEdit();

    line_edit->setObjectName ( "le"+QString::number ( this->ColNumber_ )+"_"+colname );
    line_edit->setMinimumWidth ( 75 );
    line_edit->setMaximumWidth ( 300 );
    line_edit->setStyleSheet ( "background-color: rgb(100, 100, 100);" );

    ei->lColumns->addWidget ( label );
    ei->lColumns->addWidget ( line_edit );

}


void popupEditIngredient::removeLastColumn() {

    if (this->ColNumber_<2) ei->bOK->setEnabled(false);

    if ( ei->lColumns->count() >1 ) {

        int size=ei->lColumns->count();

        QLayoutItem * item0=ei->lColumns->takeAt ( size-1 );
        QLayoutItem * item1=ei->lColumns->takeAt ( size-2 );

        delete item1->widget();
        delete item1;
        delete item0->widget();
        delete item0;

        this->ColNumber_--;

    }


}

// EVENTS
// ----------------------------------------

bool popupEditIngredient::eventFilter ( QObject* obj, QEvent* event ) {

    if (event->type() == QEvent::LanguageChange) {
        ei->retranslateUi(this);
    }

    return QWidget::eventFilter(obj, event);
}


// SLOTS
// ----------------------------------------

void popupEditIngredient::on_bCancel_clicked() {
    this->close();
}


void popupEditIngredient::on_bDelCol_clicked() {
    removeLastColumn();


}


void popupEditIngredient::on_bAddCol_clicked() {

    addColumn ( "Column" );

}


void popupEditIngredient::on_bOK_clicked() {

}
