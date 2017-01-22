#pragma once

#include "Strategy.h"

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

// 以 Strategy 接口实现某具体算法。
class ConcreteStrategyB : public Strategy
{
public:
    ConcreteStrategyB();

    virtual void AlgorithmInterface() const;
};

} } }