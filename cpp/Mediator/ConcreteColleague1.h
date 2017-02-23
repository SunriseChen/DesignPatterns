#pragma once

#include "Colleague.h"

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

// 每一个同事类都知道它的中介者对象。
// 每一个同事对象在需与其他的同事通信的时候，与它的中介者通信。
class ConcreteColleague1 : public Colleague
{
public:
    ConcreteColleague1(const Mediator &mediator);

    virtual void OperationD() const;
    virtual void OperationF() const;
};

} } }