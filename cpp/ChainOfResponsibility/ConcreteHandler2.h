#pragma once

#include "Handler.h"

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

// 处理它所负责的请求。
// 可访问它的后继者。
// 如果可处理该请求，就处理之；否则将该请求转发给它的后继者。
class ConcreteHandler2 : public Handler
{
public:
    ConcreteHandler2(const Handler *successor = nullptr);

    virtual void HandleRequest() const;
};

} } }