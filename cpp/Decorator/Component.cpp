#include "Component.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

Component::Component()
{
    cout << "Component::Component()" << endl;
}

void Component::Operation()
{
    cout << "Component::Operation()" << endl;
}

} } }