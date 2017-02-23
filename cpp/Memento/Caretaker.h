#pragma once

#include <memory>
#include "Memento.h"

namespace Sunrise { namespace DesignPatterns { namespace Memento {

// 负责保存好备忘录。
// 不能对备忘录的内容进行操作或检查。
class Caretaker
{
    std::unique_ptr<Memento> memento_;

public:
    Caretaker();

    void Execute();
    void Unexecute();
};

} } }