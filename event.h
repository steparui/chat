#ifndef NET_EVENT_H
#define NET_EVENT_H

typedef unsigned int Event;
enum EventMask
{
    ReadEvent = 0x01,
    WriteEvent = 0x02,
    ErrorEvent = 0x04,
    EventMask = 0xff
};

#endif