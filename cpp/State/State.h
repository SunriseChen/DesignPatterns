#pragma once

namespace Sunrise { namespace DesignPatterns { namespace State {

// 定义一个接口以封装与 Context 的一个特定状态相关的行为。
class State
{
protected:
    State();

public:
    virtual void Handle() const = 0;
};

} } }