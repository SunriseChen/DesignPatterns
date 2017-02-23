#pragma once

#include "Command.h"

namespace Sunrise { namespace DesignPatterns { namespace Command {

class Receiver;

// 将一个接收者对象绑定于一个动作。
// 调用接收者相应的操作，以实现 Execute。
class ConcreteCommand : public Command
{
    const Receiver &receiver_;
    int state_;

public:
    ConcreteCommand(const Receiver &receiver);

    virtual void Execute() const;
};

} } }