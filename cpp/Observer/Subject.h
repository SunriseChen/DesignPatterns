#pragma once

#include <list>
#include "Observer.h"

namespace Sunrise { namespace DesignPatterns { namespace Observer {

// 目标知道它的观察者。可以有任意多个观察者观察同一个目标。
// 提供注册和删除观察者对象的接口。
class Subject
{
    std::list<Observer *> observers;

public:
    Subject();

    virtual void Attach(Observer *observer);
    virtual void Detach(Observer *observer);
    virtual void Notify();
};

} } }