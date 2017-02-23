#include "Client.h"
#include <iostream>
#include "ObjectStructure.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

Client::Client(const ObjectStructure &objectStructure)
    : objectStructure_(objectStructure)
{
    cout << "Client::Client(objectStructure = " << &objectStructure << ")" << endl;
}

void Client::Run(const Visitor &visitor) const
{
    cout << "Client::Run(visitor = " << &visitor << ")" << endl;

    objectStructure_.Visit(visitor);
    cout << endl;
}

} } }