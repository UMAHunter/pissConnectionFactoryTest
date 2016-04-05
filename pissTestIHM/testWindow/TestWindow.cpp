#include "TestWindow.h"

TestWindow::TestWindow(pissCommunicationStack *_communicationStack) : QWidget()
{
    //! receive attributes
    communicationStack = _communicationStack;

    //! init
    appSize = QGuiApplication::primaryScreen()->availableSize()*0.7;

    //! ihm decoration
    setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint);
    setWindowOpacity(1);
    setMouseTracking(true);
    setAutoFillBackground(true);

    //! construct humain machine interface
    launchButton = new QPushButton("launch");
    launchButton->setFixedSize(appSize.width()*0.1, appSize.height()*0.05);
    launchButton->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: teal; color: beige");
    launchButton->setFlat(true);
    launchButton->setFont(QFont("Helvetica",12, QFont::AnyStyle, true));

    terminateButton = new QPushButton("terminate");
    terminateButton->setFixedSize(appSize.width()*0.1, appSize.height()*0.05);
    terminateButton->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: teal; color: beige");
    terminateButton->setFlat(true);
    terminateButton->setFont(QFont("Helvetica",12, QFont::AnyStyle, true));

    standByButton = new QPushButton("standby");
    standByButton->setFixedSize(appSize.width()*0.1, appSize.height()*0.05);
    standByButton->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: teal; color: beige");
    standByButton->setFlat(true);
    standByButton->setFont(QFont("Helvetica",12, QFont::AnyStyle, true));

    toolBarItem = new QLabel();
    toolBarItem->setFixedSize(appSize.width()*0.65, appSize.height()*0.05);

    closeSystemButton = new QPushButton("X");
    closeSystemButton->setFixedSize(appSize.width()*0.05, appSize.height()*0.05);
    closeSystemButton->setStyleSheet( "border: 0px solid gainsboro;  border-radius: 0px; background-color: transparent;  min-width: 0px; color: red");
    closeSystemButton->setFlat(true);
    closeSystemButton->setFont(QFont("Segoe UI",12, QFont::AnyStyle, true));

    toolBar = new QFrame();
    toolBar->setFixedHeight(appSize.height()*0.05);
    toolBarLayout = new QHBoxLayout(toolBar);
    toolBarLayout->addWidget(launchButton);
    toolBarLayout->addWidget(terminateButton);
    toolBarLayout->addWidget(standByButton);
    toolBarLayout->addWidget(toolBarItem);
    toolBarLayout->addWidget(closeSystemButton);
    toolBarLayout->setSpacing(1);
    toolBarLayout->setMargin(0);

    communicationStateContainer = new CommunicationStatesContainer(appSize.width(), appSize.height()*0.95);
    myLayout = new QVBoxLayout(this);
    myLayout->addWidget(toolBar);
    myLayout->addWidget(communicationStateContainer);
    myLayout->setSpacing(0);
    myLayout->setMargin(0);
    resize(appSize);
    drawBackground();

    connect(closeSystemButton, SIGNAL(clicked()), this, SLOT(close()));
}

void TestWindow::drawBackground(){
    QPixmap *pixmap = new QPixmap(":/images/background.png");
    QPalette p =  this->palette();

    p.setBrush(QPalette::Background,
               QBrush(pixmap->scaled(QSize(appSize.width(), appSize.height()),
                                     Qt::IgnoreAspectRatio,
                                     Qt::SmoothTransformation)));

    this->setPalette(p);
    this->setMask(pixmap->mask());
}
