#include "reactor_impl.h"
#include <new>
#include <assert.h>
#include "epoll_demultiplexer.h"

ReactorImpl::ReactorImpl()
{
    _demultiplexer = new (std::nothrow)EpollDemultiplexer();
    assert(_demultiplexer != NULL);
}

ReactorImpl::~ReactorImpl()
{
    for(auto iter = _handlers.begin(); iter != _handlers.end(); iter++)
        delete iter->second;

    if(_demultiplexer == NULL)
        delete _demultiplexer;
}

int ReactorImpl::regist(EventHandler* handler, Event evt)
{
    int handle = handler->get_handle();
    if(_handlers.find(handle) == _handlers.end())
        _handlers[handle] = handler;

    return _demultiplexer->regist(handle, evt);
}

void ReactorImpl::remove(EventHandler* handler)
{
    int handle = handler->get_handle();
    _demultiplexer->remove(handle);

    auto iter = _handlers.find(handle);
    delete iter->second;
    _handlers.erase(handle);
}

void ReactorImpl::dispatch(int timeout)
{
    _demultiplexer->wait_event(_handlers, timeout);
}

void ReactorImpl::loop()
{
    while(true)
    {
        dispatch(100);
    }
}