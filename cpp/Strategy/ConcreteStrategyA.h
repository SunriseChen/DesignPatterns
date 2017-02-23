#pragma once

#include "Strategy.h"

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

// 以 Strategy 接口实现某具体算法。
class ConcreteStrategyA : public Strategy
{
public:
    ConcreteStrategyA();

    virtual void AlgorithmInterface() const;
};

} } }