#ifndef COMMUNICATIONSTATESCONTAINER_H
#define COMMUNICATIONSTATESCONTAINER_H

#include <QFrame>
#include <QVBoxLayout>
#include <QLabel>
#include <QTableWidget>
#include <QTreeWidget>
#include <QHeaderView>
#include <PlottingBoard.h>

/**
 * @brief The CommunicationStatesContainer class
 * @author fan de yuan
 */
class CommunicationStatesContainer : public QFrame
{
    Q_OBJECT

private:
    int width;
    int height;
    QStringList hardwareHeader;
    QStringList transmissionHeader;

    PlottingBoard *communicationFrameRateWindow;

    QWidget *CommunicationStatesContainerWidget;
    QWidget *communicationInformationWindow;
    QHBoxLayout *communicationInformationWindowLayout;

    QTableWidget *HardwareInformation;
    QTreeWidget *transmitBuffer;
    QTreeWidget *receiveBuffer;

    QVBoxLayout *CommunicationStatesContainerLayout;

public:
    explicit CommunicationStatesContainer(int width, int height);
    void initVariable();
    void constructIHM();
    void setConnections();

signals:

public slots:
};

#endif // COMMUNICATIONSTATESCONTAINER_H
