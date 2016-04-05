#include "CommunicationStatesContainer.h"

CommunicationStatesContainer::CommunicationStatesContainer(int width, int height): QFrame()
{
    this->width = width;
    this->height = height;
    this->setFixedSize(this->width, this->height);

    this->initVariable();
    this->constructIHM();
    this->setConnections();
}

//! ---------------------------------------------------------------------------------------------------
//!
//! \brief CommunicationStatesContainer::initVariable
//!
void CommunicationStatesContainer::initVariable(){

    hardwareHeader<<"device"<<"address"<<"port"<<"transmission"<<"reception"<<"control";

    transmissionHeader<<"channel"<<"version"<<"type"<<"device"<<"timestamp"<<"dlc"<<"data0"<<"data1"<<"data2"<<"data3"<<"data4"<<"data5"<<"data6"<<"data7"<<"data8"<<"data9"<<"data10"<<"...";
}

//! ---------------------------------------------------------------------------------------------------
//!
//! \brief CommunicationStatesContainer::constructIHM
//!
void CommunicationStatesContainer::constructIHM(){

    this->HardwareInformation = new QTableWidget(4, 6);
    this->HardwareInformation->setFixedSize(0.5*width, 0.3*height);
    this->HardwareInformation->setHorizontalHeaderLabels(hardwareHeader);
    this->HardwareInformation->verticalHeader()->setVisible(false);
    this->HardwareInformation->setStyleSheet("color: teal;background-color: rgba(0,0,0,0);border: 0px groove gray;gridline-color: lightYellow;");
    this->HardwareInformation->resizeColumnsToContents();
    this->communicationFrameRateWindow = new PlottingBoard();
    this->communicationFrameRateWindow->setFixedSize(0.5*width, 0.3*height);

    this->communicationInformationWindow = new QWidget();
    this->communicationInformationWindowLayout = new QHBoxLayout(communicationInformationWindow);
    this->communicationInformationWindowLayout->addWidget(this->HardwareInformation);
    this->communicationInformationWindowLayout->addWidget(this->communicationFrameRateWindow);
    this->communicationInformationWindowLayout->setSpacing(0);
    this->communicationInformationWindowLayout->setMargin(0);

    transmitBuffer = new QTreeWidget();
    transmitBuffer->setStyleSheet("background-color:transparent;gridline-color: rgba(125, 125, 125, 125);color: rgb(255, 255, 255);");
    transmitBuffer->setFixedHeight(0.35*height);
    transmitBuffer->setFixedHeight(0.35*height);
    transmitBuffer->setColumnCount(18);
    transmitBuffer->setHeaderLabels(transmissionHeader);//configurer les titres de chaque colone
    transmitBuffer->header()->setStyleSheet("QHeaderView::section {background-color:transparent;color:teal; padding-left:4px; border: 1px solid #6c6c6c}");
    transmitBuffer->setColumnWidth(0, 60);
    transmitBuffer->setColumnWidth(1, 50);
    transmitBuffer->setColumnWidth(2, 50);
    transmitBuffer->setColumnWidth(3, 60);
    transmitBuffer->setColumnWidth(4, 50);
    transmitBuffer->setColumnWidth(5, 50);
    transmitBuffer->setColumnWidth(6, 50);
    transmitBuffer->setColumnWidth(7, 50);
    transmitBuffer->setColumnWidth(8, 50);
    transmitBuffer->setColumnWidth(9, 50);
    transmitBuffer->setColumnWidth(10, 50);
    transmitBuffer->setColumnWidth(11, 50);
    transmitBuffer->setColumnWidth(12, 50);
    transmitBuffer->setColumnWidth(13, 50);
    transmitBuffer->setColumnWidth(14, 50);
    transmitBuffer->setColumnWidth(15, 50);
    transmitBuffer->setColumnWidth(16, 50);
    transmitBuffer->setColumnWidth(17, 20);
    transmitBuffer->setSelectionBehavior ( QAbstractItemView::SelectRows);

    receiveBuffer = new QTreeWidget();
    receiveBuffer->setStyleSheet("background-color:transparent;gridline-color: rgba(125, 125, 125, 125);color: rgb(255, 255, 255);");
    receiveBuffer->setFixedHeight(0.35*height);
    receiveBuffer->setColumnCount(14);
    receiveBuffer->setHeaderLabels(transmissionHeader);//configurer les titres de chaque colone
    receiveBuffer->header()->setStyleSheet("QHeaderView::section {background-color:transparent;color:teal; padding-left:4px; border: 1px solid #6c6c6c}");

    receiveBuffer->setColumnWidth(0, 60);
    receiveBuffer->setColumnWidth(1, 50);
    receiveBuffer->setColumnWidth(2, 50);
    receiveBuffer->setColumnWidth(3, 60);
    receiveBuffer->setColumnWidth(4, 50);
    receiveBuffer->setColumnWidth(5, 50);
    receiveBuffer->setColumnWidth(6, 50);
    receiveBuffer->setColumnWidth(7, 50);
    receiveBuffer->setColumnWidth(8, 50);
    receiveBuffer->setColumnWidth(9, 50);
    receiveBuffer->setColumnWidth(10, 50);
    receiveBuffer->setColumnWidth(11, 50);
    receiveBuffer->setColumnWidth(12, 50);
    receiveBuffer->setColumnWidth(13, 50);
    receiveBuffer->setColumnWidth(14, 50);
    receiveBuffer->setColumnWidth(15, 50);
    receiveBuffer->setColumnWidth(16, 50);
    receiveBuffer->setColumnWidth(17, 20);
    receiveBuffer->setSelectionBehavior ( QAbstractItemView::SelectRows);

    this->CommunicationStatesContainerLayout = new QVBoxLayout(this);
    this->CommunicationStatesContainerLayout->addWidget(communicationInformationWindow);
    this->CommunicationStatesContainerLayout->addWidget(transmitBuffer);
    this->CommunicationStatesContainerLayout->addWidget(receiveBuffer);
    this->CommunicationStatesContainerLayout->setSpacing(0);
    this->CommunicationStatesContainerLayout->setMargin(0);
}

//! ---------------------------------------------------------------------------------------------------
//!
//! \brief CommunicationStatesContainer::setConnections
//!
void CommunicationStatesContainer::setConnections(){

}
