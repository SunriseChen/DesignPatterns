#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Command {

// 创建一个具体命令对象并设定它的接收者。
class Client
{
public:
    Client();

    void Run() const;
};

} } }