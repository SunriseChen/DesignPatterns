#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

class Adaptee
{
public:
    Adaptee();

    virtual void SpecificRequest() const;
};

} } }