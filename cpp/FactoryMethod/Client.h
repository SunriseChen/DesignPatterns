#pragma once

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

class Creator;

class Client
{
public:
    Client();

    void Run(Creator &creator) const;
};

} } }