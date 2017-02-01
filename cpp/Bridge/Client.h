#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

class Abstraction;
class RefinedAbstraction;

class Client
{
public:
    Client();

    void Run(const Abstraction &abstractio, const RefinedAbstraction &refinedAbstraction) const;
};

} } }