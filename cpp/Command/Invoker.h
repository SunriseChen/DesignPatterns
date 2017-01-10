#pragma once

#include <memory>
#include "Command.h"

namespace Sunrise { namespace DesignPatterns { namespace Command {

// 要求该命令执行这个请求。
class Invoker
{
    std::shared_ptr<Command> command;

public:
    Invoker();

    void StoreCommand(const std::shared_ptr<Command> &command);
    void Run() const;
};

} } }