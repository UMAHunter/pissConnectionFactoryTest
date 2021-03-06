#ifndef CDATAGRAMME_H
#define CDATAGRAMME_H

#include <string.h>
#include <cmath>
#include <QByteArray>
#include <qDebug>

class CDatagramme
{
public:

    CDatagramme();
    ~CDatagramme();

    void setValue(QByteArray* value);
    void setTimestamp(qint32 time);
    void printSelf();

    unsigned char getDataType();
    unsigned char getDeviceId();
    QString getTimestamp();
    int getDLC();
    QByteArray* getValue();

private:
    int totalLength;
    QByteArray* value;
};

#endif // CDATAGRAMME_H
