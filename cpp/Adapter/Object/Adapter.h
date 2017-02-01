#pragma once

#include "../Target.h"

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

class Adaptee;

namespace Object {

// 对 Adaptee 的接口与 Target 接口进行适配。
class Adapter : public Target
{
    const Adaptee &adaptee;

public:
    Adapter(const Adaptee &adaptee);

    virtual void Request() const;
};

}

} } }