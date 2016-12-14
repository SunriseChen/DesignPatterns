#pragma once

#include "Prototype.h"

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

// 实现一个克隆自身的操作。
class ConcretePrototype2 : public Prototype
{
public:
    ConcretePrototype2();
    ConcretePrototype2(const ConcretePrototype2 &other);

    virtual std::shared_ptr<Prototype> Clone() const;
};

} } }