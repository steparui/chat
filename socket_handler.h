#ifndef NET_SOCKET_HANDLER_H
#define NET_SOCKET_HANDLER_H

#include "event_handler.h" 
#include "event.h"

class ReactorImpl;

class SocketHandler : public  EventHandler
{
public:
    SocketHandler(Handle fd, ReactorImpl* m_reactorPtr);
    ~SocketHandler();
    virtual Handle get_handle() const {return _socket_fd;}
    virtual void handle_read();
    virtual void handle_write();
    virtual void handle_error();

private:
    Handle _socket_fd;
    char* _buf;
    static const int MAX_SIZE = 1024;
    ReactorImpl* m_reactorPtr;
};

#endif