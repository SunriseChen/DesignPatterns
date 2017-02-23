#pragma once

#include "Subject.h"

namespace Sunrise { namespace DesignPatterns { namespace Observer {

// 将有关状态存入各 ConcreteObserver 对象。
// 当它的状态发生改变时，向它的各个观察者发出通知。
class ConcreteSubject : public Subject
{
    int state_;

public:
    ConcreteSubject();

    virtual int GetState() const;
    virtual void SetState(int state);
};

} } }