#pragma once

#include "Colleague.h"

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

// 每一个同事类都知道它的中介者对象。
// 每一个同事对象在需与其他的同事通信的时候，与它的中介者通信。
class ConcreteColleague2 : public Colleague
{
public:
    ConcreteColleague2(const Mediator &mediator);

    virtual void OperationE() const;
    virtual void OperationG() const;
};

} } }