#include "TestWindow.h"
#include "pissCommunicationStack.h"
#include "GlobalTime.h"
#include "igtDispatcher.h"

#include <QApplication>


int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    GlobalTime *globalTime = new GlobalTime();
    pissCommunicationStack *communicationStack = new pissCommunicationStack(globalTime);
    igtDispatcher* dispatcher = new igtDispatcher(communicationStack);
    TestWindow *window = new TestWindow(dispatcher);
    window->show();

    return a.exec();
}
