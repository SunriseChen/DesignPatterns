#pragma once

#include "Component.h"

namespace Sunrise { namespace DesignPatterns { namespace Composite {

// 定义有子部件的那些部件的行为。
// 存储子部件。
// 在 Component 接口中实现与子部件有关的操作。
class Composite : public Component
{
    std::list<std::shared_ptr<Component>> children;

public:
    Composite();

    virtual void Operation() const;
    virtual void Add(std::shared_ptr<Component> component);
    virtual void Remove(std::shared_ptr<Component> component);
    virtual std::list<std::shared_ptr<Component>>::iterator GetChildren();
    virtual std::shared_ptr<Component> GetChild(int index) const;
};

} } }