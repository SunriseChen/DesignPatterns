#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

class ConcreteElementA;
class ConcreteElementB;

// 为该对象结构中 ConcreteElement 的每一个类声明一个 Visit 操作。
// 该操作的名字和特征标识了发送 Visit 请求给该访问者的那个类。
// 这使得访问者可以确定正被访问元素的具体的类。这样访问者就可以通过该元素的特定接口直接访问它。
class Visitor
{
protected:
    Visitor();

public:
    virtual void VisitConcreteElementA(ConcreteElementA &element) const = 0;
    virtual void VisitConcreteElementB(ConcreteElementB &element) const = 0;
};

} } }