#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

class ObjectStructure;
class Visitor;

class Client
{
    const ObjectStructure &objectStructure;

public:
    Client(const ObjectStructure &objectStructure);

    void Run(const Visitor &visitor) const;
};

} } }