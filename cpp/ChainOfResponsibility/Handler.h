#pragma once

#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

// 定义一个处理请求的接口。
// （可选）实现后继链。
class Handler
{
    std::shared_ptr<Handler> successor;

public:
    Handler(const std::shared_ptr<Handler> &successor);

    virtual void HandleRequest() const;
};

} } }