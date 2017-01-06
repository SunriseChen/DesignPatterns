#pragma once

#include "Subject.h"

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

// 定义 Proxy 所代表的实体。
class RealSubject : public Subject
{
public:
    RealSubject();

    virtual void Request() const;
};

} } }