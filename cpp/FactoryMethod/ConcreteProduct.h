#pragma once

#include "Product.h"

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

// 实现 Product 接口。
class ConcreteProduct : public Product
{
public:
    ConcreteProduct();
};

} } }