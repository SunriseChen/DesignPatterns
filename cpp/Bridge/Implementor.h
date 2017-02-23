#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

// 定义实现类的接口，该接口不一定要与 Abstraction 的接口完全一致；事实上这两个接口可以完全不同。
// 一般来讲，Implementor 接口仅提供基本操作，而 Abstraction 则定义了基于这些基本操作的较高层次的操作。
class Implementor
{
protected:
    Implementor();

public:
    virtual void OperationImpl() const = 0;
};

} } }