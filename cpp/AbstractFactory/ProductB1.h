#pragma once

#include "AbstractProductB.h"

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

// 定义一个将被相应的具体工厂创建的产品对象。
// 实现 AbstractProduct 接口。
class ProductB1 : public AbstractProductB
{
public:
    ProductB1();
};

} } }