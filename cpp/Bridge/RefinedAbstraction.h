#pragma once

#include "Abstraction.h"
#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

// 扩充由 Abstraction 定义的接口。
class RefinedAbstraction : public Abstraction
{
public:
    RefinedAbstraction(const std::shared_ptr<Implementor> &impl);

    virtual void Operation2() const;
};

} } }