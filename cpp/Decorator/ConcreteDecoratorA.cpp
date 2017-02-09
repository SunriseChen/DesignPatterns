#include "ConcreteDecoratorA.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

ConcreteDecoratorA::ConcreteDecoratorA(Component &component)
    : Decorator(component), 
    addedState(0)
{
    cout << "ConcreteDecoratorA::ConcreteDecoratorA(" << &component << ")" << endl;
}

void ConcreteDecoratorA::Operation()
{
    cout << "ConcreteDecoratorA::Operation()" << endl;

    Decorator::Operation();
    cout << "addedState = " << ++addedState << endl;
}

} } }