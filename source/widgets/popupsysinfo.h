#pragma once

#include <QWidget>
#include <QDialog>
#include <QSysInfo>

#include <QHoverEvent>
#include <QtEvents>

#include <QTimer>

#include <sstream>


QT_BEGIN_NAMESPACE
namespace Ui { class popupSysInfo; }
QT_END_NAMESPACE

class popupSysInfo : public QDialog {
    Q_OBJECT

public:
    explicit popupSysInfo(QWidget *parent = nullptr);
    ~popupSysInfo();

     void updateTimer();
     void showInfo();
     void resetTimer();

     bool eventFilter ( QObject* obj, QEvent* event );

     void enterEvent(QEvent* event);
     void leaveEvent(QEvent* event);


private slots:
    void on_bOK_clicked();

protected:
    const float fcount0_{5};
    float fcount_{};

    QTimer* timer_{};

private:
    Ui::popupSysInfo *SI;
};
