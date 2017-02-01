#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Command {

class Command;

// 要求该命令执行这个请求。
class Invoker
{
    const Command *command;

public:
    Invoker();

    void StoreCommand(const Command *command);
    void Run() const;
};

} } }