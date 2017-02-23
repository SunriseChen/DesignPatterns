#pragma once

#include "Component.h"

namespace Sunrise { namespace DesignPatterns { namespace Composite {

// 在组合中表示叶节点对象，叶节点没有子节点。
// 在组合中定义图元对象的行为。
class Leaf : public Component
{
public:
    Leaf();

    virtual void Operation() const;
};

} } }