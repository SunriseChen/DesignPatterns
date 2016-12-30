#include "ConcreteComponent.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

ConcreteComponent::ConcreteComponent()
    : Component()
{
    cout << "ConcreteComponent::ConcreteComponent()" << endl;
}

void ConcreteComponent::Operation()
{
    cout << "ConcreteComponent::Operation()" << endl;
}

} } }