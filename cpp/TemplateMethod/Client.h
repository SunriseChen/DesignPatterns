#pragma once

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

class AbstractClass;

class Client
{
public:
    Client();

    void Run(const AbstractClass &abstractClass) const;
};

} } }