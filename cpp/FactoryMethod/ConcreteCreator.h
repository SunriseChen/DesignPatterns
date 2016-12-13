#pragma once

#include <memory>
#include "Creator.h"

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

// 重定义工厂方法以返回一个 ConcreteProduct 实例。
class ConcreteCreator : public Creator
{
public:
    ConcreteCreator();

    virtual std::shared_ptr<Product> FactoryMethod() const;
};

} } }