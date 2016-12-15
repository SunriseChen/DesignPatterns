#include "Adapter.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter { namespace Class {

Adapter::Adapter()
    : Target(), Adaptee()
{
    cout << "Class::Adapter::Adapter()" << endl;
}

void Adapter::Request() const
{
    cout << "Class::Adapter::Request()" << endl;

    SpecificRequest();
}

} } } }