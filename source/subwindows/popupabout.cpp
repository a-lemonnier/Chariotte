#include "popupabout.h"


popupAbout::popupAbout ( QWidget *parent ) :
    BasicPopup( parent )  {

        this->setWindowTitle(tr("About"));
        this->append("<h3>Chariotte</h3>");
        this->append(tr("Chariotte is an open source, at this moment, food shopping manager."));

        this->append("<br/>");

        this->append("<p>" + tr("See") + " <a href=\"http://git.com\">Git repository<a/><p>");

}

popupAbout::~popupAbout() {

}
