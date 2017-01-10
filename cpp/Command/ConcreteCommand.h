#pragma once

#include "Command.h"
#include <memory>
#include "Receiver.h"

namespace Sunrise { namespace DesignPatterns { namespace Command {

// 将一个接收者对象绑定于一个动作。
// 调用接收者相应的操作，以实现 Execute。
class ConcreteCommand : public Command
{
    std::shared_ptr<Receiver> receiver;
    int state;

public:
    ConcreteCommand(const std::shared_ptr<Receiver> &receiver);

    virtual void Execute() const;
};

} } }