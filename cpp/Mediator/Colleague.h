#pragma once

#include "Mediator.h"

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

// 每一个同事类都知道它的中介者对象。
// 每一个同事对象在需与其他的同事通信的时候，与它的中介者通信。
class Colleague
{
protected:
    const Mediator &mediator;

public:
    Colleague(const Mediator &mediator);

    virtual void OperationD() const;
    virtual void OperationE() const;
};

} } }