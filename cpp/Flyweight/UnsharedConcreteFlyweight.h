#pragma once

#include "Flyweight.h"

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

// 并非所有的 Flyweight 子类都需要被共享。Flyweight 接口使共享成为可能，但它并不强制共享。
// 在 Flyweight 对象结构的某些层次，UnsharedConcreteFlyweight 对象通常将 ConcreteFlyweight
// 对象作为子节点（Row 和 Column 就是这样）。
class UnsharedConcreteFlyweight : public Flyweight
{
    int allState_;

public:
    UnsharedConcreteFlyweight(int allState);

    virtual void Operation(int extrinsicState) const;
};

} } }