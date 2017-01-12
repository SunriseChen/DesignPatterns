#pragma once

#include "Aggregate.h"

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

class Client
{
public:
    Client();

    void Run(Aggregate<int> &aggregate) const;
};

} } }