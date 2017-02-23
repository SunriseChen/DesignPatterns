#pragma once

#include "Flyweight.h"

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

// 实现 Flyweight 接口，并为内部状态（如果有的话）增加存储空间。ConcreteFlyweight 对象必须是可共享的。
// 它所存储的状态必须是内部的；即，它必须独立于 ConcreteFlyweight 对象的场景。
class ConcreteFlyweight : public Flyweight
{
    int intrinsicState_;

public:
    ConcreteFlyweight(int intrinsicState);

    virtual void Operation(int extrinsicState) const;
};

} } }