#pragma once

#include <QLabel>
#include <QObject>
#include <QWidget>

#include <QTimer>
#include <QPixmap>

#include <iostream>
#include <map>

enum class StateType;

typedef class StatusStyle {
public:
    explicit StatusStyle();
    explicit StatusStyle(const StateType st);
    QString styleSheet() const;

    void setColorRGB(int r, int g, int b);
    void setColorRGB(const QString rgb);

    void setSize(int size);
    void setColor(const QString& color);


private:
    QString Font_{};
    QString Size_{8};
    QString Color_{};
    QString StyleSheet_{};
} StatusStyle;


class StatusLabel : public QLabel {
    Q_OBJECT

public:

    explicit StatusLabel (QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    virtual ~StatusLabel();

    void setStatus(StateType s);

    void initLabel();

    void updateStatus();
    void clearStatus();

    void animate();

    const StatusStyle  getStatus() const;

private:
    QTimer* AnimationTimer_;
    int AnimationCount_{};
    int AnimationPeriod_{};
    int AnimationTick_{};

    QPixmap* Pixmap_{};
    QString PixmapPath_{};

    StatusStyle CurrentStatus_{};

    static std::map<StateType, const char*> StyleMap_;


};
