#pragma once

#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Memento {

class State;

// 备忘录存储原发器对象的内部状态。原发器根据需要决定备忘录存储原发器的哪些内部状态。
// 防止原发器以外的其他对象访问备忘录。备忘录实际上有两个接口，管理者(caretaker)
// 只能看到备忘录的窄接口————它只能将备忘录传递给其他对象。
// 相反，原发器能够看到一个宽接口，允许它访问返回到先前状态所需的所有数据。
// 理想的情况是只允许生成本备忘录的那个原发器访问本备忘录的内部状态。
class Memento
{
    std::shared_ptr<State> state;

    // 宽接口
    friend class Originator;

    Memento(const std::shared_ptr<State> &state);

    std::shared_ptr<State> GetState() const;
    void SetState(const std::shared_ptr<State> &state);

public:
    // 窄接口
};

} } }