#pragma once

#include "Component.h"

namespace Sunrise { namespace DesignPatterns { namespace Composite {

// 定义有子部件的那些部件的行为。
// 存储子部件。
// 在 Component 接口中实现与子部件有关的操作。
class Composite : public Component
{
    ComponentList children_;

public:
    Composite();

    virtual void Operation() const;
    virtual void Add(const ComponentPtr &component);
    virtual void Remove(const ComponentPtr &component);
    virtual const ComponentList & GetChildren() const;
    virtual const ComponentPtr & GetChild(int index) const;
};

} } }