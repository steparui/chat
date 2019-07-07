#include <unistd.h>
#include <sys/socket.h>
#include <stdio.h>
#include <new>
#include <assert.h>
#include "reactor_impl.h"
#include "socket_handler.h"
#include <iostream>
#include "acceptor.h"

Acceptor::Acceptor(Handle fd, ReactorImpl* reactorPtr)
: m_serverId(fd), 
m_reactorPtr(reactorPtr)
{
}

Acceptor::~Acceptor()
{
    close(m_serverId);
}

void Acceptor::handle_read()
{
    int fd = accept(m_serverId, NULL, NULL);
    std::cout << "accept" << std::endl;
    EventHandler* h = new (std::nothrow)SocketHandler(fd, m_reactorPtr);
    assert(h != NULL);
    m_reactorPtr->regist(h, ReadEvent);
}

void Acceptor::handle_write()
{
}

void Acceptor::handle_error()
{
}