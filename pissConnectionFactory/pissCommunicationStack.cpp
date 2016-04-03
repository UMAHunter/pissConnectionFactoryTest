#include "pissCommunicationStack.h"


/**
 * @brief pissCommunicationStack::pissCommunicationStack
 * @param globalTime
 */
pissCommunicationStack::pissCommunicationStack()
{
    this->globalTime = new GlobalTime();

    networkEnvironment = new pissNetworkEnvironment();
    networkEnvironment->append(0, 10703);

    datagrammeAnalyser = new DatagrammeAnalyser(&outputQueueManager,&inputQueueManager,networkEnvironment,globalTime);
    informationDecodeTask = new pissInputInformationDecoder(&inputQueueManager,networkEnvironment,datagrammeAnalyser);
    server = new pissServer(&inputQueueManager,&outputQueueManager,networkEnvironment, datagrammeAnalyser,globalTime);

    maximumClientNumber = 0;
}

//! -------------------------------------------------------------------------------------------------------------------
//!
//! \brief pissCommunicationStack::setClientThreshold
//! \param max
//!
void pissCommunicationStack::setClientThreshold(int max){
    maximumClientNumber = max;
}

//! -------------------------------------------------------------------------------------------------------------------
//!
//! \brief pissCommunicationStack::clearBuffer
//!
void pissCommunicationStack::clearBuffer(){
    inputQueueManager.clear();
    outputQueueManager.clear();
}

//! -------------------------------------------------------------------------------------------------------------------
//!
//! \brief pissCommunicationStack::closeServer
//! \return
//!
bool pissCommunicationStack::closeServer(){
    informationDecodeTask->stop();
    return server->stopServer();
}

//! -------------------------------------------------------------------------------------------------------------------
//!
//! \brief pissCommunicationStack::launch
//!
bool pissCommunicationStack::launch(){
    informationDecodeTask->start();
    return server->launchServer();
}
