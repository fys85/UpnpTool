// PHZ
// 2018-5-15
//封装了一些套接字功能函数
#ifndef XOP_SOCKET_UTIL_H
#define XOP_SOCKET_UTIL_H

#include "Socket.h"
#include <string>
#include <random>
namespace xop
{
    
class SocketUtil
{
public:
    static bool bind(SOCKET sockfd, std::string ip, uint16_t port);
    static bool random_bind(SOCKET sockfd,int max_try_times=30000);
    static void setNonBlock(SOCKET fd);
    static void setRecvBlockTime(SOCKET fd,int ms);
    static void setBlock(SOCKET fd, int writeTimeout=0);
    static void setReuseAddr(SOCKET fd);
    static void setReusePort(SOCKET sockfd);
    static void setNoDelay(SOCKET sockfd);
    static void setKeepAlive(SOCKET sockfd);
    static void setNoSigpipe(SOCKET sockfd);
    static void setSendBufSize(SOCKET sockfd, int size);
    static void setRecvBufSize(SOCKET sockfd, int size);
    static std::string getPeerIp(SOCKET sockfd);
    static uint16_t getPeerPort(SOCKET sockfd);
    static uint16_t getLocalPort(SOCKET sockfd);
    static int getPeerAddr(SOCKET sockfd, struct sockaddr_in *addr);
    static void close(SOCKET sockfd);
    static bool connect(SOCKET sockfd, std::string ip, uint16_t port, int timeout=0);
};

}

#endif // _SOCKET_UTIL_H




