#include "TestWindow.h"
#include "pissCommunicationStack.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    pissCommunicationStack *communicationStack = new pissCommunicationStack();
    //communicationStack->setClientThreshold(3);

    TestWindow *window = new TestWindow(communicationStack);
    window->show();

    return a.exec();
}
