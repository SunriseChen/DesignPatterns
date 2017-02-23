#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

// 定义 RealSubject 和 Proxy 的共用接口，这样就在任何使用 RealSubject 的地方都可以使用 Proxy。
class Subject
{
protected:
    Subject();

public:
    virtual void Request() const = 0;
};

} } }