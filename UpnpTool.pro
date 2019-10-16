TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
INCLUDEPATH += ./\
    src/Net

QMAKE_LIBS += -lpthread \
    -lm \
    -ldl \
    -lrt\
    -lminiupnpc
SOURCES += \
        main.cpp \
    src/Net/Acceptor.cpp \
    src/Net/BufferReader.cpp \
    src/Net/BufferWriter.cpp \
    src/Net/EpollTaskScheduler.cpp \
    src/Net/EventLoop.cpp \
    src/Net/Logger.cpp \
    src/Net/MemoryManager.cpp \
    src/Net/NetInterface.cpp \
    src/Net/Pipe.cpp \
    src/Net/SelectTaskScheduler.cpp \
    src/Net/SocketUtil.cpp \
    src/Net/TaskScheduler.cpp \
    src/Net/TcpConnection.cpp \
    src/Net/TcpServer.cpp \
    src/Net/TcpSocket.cpp \
    src/Net/Timer.cpp \
    src/Net/Timestamp.cpp \
    upnpmapper.cpp

HEADERS += \
    src/Net/Acceptor.h \
    src/Net/BufferReader.h \
    src/Net/BufferWriter.h \
    src/Net/Channel.h \
    src/Net/EpollTaskScheduler.h \
    src/Net/EventLoop.h \
    src/Net/log.h \
    src/Net/Logger.h \
    src/Net/MemoryManager.h \
    src/Net/NetInterface.h \
    src/Net/Pipe.h \
    src/Net/RingBuffer.h \
    src/Net/SelectTaskScheduler.h \
    src/Net/Socket.h \
    src/Net/SocketUtil.h \
    src/Net/TaskScheduler.h \
    src/Net/TcpConnection.h \
    src/Net/TcpServer.h \
    src/Net/TcpSocket.h \
    src/Net/Timer.h \
    src/Net/Timestamp.h \
    upnpmapper.h
