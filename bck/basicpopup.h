#pragma once

#include <QWidget>
#include <QDialog>

#include <QHoverEvent>
#include <QtEvents>

#include <QTimer>

#include <string>
#include <sstream>

QT_BEGIN_NAMESPACE
namespace Ui {
class BasicPopup;
}
QT_END_NAMESPACE

class BasicPopup : public QDialog {
  Q_OBJECT

public:
  explicit BasicPopup(QWidget *parent = nullptr);
  ~BasicPopup();

  virtual void setText(QString txt);
  virtual void setText(const std::string& txt);
  virtual void setText(const std::stringstream& txt);

  virtual void append(QString txt);
  virtual void append(const std::string& txt);
  virtual void append(const std::stringstream& txt);

  virtual void setTextButton(QString txt) ;
  virtual void setTextButton(const std::string& txt);
  virtual void setTextButton(const std::stringstream& txt);

  virtual void setTimerDuration(int tms);
  virtual void setEnableTitleBar(bool c=true);

private slots:
    void on_bOK_clicked();

private:
  Ui::BasicPopup *bp;


  QString TextButton_{};

  int Duration_{};

};
