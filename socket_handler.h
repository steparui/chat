#ifndef NET_SOCKET_HANDLER_H
#define NET_SOCKET_HANDLER_H

#include "event_handler.h" 
#include "event.h"

class SocketHandler : public  EventHandler
{
private:
    Handle _socket_fd;
    char* _buf;
    static const int MAX_SIZE = 1024;

public:
    SocketHandler(Handle fd);
    ~SocketHandler();
    virtual Handle get_handle() const {return _socket_fd;}
    virtual void handle_read();
    virtual void handle_write();
    virtual void handle_error();
};

#endif