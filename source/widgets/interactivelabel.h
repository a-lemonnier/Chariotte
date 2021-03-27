#pragma once

#include <QWidget>
#include <QLineEdit>

#include <QHoverEvent>
#include <QChildEvent>
#include <QtEvents>

#include <QPalette>
#include <QColor>

#include <cmath>

QT_BEGIN_NAMESPACE
namespace Ui { class ILabel; }
QT_END_NAMESPACE

class ILabel: public QLineEdit {
    Q_OBJECT

public:
    explicit ILabel(QWidget* parent=nullptr) ;

    ~ILabel();

    bool eventFilter(QObject * obj,  QEvent * event) override;

protected:
    QColor color_{};
    QColor colorA_{};

    QPalette palette_ {};
    QPalette paletteA_ {};

    bool isEditing_=false;

};
