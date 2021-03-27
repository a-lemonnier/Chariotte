#pragma once

#include <QWidget>
#include <QDialog>

#include <QHoverEvent>
#include <QtEvents>

#include <QTimer>

#include <sstream>

#include "widgets/basicpopup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class popupAbout; }
QT_END_NAMESPACE

class popupAbout : public BasicPopup
{
    Q_OBJECT

public:
    explicit popupAbout(QWidget *parent = nullptr);
    ~popupAbout();

private:
    Ui::popupAbout *ui;
};

