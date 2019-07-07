#include<sys/socket.h>
#include<arpa/inet.h>

#include"socket_internal.h"

Socket::Socket(int port, int protocol) : sockfd(-1)
{

}

int Socket::listen()
{
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if(sockfd < 0)
    {
        return sockfd;
    }

    struct sockaddr_in svrAddr;
    svrAddr.sin_family = AF_INET;
    svrAddr.sin_port = htons(port);
    svrAddr.sin_addr.s_addr = htonl(INADDR_ANY);

    if((bind(sockfd, (struct sockaddr*)&svrAddr, sizeof(svrAddr))) < 0)
    {
        return sockfd;
    }

    if(::listen(sockfd, 128) < 0)
    {
        return sockfd;
    }
    return 0;
}

