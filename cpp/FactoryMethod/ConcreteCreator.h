#pragma once

#include "Creator.h"

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

// 重定义工厂方法以返回一个 ConcreteProduct 实例。
class ConcreteCreator : public Creator
{
public:
    ConcreteCreator();

protected:
    virtual ProductPtr FactoryMethod() const;
};

} } }