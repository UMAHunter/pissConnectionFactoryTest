#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QWidget>
#include <QFrame>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGuiApplication>
#include <QScreen>
#include <QPixmap>
#include <QBrush>
#include <QBitmap>
#include <QLabel>

#include "CommunicationStatesContainer.h"
#include "pissCommunicationStack.h"

class TestWindow : public QWidget
{
    Q_OBJECT

public:
    void drawBackground();

private:
    QSize appSize;

    QFrame *toolBar;

    QPushButton *launchButton;
    QPushButton *terminateButton;
    QPushButton *standByButton;
    QPushButton *closeSystemButton;

    QLabel *toolBarItem;

    CommunicationStatesContainer *communicationStateContainer;

    QHBoxLayout *toolBarLayout;
    QVBoxLayout *myLayout;

    pissCommunicationStack *communicationStack;

public:
    explicit TestWindow(pissCommunicationStack *_communicationStack);

signals:

public slots:
};

#endif // TESTWINDOW_H
