#pragma once

#include "../Target.h"
#include "../Adaptee.h"

namespace Sunrise { namespace DesignPatterns { namespace Adapter { namespace Class {

class Adapter : public Target, private Adaptee
{
public:
    Adapter();

    virtual void Request() const;
};

} } } }