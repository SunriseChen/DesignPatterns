#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

class ObjectStructure;
class Visitor;

class Client
{
    const ObjectStructure &objectStructure_;

public:
    Client(const ObjectStructure &objectStructure);

    void Run(const Visitor &visitor) const;
};

} } }