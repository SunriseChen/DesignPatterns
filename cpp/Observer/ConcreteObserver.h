#pragma once

#include "Observer.h"

namespace Sunrise { namespace DesignPatterns { namespace Observer {

class ConcreteSubject;

// 维护一个指向 ConcreteSubject 对象的引用。
// 存储有关状态，这些状态应与目标的状态保持一致。
// 实现 Observer 的更新接口以使自身状态与目标的状态保持一致。
class ConcreteObserver : public Observer
{
    ConcreteSubject &subject_;
    int state_;

public:
    ConcreteObserver(ConcreteSubject &subject);

    virtual void Update();
    void SetState();
    void ShowState() const;
};

} } }