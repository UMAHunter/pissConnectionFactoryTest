#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QWidget>
#include <QFrame>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGuiApplication>
#include <QScreen>
#include "CommunicationStatesContainer.h"
#include "pissCommunicationStack.h"

class TestWindow : public QWidget
{
    Q_OBJECT

private:
    QFrame *toolBar;
    QHBoxLayout *toolBarLayout;
    QPushButton *launchButton;

    CommunicationStatesContainer *communicationStateContainer;
    QVBoxLayout *myLayout;
    pissCommunicationStack *communicationStack;

public:
    explicit TestWindow(pissCommunicationStack *_communicationStack);

signals:

public slots:
};

#endif // TESTWINDOW_H
