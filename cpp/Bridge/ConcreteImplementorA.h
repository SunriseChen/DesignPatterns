#pragma once

#include "Implementor.h"

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

// 实现 Implementor 接口并定义它的具体实现。
class ConcreteImplementorA : public Implementor
{
public:
    ConcreteImplementorA();

    virtual void OperationImpl() const;
};

} } }