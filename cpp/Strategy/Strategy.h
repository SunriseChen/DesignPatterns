#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

// 定义所有支持的算法的公共接口。Context 使用这个接口来调用某 ConcreteStrategy 定义的算法。
class Strategy
{
public:
    virtual void AlgorithmInterface() const = 0;

protected:
    Strategy();
};

} } }