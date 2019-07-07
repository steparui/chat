#ifndef SOCKET_INTERNAL_H 
#define SOCKET_INTERNAL_H

class Socket
{
public:
    Socket(int port, int protocol);
    int listen();
private:
    int sockfd;
    int port;
};

#endif