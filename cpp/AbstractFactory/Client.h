#pragma once

#include <memory>
#include "AbstractFactory.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class Client
{
    shared_ptr<AbstractFactory> abstractFactory;

public:
    Client(shared_ptr<AbstractFactory> abstractFactory);

    void Run();
};

} } }