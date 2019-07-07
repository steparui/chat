#ifndef NET_EVENT_HANDLER_H
#define NET_EVENT_HANDLER_H

typedef int Handle;
class EventHandler
{
public:
    EventHandler(){}
    virtual ~EventHandler(){}

    //virtual  void HandlerEvent();
    virtual Handle get_handle() const = 0;
    virtual void handle_read() = 0;
    virtual void handle_write() = 0;
    virtual void handle_error() = 0;
};

#endif