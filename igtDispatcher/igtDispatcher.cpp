#include "igtDispatcher.h"

igtDispatcher::igtDispatcher(pissCommunicationStack *communicationStack)
{
    this->communicationStack = communicationStack;
}

void igtDispatcher::launchCommunicationStackServer(){
    this->communicationStack->launchServer();
}

void igtDispatcher::launchConnectBackProcess(bool flag, QString addr,int port){
    this->communicationStack->connectBack(flag, addr, port);
}
