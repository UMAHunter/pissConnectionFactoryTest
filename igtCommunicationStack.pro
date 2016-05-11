#-------------------------------------------------
#
# Project created by QtCreator 2016-04-02T09:45:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network core printsupport

TARGET = igtCommunicationStack
TEMPLATE = app

INCLUDEPATH += pissConnectionFactory

INCLUDEPATH += pissConnectionFactory/DatagramPackage

INCLUDEPATH += pissConnectionFactory/CommunicationStackStructure

INCLUDEPATH += pissConnectionFactory/CommunicationStackTask

INCLUDEPATH += igtDispatcher

INCLUDEPATH += pissTestIHM/GuiComponentLib

INCLUDEPATH += pissTestIHM/testWindow

RESOURCES = imageresources.qrc

SOURCES +=  main.cpp\
            pissTestIHM/GuiComponentLib/ColorChooseWindow.cpp \
            pissTestIHM/GuiComponentLib/ColorPoint.cpp \
            pissTestIHM/GuiComponentLib/CPushButton.cpp \
            pissTestIHM/GuiComponentLib/HistogramPoint.cpp \
            pissTestIHM/GuiComponentLib/PlotPoint.cpp \
            pissTestIHM/GuiComponentLib/PlottingBoard.cpp \
            pissTestIHM/GuiComponentLib/qcustomplot.cpp \
            pissTestIHM/GuiComponentLib/TransferPoint.cpp \
            pissTestIHM/testWindow/TestWindow.cpp \
            pissTestIHM/testWindow/CommunicationStatesContainer.cpp \
            pissConnectionFactory/GlobalTime.cpp \
            pissConnectionFactory/pissCommunicationStack.cpp \
            igtDispatcher/igtDispatcher.cpp \
            pissConnectionFactory/CommunicationStackStructure/Device.cpp \
            pissConnectionFactory/CommunicationStackStructure/Devices.cpp \
            pissConnectionFactory/CommunicationStackStructure/InputQueue.cpp \
            pissConnectionFactory/CommunicationStackStructure/OutputQueue.cpp \
            pissConnectionFactory/CommunicationStackTask/igtClient.cpp \
            pissConnectionFactory/CommunicationStackTask/pissInputInformationDecoder.cpp \
            pissConnectionFactory/CommunicationStackTask/pissOutputInformationEncoder.cpp \
            pissConnectionFactory/CommunicationStackTask/pissReceptionTask.cpp \
            pissConnectionFactory/CommunicationStackTask/pissServer.cpp \
            pissConnectionFactory/CommunicationStackTask/pissTransmissionTask.cpp \
            pissConnectionFactory/DatagramPackage/CDatagramme.cpp \
            pissConnectionFactory/DatagramPackage/DatagrammeAnalyser.cpp \
            pissConnectionFactory/DatagramPackage/HandShakeCommitMessage.cpp \
            pissConnectionFactory/DatagramPackage/HandShakeMessage.cpp \
            pissConnectionFactory/DatagramPackage/HelloMessage.cpp \
    SystemDataBase.cpp

HEADERS  += \
            pissTestIHM/GuiComponentLib/ColorChooseWindow.h \
            pissTestIHM/GuiComponentLib/ColorPoint.h \
            pissTestIHM/GuiComponentLib/CPushButton.h \
            pissTestIHM/GuiComponentLib/HistogramPoint.h \
            pissTestIHM/GuiComponentLib/PlotPoint.h \
            pissTestIHM/GuiComponentLib/PlottingBoard.h \
            pissTestIHM/GuiComponentLib/qcustomplot.h \
            pissTestIHM/GuiComponentLib/TransferPoint.h \
            pissTestIHM/testWindow/TestWindow.h \
            pissTestIHM/testWindow/CommunicationStatesContainer.h \
            pissConnectionFactory/GlobalTime.h \
            pissConnectionFactory/pissCommunicationStack.h \
            igtDispatcher/igtDispatcher.h \
            pissConnectionFactory/CommunicationStackStructure/Device.h \
            pissConnectionFactory/CommunicationStackStructure/Devices.h \
            pissConnectionFactory/CommunicationStackStructure/InputQueue.h \
            pissConnectionFactory/CommunicationStackStructure/OutputQueue.h \
            pissConnectionFactory/CommunicationStackTask/igtClient.h \
            pissConnectionFactory/CommunicationStackTask/pissInputInformationDecoder.h \
            pissConnectionFactory/CommunicationStackTask/pissOutputInformationEncoder.h \
            pissConnectionFactory/CommunicationStackTask/pissReceptionTask.h \
            pissConnectionFactory/CommunicationStackTask/pissServer.h \
            pissConnectionFactory/CommunicationStackTask/pissTransmissionTask.h \
            pissConnectionFactory/DatagramPackage/CDatagramme.h \
            pissConnectionFactory/DatagramPackage/DatagrammeAnalyser.h \
            pissConnectionFactory/DatagramPackage/HandShakeCommitMessage.h \
            pissConnectionFactory/DatagramPackage/HandShakeMessage.h \
            pissConnectionFactory/DatagramPackage/HelloMessage.h \
    SystemDataBase.h
