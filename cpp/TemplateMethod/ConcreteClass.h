#pragma once

#include "AbstractClass.h"

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

// 实现原语操作以完成算法中与特定子类相关的步骤。
class ConcreteClass : public AbstractClass
{
public:
    ConcreteClass();

protected:
    virtual void PrimitiveOperation1() const;
    virtual void PrimitiveOperation2() const;
};

} } }