﻿#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

class Strategy;

// 用一个 ConcreteStrategy 对象来配置。
// 维护一个对 Strategy 对象的引用。
// 可定义一个接口来让 Stategy 访问它的数据。
class Context
{
    Strategy *strategy_;

public:
    Context(Strategy *strategy);

    void ContextInterface() const;
    void SetStrategy(Strategy *strategy);
};

// 将 Strategy 作为模板参数的实现方式。
template<typename TStrategy>
class ContextT
{
    TStrategy strategy_;

public:
    ContextT();

    void ContextInterface() const;
};

} } }

#include "Context.hpp"