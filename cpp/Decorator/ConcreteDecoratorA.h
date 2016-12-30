#pragma once

#include "Decorator.h"

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

// 向组件添加职责。
class ConcreteDecoratorA : public Decorator
{
    int addedState;

public:
    ConcreteDecoratorA(const std::shared_ptr<Component> &component);

    virtual void Operation();
};

} } }