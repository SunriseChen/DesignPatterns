#pragma once

#include "State.h"

namespace Sunrise { namespace DesignPatterns { namespace State {

// 每一子类实现一个与 Context 的一个状态相关的行为。
class ConcreteStateB : public State
{
public:
    ConcreteStateB();

    virtual void Handle() const;
};

} } }