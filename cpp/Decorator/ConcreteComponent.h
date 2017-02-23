#pragma once

#include "Component.h"

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

// 定义一个对象，可以给这个对象添加一些职责。
class ConcreteComponent : public Component
{
public:
    ConcreteComponent();

    virtual void Operation();
};

} } }