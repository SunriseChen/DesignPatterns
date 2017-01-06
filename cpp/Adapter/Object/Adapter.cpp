#include "Adapter.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter { namespace Object {

Adapter::Adapter(const shared_ptr<Adaptee> &adaptee)
    : Target(), 
    adaptee(adaptee)
{
    cout << "Object::Adapter::Adapter(" << adaptee << ")" << endl;
}

void Adapter::Request() const
{
    cout << "Object::Adapter::Request()" << endl;

    adaptee->SpecificRequest();
}

} } } }