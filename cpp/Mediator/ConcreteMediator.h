#pragma once

#include "Mediator.h"

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

// 具体中介者通过协调各同事对象实现协作行为。
// 了解并维护它的各个同事。
class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator();

    virtual void OperationA() const;
    virtual void OperationB() const;
};

} } }