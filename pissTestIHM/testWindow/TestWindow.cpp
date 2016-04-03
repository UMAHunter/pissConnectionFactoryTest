#include "TestWindow.h"

TestWindow::TestWindow(pissCommunicationStack *_communicationStack) : QWidget()
{
    //! receive attributes
    communicationStack = _communicationStack;

    //! initialisation

    //! construct humain machine interface
    launchButton = new QPushButton("launch");

    toolBar = new QFrame();
    toolBar->setFixedHeight(50);
    toolBarLayout = new QHBoxLayout(toolBar);
    toolBarLayout->addWidget(launchButton);

    communicationStateContainer = new CommunicationStatesContainer(550, 650);
    myLayout = new QVBoxLayout(this);
    myLayout->addWidget(toolBar);
    myLayout->addWidget(communicationStateContainer);
    myLayout->setSpacing(0);
    myLayout->setMargin(0);
}


