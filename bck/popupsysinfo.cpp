#include "popupsysinfo.h"
#include "ui_popupsysinfo.h"

popupSysInfo::popupSysInfo(QWidget *parent) :
    QDialog(parent),
    SI(new Ui::popupSysInfo)
{
    SI->setupUi(this);

    this->setModal(true);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);

    if (parent!=nullptr) {

        auto H=(this->parentWidget()->width()-this->width())/2;
        auto W=(this->parentWidget()->height()-this->height())/2;

        this->move(H,W);
    }


    this->fcount_=this->fcount0_;
    SI->bOK->setText(std::to_string(static_cast<int>(this->fcount0_)).c_str());

    SI->lcdNumber->setVisible(false);
    SI->lcdNumber->setProperty("intValue", QVariant(this->fcount0_));

    this->timer_=new QTimer(this);
    connect(this->timer_, &QTimer::timeout, this, &popupSysInfo::updateTimer);

    this->timer_->start(1000);


    this->showInfo();

}

popupSysInfo::~popupSysInfo() {
    delete SI;
}

void popupSysInfo::showInfo() {
    std::stringstream ss;

    ss << "<html><head></head>";
    ss << "<body>";
    ss << "<h3 style=\"text-align: center\">Sysinfo</h3>";

    ss << "<p style=\"color: #00ff00;\"><strong>Qt</strong> " << qVersion() << "</p>";

    ss << "<p><u>" << tr("Product").toStdString() << "</u>: " << QSysInfo::prettyProductName().toStdString() << " - "
                                << QSysInfo::productVersion().toStdString() <<  "</p>";

    ss << "<p><u>"<<tr("Kernel").toStdString() << "</u>: " << QSysInfo::kernelType().toStdString() << " "
                               << QSysInfo::kernelVersion().toStdString() << "</p>";

                               ss << "<p><u>CPU</u>: " << QSysInfo::buildCpuArchitecture().toStdString() << "<sub>" << tr("build").toStdString() << "</sub> - ";
    ss << QSysInfo::currentCpuArchitecture().toStdString() << "<sub>"<< tr("current").toStdString() << "</sub></p>";

    ss << "<p><u>API</u>: " << QSysInfo::buildAbi().toStdString() << "<sub>" << tr("build").toStdString() << "</sub></p>";



    ss << "</body></html>";

    SI->tbSysinfo->append(ss.str().c_str());
}


void popupSysInfo::updateTimer() {
    this->fcount_-=1;

    if (this->fcount_<1) {
        this->timer_->stop();
        this->close();
    }
    SI->bOK->setText(std::to_string(static_cast<int>(this->fcount_)).c_str());

}

void popupSysInfo::resetTimer() {
    this->fcount_=this->fcount0_;
    SI->bOK->setText(std::to_string(static_cast<int>(this->fcount0_)).c_str());
    timer_->start(1000);
}

void popupSysInfo::on_bOK_clicked()
{
    this->close();
}

bool popupSysInfo::eventFilter ( QObject* obj, QEvent* event ) {

    if (event->type() == QEvent::LanguageChange) {
        SI->retranslateUi(this);
    }

    return QWidget::eventFilter(obj, event);
}

void popupSysInfo::enterEvent(QEvent* event) {
    this->timer_->stop();

    SI->bOK->setText("Close");

    QWidget::enterEvent(event);
}

void popupSysInfo::leaveEvent(QEvent* event) {

    this->resetTimer();

    QWidget::leaveEvent(event);
}
