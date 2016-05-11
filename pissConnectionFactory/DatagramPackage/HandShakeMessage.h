#ifndef HANDSHAKEMESSAGE_H
#define HANDSHAKEMESSAGE_H

#include "CDatagramme.h"


/**
 * @brief The HandShakeMessage class
 */
class HandShakeMessage{

private:
    unsigned char dataType;
    unsigned char deviceId;
    long long timestamp;
    int dlc;
    char* deviceName;
    char ip[4];
    int port;
public:
    QByteArray toCDatagram();
    void decodeDatagram(CDatagramme* datagram);

    void setDataType(unsigned char dataType);
    void setDeviceId(unsigned char deviceId);
    void setTimestamp(long long timestamp);
    void setDLC(int dlc);
    void setDeviceName(char* deviceName);
    void setLocalIP(char a, char b, char c, char d);
    void setLocalPort(int port);
public:
    HandShakeMessage();
    ~HandShakeMessage();
};

#endif // HANDSHAKEMESSAGE_H
