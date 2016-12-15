#pragma once

#include "Target.h"
#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

class Client
{
    std::shared_ptr<Target> target;

public:
    Client(const std::shared_ptr<Target> &target);

    void Run() const;
};

} } }