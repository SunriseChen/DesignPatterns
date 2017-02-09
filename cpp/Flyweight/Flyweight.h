#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

// 描述一个接口，通过这个接口 flyweight 可以接受并作用于外部状态。
class Flyweight
{
protected:
    Flyweight();

public:
    virtual void Operation(int extrinsicState) const = 0;
};

} } }