#include "Show.h"
#include <iostream>
#include "Client.h"
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

Show::Show()
    : ShowBase("Decorator")
{
}

void Show::DoRun() const
{
    Client client;
    ConcreteComponent component;
    client.Run(component);

    ConcreteDecoratorA componentA(component);
    client.Run(componentA);

    ConcreteDecoratorB componentB(componentA);
    client.Run(componentB);
}

} } }