#pragma once

#include "Abstraction.h"

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

// 扩充由 Abstraction 定义的接口。
class RefinedAbstraction : public Abstraction
{
public:
    RefinedAbstraction(const Implementor &impl);

    virtual void Operation2() const;
};

} } }