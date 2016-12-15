#pragma once

#include "../Target.h"
#include <memory>
#include "../Adaptee.h"

namespace Sunrise { namespace DesignPatterns { namespace Adapter { namespace Object {

class Adapter : public Target
{
    std::shared_ptr<Adaptee> adaptee;

public:
    Adapter(const std::shared_ptr<Adaptee> &adaptee);

    virtual void Request() const;
};

} } } }