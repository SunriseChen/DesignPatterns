#include "Adapter.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter { namespace Object {

Adapter::Adapter(const std::shared_ptr<Adaptee> &adaptee)
    : Target()
{
    cout << "Object::Adapter::Adapter(" << adaptee << ")" << endl;
    this->adaptee = adaptee;
}

void Adapter::Request() const
{
    cout << "Object::Adapter::Request()" << endl;

    adaptee->SpecificRequest();
}

} } } }