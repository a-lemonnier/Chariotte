#include "log.h"


void Log::appendC(const QString& txt, const QString& color) {

    std::stringstream ss{};
    ss << ""
       << "<span style=\"color:#" << color.toStdString() << "\";>"
       << ">"
       << "</span>"
       << ""
       << "\t\t" << txt.toStdString() << ".\n";

    this->append(QString(ss.str().c_str()));

}

void Log::appendErr(const QString& txt) {
    this->appendC(txt, QString(this->Red.c_str()));
}

void Log::appendInfo(const QString& txt) {
this->appendC(txt, QString(this->Blue.c_str()));
}








