#pragma once

#include <QWidget>
#include <QObject>
#include <QTextBrowser>

#include <iostream>
#include <sstream>

#include <qlogging.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Log; }
QT_END_NAMESPACE

class Log: public QTextBrowser {
    Q_OBJECT

public:
    explicit Log(QWidget *parent = nullptr): QTextBrowser(parent) { };

    void appendC(const QString& txt, const QString& color);
    void appendErr(const QString& txt);
    void appendInfo(const QString& txt);


private:
    std::string Red{"ff0055"};
    std::string Blue{"0055ff"};
    std::string Black{"000000"};
    std::string Green{"00ff55"};


};
