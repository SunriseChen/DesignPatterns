#pragma once

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

class Handler;

// 向链上的具体处理者(ConcreteHandler)对象提交请求。
class Client
{
public:
    Client();

    void Run(const Handler *handler) const;
};

} } }