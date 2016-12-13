#pragma once

#include "AbstractFactory.h"

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

// 实现创建具体产品对象的操作。
class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();

    virtual std::shared_ptr<AbstractProductA> CreateProductA() const;
    virtual std::shared_ptr<AbstractProductB> CreateProductB() const;
};

} } }