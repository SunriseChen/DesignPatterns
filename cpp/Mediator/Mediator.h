#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

// 中介者定义一个接口用于与各同事（Colleague）对象通信。
class Mediator
{
protected:
    Mediator();

public:
    virtual void OperationA() const = 0;
    virtual void OperationB() const = 0;
    virtual void OperationC() const = 0;
};

} } }