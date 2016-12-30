#include "Decorator.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

Decorator::Decorator(const shared_ptr<Component> &component)
    : Component()
{
    cout << "Decorator::Decorator(" << component << ")" << endl;
    this->component = component;
}

void Decorator::Operation()
{
    cout << "Decorator::Operation()" << endl;

    component->Operation();
}

} } }