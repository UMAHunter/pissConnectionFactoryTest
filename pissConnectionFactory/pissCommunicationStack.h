#ifndef PISSCOMMUNICATIONSTACK_H
#define PISSCOMMUNICATIONSTACK_H

#include "pissInputInformationDecoder.h"
#include "pissNetworkEnvironment.h"
#include "DatagrammeAnalyser.h"
#include "InputQueue.h"
#include "OutputQueue.h"
#include "pissServer.h"
#include "GlobalTime.h"


/**
 * @brief The pissCommunicationStack class
 */
class pissCommunicationStack
{
private:
    pissNetworkEnvironment *networkEnvironment;

    QVector <InputQueue*> inputQueueManager;
    QVector <OutputQueue*> outputQueueManager;

    DatagrammeAnalyser *datagrammeAnalyser;
    pissInputInformationDecoder *informationDecodeTask;
    pissServer *server;
    GlobalTime *globalTime;

    int maximumClientNumber;

public:
    bool launch();
    bool closeServer();
    void clearBuffer();

    void setClientThreshold(int max);

public:
    pissCommunicationStack();
};

#endif // PISSCOMMUNICATIONSTACK_H
