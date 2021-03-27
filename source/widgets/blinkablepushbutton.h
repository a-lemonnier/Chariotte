#pragma once

#include <QWidget>
#include <QPushButton>

#include <QPalette>
#include <QColor>

#include <QTimer>

#include <iostream>
#include <cmath>

#include <utilities/chariotte_utils.h>

QT_BEGIN_NAMESPACE
namespace Ui { class BlinkablePushButton; }
QT_END_NAMESPACE

class BlinkablePushButton: public QPushButton {
    Q_OBJECT
public:

    explicit BlinkablePushButton(QWidget* parent=nullptr, int duration=300,  int periode=50);

    ~BlinkablePushButton();



protected:
    int count_{5};
    int periode_{};
    int duration_{};

    QColor color_{};
    QColor colorA_{};

    QPalette palette_ {};
    QPalette paletteA_ {};

    QTimer* timer_{};

    void blink();

};
