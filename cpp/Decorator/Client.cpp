#include "Client.h"
#include <iostream>
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    shared_ptr<Component> component = make_shared<ConcreteComponent>();
    component->Operation();
    cout << endl;

    component = make_shared<ConcreteDecoratorA>(component);
    component->Operation();
    cout << endl;

    component = make_shared<ConcreteDecoratorB>(component);
    component->Operation();
    cout << endl;
}

} } }