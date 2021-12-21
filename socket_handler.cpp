#include "socket_handler.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <unistd.h>
#include <sys/socket.h>
#include <stdio.h>
#include <new>
#include "reactor_impl.h"
#include <iostream>

SocketHandler::SocketHandler(Handle fd, ReactorImpl* reactorPtr)
 : _socket_fd(fd),
 m_reactorPtr(reactorPtr)
{
    _buf = new (std::nothrow)char[MAX_SIZE];
    assert(_buf != NULL);
    memset(_buf, 0, MAX_SIZE);
}

SocketHandler::~SocketHandler()
{
    close(_socket_fd);
    delete[] _buf;
}

void SocketHandler::handle_read()
{
    // 粘包
    std::cout<< "Start Recv";
	ssize_t recvByteLen = recv(_socket_fd, _buf, MAX_SIZE, 0);
	if ( recvByteLen > 0 ) {
        std::cout<< "Start Send";
		send( _socket_fd, _buf, sizeof(_buf), 0);
	} else {
		std::cout<<"recv() failed";
	}

    //if(read(_socket_fd, _buf, MAX_SIZE) > 0)
    //{
    //    write(_socket_fd, _buf, strlen(_buf));
    //}
    handle_error();
}

void SocketHandler::handle_write()
{

}

void SocketHandler::handle_error()
{
    m_reactorPtr->remove(this);
}