#pragma once

#include "Prototype.h"

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

// 实现一个克隆自身的操作。
class ConcretePrototype1 : public Prototype
{
public:
    ConcretePrototype1();
    ConcretePrototype1(const ConcretePrototype1 &other);

    virtual std::shared_ptr<Prototype> Clone() const;
};

} } }