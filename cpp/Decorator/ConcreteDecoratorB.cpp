#include "ConcreteDecoratorB.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

ConcreteDecoratorB::ConcreteDecoratorB(Component &component)
    : Decorator(component)
{
    cout << "ConcreteDecoratorB::ConcreteDecoratorB(" << &component << ")" << endl;
}

void ConcreteDecoratorB::Operation()
{
    cout << "ConcreteDecoratorB::Operation()" << endl;

    Decorator::Operation();
    AddedBehavior();
}

void ConcreteDecoratorB::AddedBehavior() const
{
    cout << "ConcreteDecoratorB::AddedBehavior()" << endl;
}

} } }