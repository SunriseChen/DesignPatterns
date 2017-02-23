#pragma once

#include <list>

namespace Sunrise { namespace DesignPatterns { namespace Observer {

class Observer;
typedef std::list<Observer *> Observers;

// 目标知道它的观察者。可以有任意多个观察者观察同一个目标。
// 提供注册和删除观察者对象的接口。
class Subject
{
    Observers observers_;

protected:
    Subject();

public:
    virtual void Attach(Observer *observer);
    virtual void Detach(Observer *observer);
    virtual void Notify();
};

} } }