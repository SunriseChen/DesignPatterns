#pragma once

#include <memory>
#include "AbstractFactory.h"

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class Client
{
    std::shared_ptr<AbstractFactory> abstractFactory;

public:
    Client(const std::shared_ptr<AbstractFactory> &abstractFactory);

    void Run();
};

} } }