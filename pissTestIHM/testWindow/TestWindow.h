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
#include <QLineEdit>

#include "CommunicationStatesContainer.h"
#include "igtDispatcher.h"
#include "igtClient.h"

/**
 * @brief The TestWindow class
 */
class TestWindow : public QWidget
{
    Q_OBJECT

public:
    void drawBackground();

private:
    QSize appSize;

    QFrame *toolBar;

    QLabel *AppTitleLabel;

    QLabel *ipLabel;
    QLineEdit *ipEdit;
    QLabel *portLabel;
    QLineEdit *portEdit;

    QLabel *targetIpLabel;
    QLineEdit *targetIpEdit;
    QLabel *targetPortLabel;
    QLineEdit *targetPortEdit;

    QLabel *spacerItem;

    QPushButton *launchButton;
    QPushButton *terminateButton;
    QPushButton *connectRequestButton;
    QPushButton *closeSystemButton;

    CommunicationStatesContainer *communicationStateContainer;

    QHBoxLayout *toolBarLayout;
    QVBoxLayout *myLayout;

    igtDispatcher* dispatcher;

public:
    explicit TestWindow(igtDispatcher* dispatcher);

signals:

public slots:
    void launchServer();
    void on_ConnectRequestButtonClicked();
};

#endif // TESTWINDOW_H
