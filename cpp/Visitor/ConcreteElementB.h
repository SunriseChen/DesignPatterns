#pragma once

#include "Element.h"

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

// 实现 Accept 操作，该操作以一个访问者为参数。
class ConcreteElementB : public Element
{
public:
    ConcreteElementB();

    virtual void Accept(const Visitor &visitor);
    void OperationB() const;
};

} } }