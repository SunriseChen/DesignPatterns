#pragma once

#include "Visitor.h"

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

// 实现每个由 Visitor 声明的操作。每个操作实现本算法的一部分，而该算法片断乃是对应于结构中对象的类。
// ConcreteVisitor 为该算法提供了上下文并存储它的局部状态。这一状态常常在遍历该结构的过程中累积结果。
class ConcreteVisitor1 : public Visitor
{
public:
    ConcreteVisitor1();

    virtual void VisitConcreteElementA(ConcreteElementA &element) const;
    virtual void VisitConcreteElementB(ConcreteElementB &element) const;
};

} } }