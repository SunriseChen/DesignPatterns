#include "Show.h"
#include <iostream>
#include "Client.h"
#include "ConcreteHandler1.h"
#include "ConcreteHandler2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

Show::Show()
    : ShowBase("Chain Of Responsibility")
{
}

void Show::DoRun() const
{
    ConcreteHandler1 handler1;
    ConcreteHandler2 handler2(&handler1);
    cout << endl;

    Client client;
    client.Run(&handler2);
}

} } }