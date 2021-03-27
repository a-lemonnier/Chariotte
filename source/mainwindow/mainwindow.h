#pragma once

#include <QMainWindow>

#include <QLocale>
#include <QTranslator>

#include <QMenuBar>
#include <QMenu>
#include <QStackedWidget>
#include <QTextBrowser>

#include <QFontMetrics>
#include <QSizePolicy>

#include <QEvent>

#include <QPainter>
#include <QPaintEngine>
#include <QGraphicsScene>
#include <QGraphicsView>

#include <QPixmap>

#include<QStylePainter>
#include <QProxyStyle>
#include <qstyleoption.h>



#include <string>
#include <sstream>
#include <algorithm>




#include "popupeditingredient.h"
#include "popupsysinfo.h"
#include "popupabout.h"
#include "widgets/statuslabel.h"


#include "utilities/chariotte_utils.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QTranslator *translator=nullptr, QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_cbHideLog_stateChanged(int arg1);

    void on_pbAddIngredient_clicked();

    void on_bQuit_clicked();

    // Tests --
    void on_bTest_clicked();
    void on_bPrintListIngredients_clicked();
    void on_bPrintSysInfo_clicked();
    // --

    void on_rbFrench_clicked();
    void on_rbEnglish_clicked();
    void on_rbGerman_clicked();

    void showAbout();
    void ToggleDebugPanel(bool b);

    void on_keySequenceEdit_keySequenceChanged(const QKeySequence &keySequence);
    void on_tbChariotte_tabBarClicked(int index);
    void on_gbChariotte_toggled(bool arg1);
    void on_bToggleLeftPanel_clicked();


    void on_bToggleRightPanel_clicked();

private:
    bool eventFilter(QObject* obj, QEvent* event);
    void paintEvent(QPaintEvent *event);

    void hideLeftPanel();
    void showLeftPanel();
    void hideRightPanel();
    void showRightPanel();
    void initStyleVar();

    void updateProgressBar_K2000();

    Ui::MainWindow *ui;

    QTranslator *translator;

    QTimer* ProgressBarTimer_K2000{};
    int ProgressBarTimerPeriod_K2000{33};
    float ProgressBarStepSign{1};
    float ProgressBarValue{};

    popupSysInfo *SI{};
    popupEditIngredient *EditIngredient{};
    popupAbout *About{};

    int LeftPanelSize_{};
    int RightPanelSize_{};

    QString StylePanelOn{};
    QString StylePanelOff{};

    bool isRightPanelVisible=true;
    bool isLeftPanelVisible=true;
};



//      ***********************
//    ******* PROXY S ******
// **********************

class CustomTabStyle : public QProxyStyle {
public:

   void drawItemText(QPainter *painter, const QRect &rect, int flags, const QPalette &pal, bool enabled, const QString &text, QPalette::ColorRole textRole = QPalette::NoRole) const {

       if (text=="Chariotte") {
           QTransform T{};
           T.translate(15, 125);
           T.scale(1.25, 1.25);

           painter->setTransform(T);
           painter->rotate(-90);

           painter->setFont(QFont(painter->font().family(), 1.1*painter->font().pointSize()));
       }
       if (text=="Chariotte") {

       }

       QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
}


};
