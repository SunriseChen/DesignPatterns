#pragma once

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

// 定义一个处理请求的接口。
// （可选）实现后继链。
class Handler
{
    const Handler *successor_;

protected:
    Handler(const Handler *successor);

public:
    virtual void HandleRequest() const;
};

} } }