#ifndef IGTDISPATCHER_H
#define IGTDISPATCHER_H

#include "pissCommunicationStack.h"

class igtDispatcher
{
public:
    void launchCommunicationStackServer();
    void launchConnectBackProcess(bool flag/*first time or not*/,
                                  QString addr,
                                  int port);

public:
    pissCommunicationStack *communicationStack;

public:
    igtDispatcher(pissCommunicationStack *communicationStack);
};

#endif // IGTDISPATCHER_H
