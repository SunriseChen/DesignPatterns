#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

class Subject;

class Client
{
public:
    Client();

    void Run(const Subject &subject) const;
};

} } }