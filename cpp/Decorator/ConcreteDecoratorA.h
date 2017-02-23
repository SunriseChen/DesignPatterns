#pragma once

#include "Decorator.h"

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

// 向组件添加职责。
class ConcreteDecoratorA : public Decorator
{
    int addedState_;

public:
    ConcreteDecoratorA(Component &component);

    virtual void Operation();
};

} } }