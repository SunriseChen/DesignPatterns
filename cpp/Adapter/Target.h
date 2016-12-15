#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

class Target
{
public:
    Target();

    virtual void Request() const;
};

} } }