#include "Client.h"
#include <iostream>
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace State {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    Context context;
    ConcreteStateA stateA;
    ConcreteStateB stateB;
    cout << endl;

    context.Change(&stateA);
    context.Request();
    cout << endl;

    context.Change(&stateB);
    context.Request();
    cout << endl;
}

} } }