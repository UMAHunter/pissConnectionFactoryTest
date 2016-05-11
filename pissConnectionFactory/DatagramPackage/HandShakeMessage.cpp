#include "HandShakeMessage.h"

HandShakeMessage::HandShakeMessage()
{
}

HandShakeMessage::~HandShakeMessage(){

}

void HandShakeMessage::setDataType(unsigned char dataType){
    this->dataType = dataType;
}

void HandShakeMessage::setDeviceId(unsigned char deviceId){
    this->deviceId = deviceId;
}

void HandShakeMessage::setTimestamp(long long timestamp){
    this->timestamp = timestamp;
}

void HandShakeMessage::setDLC(int dlc){
    this->dlc = dlc;
}

void HandShakeMessage::setDeviceName(char* deviceName){
    this->deviceName = deviceName;
}

void HandShakeMessage::setLocalIP(char a, char b, char c, char d){
    this->ip[0] = a;
    this->ip[1] = b;
    this->ip[2] = c;
    this->ip[3] = d;
}

void HandShakeMessage::setLocalPort(int port){
    this->port = port;
}

QByteArray HandShakeMessage::toCDatagram(){
    QByteArray buf;
    buf.resize(38);
    buf[0] = dataType;

    buf[1] = deviceId;

    buf[2] = timestamp % long long(pow(2, 8));
    buf[3] = timestamp / long long(pow(2, 8)) % long long(pow(2, 8));
    buf[4] = timestamp / long long(pow(2, 16)) % long long(pow(2,8));
    buf[5] = timestamp / long long(pow(2, 24)) % long long(pow(2,8));
    buf[6] = timestamp / long long(pow(2, 32)) % long long(pow(2,8));
    buf[7] = timestamp / long long(pow(2, 40)) % long long(pow(2,8));
    buf[8] = timestamp / long long(pow(2, 56)) % long long(pow(2,8));
    buf[9] = timestamp / long long(pow(2, 64)) % long long(pow(2,8));

    buf[10] = (uchar)  (0x000000ff & dlc);
    buf[11] = (uchar) ((0x0000ff00 & dlc) >> 8);

    for(unsigned cpt = 0 ; cpt < 20; cpt++){
        buf[12 + cpt] = deviceName[cpt];
    }

    buf[32] = ip[0];
    buf[33] = ip[1];
    buf[34] = ip[2];
    buf[35] = ip[3];

    buf[36] = (uchar)  (0x000000ff & port);
    buf[37] = (uchar) ((0x0000ff00 & port) >> 8);

    return buf;
}

void HandShakeMessage::decodeDatagram(CDatagramme *datagram){

//    this.dataType = datagram->getDataType();
//    msg.deviceId = datagram->getDeviceId();
//    msg.timestamp = datagram->getTimestamp();
//    msg.dlc = datagram->getDLC();
//    //msg.deviceName = datagram->getValue();//to be reviewed
//    msg.ip = QString("%1.%2.%3.%4").
//        arg(quint8(datagram->getValue()->at(28))).
//        arg(quint8(datagram->getValue()->at(29))).
//        arg(quint8(datagram->getValue()->at(30))).
//        arg(quint8(datagram->getValue()->at(31)));
//    msg.port = datagram->getValue()->at(32)*100 + datagram->getValue()->at(33);
}
