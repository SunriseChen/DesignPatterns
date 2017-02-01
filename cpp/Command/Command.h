#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Command {

// 声明执行操作的接口。
class Command
{
protected:
    Command();

public:
    virtual void Execute() const = 0;
};

} } }