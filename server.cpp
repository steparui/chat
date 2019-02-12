#include <sys/socket.h>
#include <arpa/inet.h>
#include <iostream>
#include <errno.h>
#include "reactor.h"
#include "event_handler.h"
#include "listen_handler.h"
#include "event.h"

int main()
{
    int listenfd = -1;
    if((listenfd = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        std::cerr << "socket error" << errno << std::endl;
        exit(-1);
    }

    struct sockaddr_in seraddr;
    seraddr.sin_family = AF_INET;
    seraddr.sin_port = htons(53031);
    seraddr.sin_addr.s_addr = htonl(INADDR_ANY);

    if((bind(listenfd, (struct sockaddr*)&seraddr, sizeof(seraddr)) < 0))
    {
        std::cerr << "bind error" << errno << std::endl;
        exit(-3);
    }

    if(listen(listenfd, 5) < 0)
    {
        std::cerr << "listen error" << errno << std::endl;
        exit(-3);
    }

    Reactor& actor = Reactor::get_instance();
    EventHandler* handler = new ListenHandler(listenfd);
    actor.regist(handler, ReadEvent);

    while(true)
    {
        actor.dispatch(100);
    }

    return 0;
}