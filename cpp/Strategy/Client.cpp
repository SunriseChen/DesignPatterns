#include "Client.h"
#include <iostream>
#include "Context.h"
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "ConcreteStrategyC.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    ConcreteStrategyA strategyA;
    Context context(&strategyA);
    context.ContextInterface();
    cout << endl;

    ConcreteStrategyB strategyB;
    context.SetStrategy(&strategyB);
    context.ContextInterface();
    cout << endl;

    ConcreteStrategyC strategyC;
    context.SetStrategy(&strategyC);
    context.ContextInterface();
    cout << endl;

    ContextT<ConcreteStrategyA> contextA;
    contextA.ContextInterface();
    cout << endl;

    ContextT<ConcreteStrategyB> contextB;
    contextB.ContextInterface();
    cout << endl;

    ContextT<ConcreteStrategyC> contextC;
    contextC.ContextInterface();
    cout << endl;
}

} } }