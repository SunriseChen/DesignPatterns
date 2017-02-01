#include "Show.h"
#include <iostream>
#include "Client.h"
#include "Abstraction.h"
#include "RefinedAbstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

Show::Show()
    : ShowBase("Bridge")
{
}

void Show::DoRun() const
{
    ConcreteImplementorA implA;
    Abstraction abstraction(implA);
    cout << endl;

    ConcreteImplementorB implB;
    RefinedAbstraction refinedAbstraction(implB);
    cout << endl;

    Client client;
    client.Run(abstraction, refinedAbstraction);
}

} } }