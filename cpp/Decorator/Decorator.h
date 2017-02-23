#pragma once

#include "Component.h"

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

// 维持一个指向 Component 对象的指针，并定义一个与 Component 接口一致的接口。
class Decorator : public Component
{
    Component &component_;

protected:
    Decorator(Component &component);

public:
    virtual void Operation();
};

} } }