#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

class Implementor;

// 定义抽象类的接口。
// 维护一个指向 Implementor 类型对象的指针。
class Abstraction
{
    const Implementor &impl_;

public:
    Abstraction(const Implementor &impl);

    virtual void Operation() const;
};

} } }