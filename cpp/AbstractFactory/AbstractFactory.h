#pragma once

#include <memory>
#include "AbstractProductA.h"
#include "AbstractProductB.h"

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

// 声明一个创建抽象产品对象的操作接口。
class AbstractFactory
{
public:
    AbstractFactory();

    virtual std::shared_ptr<AbstractProductA> CreateProductA() const;
    virtual std::shared_ptr<AbstractProductB> CreateProductB() const;
};

} } }