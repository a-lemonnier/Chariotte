#pragma once

#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QSpacerItem>
#include <QHBoxLayout>
#include <QSizePolicy>
#include <QColor>

#include <QHoverEvent>
#include <QChildEvent>
#include <QtEvents>

#include <QTimer>

#include <QDebug>

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <tuple>
#include <cmath>
#include <algorithm>

#include <utilities/chariotte_utils.h>

#include <widgets/blinkablepushbutton.h>
#include <widgets/interactivelabel.h>

QT_BEGIN_NAMESPACE
namespace Ui { class popupEditIngredient;}
QT_END_NAMESPACE

class popupEditIngredient : public QDialog {
    Q_OBJECT

public:
    explicit popupEditIngredient(QWidget *parent = nullptr);
    ~popupEditIngredient();

    void setColumnCount(int c=0);
    void updateColumn();
    void addColumn();
    void addColumn(const QString& colname);
    void removeLastColumn();

    void resetColumns();

    bool eventFilter(QObject * obj,  QEvent * event) override;


private slots:
    void on_bCancel_clicked();

    void on_bDelCol_clicked();

    void on_bAddCol_clicked();

    void on_bOK_clicked();

protected:
    int ColNumber_{};
private:
    Ui::popupEditIngredient *ei;




    std::map<QLabel*, QLineEdit*> mColunm{};

};





