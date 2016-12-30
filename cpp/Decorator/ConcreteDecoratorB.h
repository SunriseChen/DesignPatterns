#pragma once

#include "Decorator.h"

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

// 向组件添加职责。
class ConcreteDecoratorB : public Decorator
{
public:
    ConcreteDecoratorB(const std::shared_ptr<Component> &component);

    virtual void Operation();
    virtual void AddedBehavior() const;
};

} } }