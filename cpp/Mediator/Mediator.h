#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

// 中介者定义一个接口用于与各同事（Colleague）对象通信。
class Mediator
{
public:
    Mediator();

    virtual void OperationA() const;
    virtual void OperationB() const;
    virtual void OperationC() const;
};

} } }