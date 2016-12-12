#pragma once

#include "Creator.h"

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

class Client
{
    std::shared_ptr<Creator> creator;

public:
    Client(const std::shared_ptr<Creator> &creator);

    void Run();
};

} } }