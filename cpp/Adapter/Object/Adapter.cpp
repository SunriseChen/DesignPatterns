#include "Adapter.h"
#include <iostream>
#include "../Adaptee.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter { namespace Object {

Adapter::Adapter(const Adaptee &adaptee)
    : Target(), 
    adaptee(adaptee)
{
    cout << "Object::Adapter::Adapter(adaptee = " << &adaptee << ")" << endl;
}

void Adapter::Request() const
{
    cout << "Object::Adapter::Request()" << endl;

    adaptee.SpecificRequest();
}

} } } }