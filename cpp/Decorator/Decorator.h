#pragma once

#include "Component.h"
#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

// 维持一个指向 Component 对象的指针，并定义一个与 Component 接口一致的接口。
class Decorator : public Component
{
    std::shared_ptr<Component> component;

public:
    Decorator(const std::shared_ptr<Component> &component);

    virtual void Operation();
};

} } }