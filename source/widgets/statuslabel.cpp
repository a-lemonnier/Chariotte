#include "statuslabel.h"


enum class StateType {
    Normal,
    Busy,
    Wait,
    Error,
    Evil,
    count
};

// ----------------------------------------------------------------------
// class StatusStyle------------------------------------------------
// ----------------------------------------------------------------------

StatusStyle::StatusStyle() { }
StatusStyle::StatusStyle ( const StateType st ) {}


// ----------------------------------------------------------------------
// class StatusLabel ----------------------------------------------
// ----------------------------------------------------------------------

QString StatusStyle::styleSheet()   const { return this->StyleSheet_; }


StatusLabel::StatusLabel ( QWidget* parent, Qt::WindowFlags f ): QLabel(parent, f) {
    setStatus(StateType::Normal);

    this->AnimationTimer_=new QTimer;

    connect(this->AnimationTimer_, &QTimer::timeout, this, [this]() { std::cout << "animation..." <<std::endl; this->AnimationTimer_->stop(); return; });

    this->AnimationTimer_->start(1000);
}



StatusLabel::~StatusLabel() {
    if (this->AnimationTimer_->isActive()) this->AnimationTimer_->stop();
}


void StatusLabel::setStatus ( StateType s ) {

    auto it=this->StyleMap_.find(s);
    if (it==this->StyleMap_.end()) {
        std::cerr << "StatusLabel::setStatus( ): cannot set state " << static_cast<int>(s) << "." <<std::endl;
        return;
    }

    auto style=this->StyleMap_[s];

    this->setStyleSheet(style);

}


// ----------------------------------------------------------------------
// Styles -------------------------------------------------------------
// ----------------------------------------------------------------------

 inline std::map<StateType, const char*> StatusLabel::StyleMap_{
     {  StateType::Normal,       "QLabel { blinker 1s linear infinite;color: green; }" },
    {  StateType::Error,           "QLabel { color: red; }" },
    {  StateType::Wait,            "QLabel { color: green; }" },
    {  StateType::Busy,            "QLabel { color: blue; }" },
    {  StateType::Evil,              "QLabel { background-color: red;  }" },
};
