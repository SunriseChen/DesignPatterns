#pragma once

#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

class Product;

// 声明工厂方法，该方法返回一个 Product 类型的对象。Creator 也可以定义一个工厂方法的缺省实现，它返回一个缺省的 ConcreteProduct 对象。
// 可以调用工厂方法以创建一个 Product 对象。
class Creator
{
    std::shared_ptr<Product> product;

protected:
    Creator();

    virtual std::shared_ptr<Product> FactoryMethod() const = 0;

public:
    void AnOperation() const;
    const std::shared_ptr<Product> & GetProduct();
};

} } }