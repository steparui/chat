#include <sys/socket.h>
#include <arpa/inet.h>
#include <iostream>
#include <errno.h>
#include "reactor_impl.h"
#include "event_handler.h"
#include "acceptor.h"
#include "event.h"
#include <unistd.h>
#include <signal.h>

#define MAXFD 64

// daemon progress
void daemon_init()
{
    pid_t pid;

    signal(SIGHUP, SIG_IGN);
    if((pid = fork()) < 0)
        exit(-1);
    else if(pid)
        exit(0);
    
    setsid();
}

int main()
{
    int sockfd = -1;
    if((sockfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        std::cerr << "socket error" << errno << std::endl;
        exit(-1);
    }

    struct sockaddr_in seraddr;
    seraddr.sin_family = AF_INET;
    seraddr.sin_port = htons(53031);
    seraddr.sin_addr.s_addr = htonl(INADDR_ANY);

    if((bind(sockfd, (struct sockaddr*)&seraddr, sizeof(seraddr)) < 0))
    {
        std::cerr << "bind error" << errno << std::endl;
        exit(-3);
    }
    int listenfd = listen(sockfd, 5);
    if(listen(sockfd, 5) < 0)
    {
        std::cerr << "listen error" << errno << std::endl;
        exit(-3);
    }

    //Reactor& actor = Reactor::get_instance();
    ReactorImpl* actor = new ReactorImpl();
    EventHandler* handler = new Acceptor(listenfd, actor);
    actor->regist(handler, ReadEvent);

    actor->loop();

    return 0;
}