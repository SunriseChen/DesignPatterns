#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

// 定义 Client 使用的与特定领域相关的接口。
class Target
{
public:
    Target();

    virtual void Request() const;
};

} } }