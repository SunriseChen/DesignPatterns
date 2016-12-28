#pragma once

#include "../Target.h"
#include <memory>
#include "../Adaptee.h"

namespace Sunrise { namespace DesignPatterns { namespace Adapter { namespace Object {

// 对 Adaptee 的接口与 Target 接口进行适配。
class Adapter : public Target
{
    std::shared_ptr<Adaptee> adaptee;

public:
    Adapter(const std::shared_ptr<Adaptee> &adaptee);

    virtual void Request() const;
};

} } } }