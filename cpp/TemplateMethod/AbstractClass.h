#pragma once

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

// 定义抽象的原语操作（primitive operation），具体的子类将重定义它们以实现一个算法的各步骤。
// 实现一个模板方法，定义一个算法的骨架。该模板方法不仅调用原语操作，也调用定义在 AbstractClass 或其他对象中的操作。
class AbstractClass
{
protected:
    AbstractClass();

    virtual void PrimitiveOperation1() const = 0;
    virtual void PrimitiveOperation2() const = 0;

public:
    void TemplateMethod() const;
};

} } }