#pragma once

#include "../Target.h"
#include "../Adaptee.h"

namespace Sunrise { namespace DesignPatterns { namespace Adapter { namespace Class {

// 对 Adaptee 的接口与 Target 接口进行适配。
class Adapter : public Target, private Adaptee
{
public:
    Adapter();

    virtual void Request() const;
};

} } } }