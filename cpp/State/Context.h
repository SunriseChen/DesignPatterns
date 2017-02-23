#pragma once

namespace Sunrise { namespace DesignPatterns { namespace State {

class State;

// 定义客户感兴趣的接口。
// 维护一个 ConcreteState 子类的实例，这个实例定义当前状态。
class Context
{
    State *state;

public:
    Context();

    void Request() const;
    void Change(State *state);
};

} } }