#pragma once

#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Memento {

class State;
class Memento;

// 原发器创建一个备忘录，用以记录当前时刻它的内部状态。
// 使用备忘录恢复内部状态。
class Originator
{
    std::shared_ptr<State> state;

public:
    Originator();

    Memento * CreateMemento() const;
    void SetMemento(const Memento *memento);

    void ShowState() const;
};

} } }