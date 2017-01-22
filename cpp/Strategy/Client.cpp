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

    ConcreteStrategyB strategyB;
    context.SetStrategy(&strategyB);
    context.ContextInterface();

    ConcreteStrategyC strategyC;
    context.SetStrategy(&strategyC);
    context.ContextInterface();

    ContextT<ConcreteStrategyA> contextA;
    contextA.ContextInterface();

    ContextT<ConcreteStrategyB> contextB;
    contextB.ContextInterface();

    ContextT<ConcreteStrategyC> contextC;
    contextC.ContextInterface();
}

} } }