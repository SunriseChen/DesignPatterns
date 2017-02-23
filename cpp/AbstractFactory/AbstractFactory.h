#pragma once

#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class AbstractProductA;
class AbstractProductB;

// 声明一个创建抽象产品对象的操作接口。
class AbstractFactory
{
protected:
    AbstractFactory();

public:
    virtual std::shared_ptr<AbstractProductA> CreateProductA() const = 0;
    virtual std::shared_ptr<AbstractProductB> CreateProductB() const = 0;
};

} } }