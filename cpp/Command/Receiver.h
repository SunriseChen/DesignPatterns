#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Command {

// 知道如何实施与执行一个请求相关的操作。任何类都可能作为一个接收者。
class Receiver
{
public:
    Receiver();

    void Action() const;
};

} } }