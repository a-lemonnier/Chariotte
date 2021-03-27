#pragma once

#include <QObject>
#include <QWidget>
#include <QDialog>

#include <QTimer>
#include <QEvent>

#include <QLayout>
#include <QtCore/QVariant>
#include <QApplication>
#include <QGridLayout>
#include <QGroupBox>
#include <QHBoxLayout>
#include <QPushButton>
#include <QScrollArea>
#include <QTextBrowser>
#include <QVBoxLayout>
#include <QSpacerItem>


#include <iostream>
#include <cmath>
#include <string>
#include <sstream>


QT_BEGIN_NAMESPACE
namespace Ui { class BasicPopop; }
QT_END_NAMESPACE


class BasicPopup : public QDialog {
    Q_OBJECT

public:
    explicit BasicPopup(QWidget *parent=nullptr);

    virtual void setEnableTimer(bool b=true);

    virtual void setText(QString txt);
    virtual void setText(const std::string& txt);
    virtual void setText(const std::stringstream& txt);

    virtual void append(QString txt);
    virtual void append(const char* txt);
    virtual void append(const std::string& txt);
    virtual void append(const std::stringstream& txt);

    virtual void setTextButton(QString txt) ;
    virtual void setTextButton(const std::string& txt);
    virtual void setTextButton(const std::stringstream& txt);

    virtual void setTimerDuration(int tms=1000);
    virtual void setEnableTitleBar(bool c=true);

signals:
    void finished();

private slots:
    void on_bOK_clicked();

protected:
    void setupUi(BasicPopup* pb);
    void retranslateUI(QWidget *bp=nullptr);
    bool eventFilter ( QObject* obj, QEvent* event );

    void updateOKButton();

    bool isTimerEnable=true;

    QTimer* timer_;

    QString textButton_{"OK"};

    int count_{};
    int Duration_{5000};
    QString TextButton_{};

    QGridLayout *gridlayout0;
    QGridLayout *gridlayout1;
    QGridLayout* centralWidget;
    QHBoxLayout* buttonLayout;

    QGroupBox* groupBox;
    QTextBrowser* tbMessage;
    QPushButton* bOK;

};

