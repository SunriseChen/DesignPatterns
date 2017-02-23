#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

// 定义一个对象接口，可以给这些对象动态地添加职责。
class Component
{
protected:
    Component();

public:
    virtual void Operation() = 0;
};

} } }