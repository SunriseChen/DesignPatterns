#pragma once

#include <memory>
#include "Implementor.h"

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

// 定义抽象类的接口。
// 维护一个指向 Implementor 类型对象的指针。
class Abstraction
{
    std::shared_ptr<Implementor> impl;

public:
    Abstraction(const std::shared_ptr<Implementor> &impl);

    virtual void Operation() const;
};

} } }