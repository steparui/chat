#ifndef NET_LISTEN_HANDLER_H
#define NET_LISTEN_HANDLER_H

#include "event_handler.h" 
#include "event.h"

class ReactorImpl;

class Acceptor : public EventHandler
{
public:
    Acceptor(Handle fd, ReactorImpl* reactorPtr);
    virtual ~Acceptor();
    virtual Handle get_handle() const
    {
        return m_serverId;
    }

    virtual void handle_read();
    virtual void handle_write();
    virtual void handle_error();

private:
    Handle m_serverId;
    ReactorImpl* m_reactorPtr;  // to do weak ptr
};

#endif