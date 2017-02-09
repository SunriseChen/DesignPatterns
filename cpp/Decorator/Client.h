#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

class Component;

class Client
{
public:
    Client();

    void Run(Component &component) const;
};

} } }