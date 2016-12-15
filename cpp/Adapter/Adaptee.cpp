#include "Adaptee.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

Adaptee::Adaptee()
{
    cout << "Adaptee::Adaptee()" << endl;
}

void Adaptee::SpecificRequest() const
{
    cout << "Adaptee::SpecificRequest()" << endl;
}

} } }