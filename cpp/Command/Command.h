#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Command {

// 声明执行操作的接口。
class Command
{
public:
    Command();

    virtual void Execute() const;
};

} } }