#ifndef IGTCLIENT_H
#define IGTCLIENT_H

#include <QTcpSocket>

#include "pissTransmissionTask.h"
#include "HandShakeMessage.h"
#include "Devices.h"
#include "Device.h"
#include "GlobalTime.h"

class igtClient : public QObject
{
    Q_OBJECT
private:
    QTcpSocket* soc;

    pissTransmissionTask *transmissionTask;
    QVector <OutputQueue*> *oq;
    Devices* devices;

    bool motivateConnectionRequest;
    int id;
    GlobalTime *globalTime;
public:
    void connect_request(QString addr, int port);
    void connectBackRequest(QString addr, int port);
    QByteArray* test();

public slots:
    void startTransfer();

public:
    igtClient(int id, QVector <OutputQueue*> *oq, Devices* devices, GlobalTime *globalTime);

};

#endif // IGTCLIENT_H
