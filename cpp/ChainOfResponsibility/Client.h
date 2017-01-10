#pragma once

#include "Handler.h"

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

// 向链上的具体处理者(ConcreteHandler)对象提交请求。
class Client
{
public:
    Client();

    void Run(const std::shared_ptr<Handler> &handler) const;
};

} } }