#include "Client.h"
#include <memory>
#include <iostream>
#include "RefinedAbstraction.h"
#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    shared_ptr<Implementor> impl = make_shared<ConcreteImplementorA>();
    auto abstraction = make_shared<Abstraction>(impl);
    abstraction->Operation();
    cout << endl;

    impl = make_shared<ConcreteImplementorB>();
    auto refinedAbstraction = make_shared<RefinedAbstraction>(impl);
    refinedAbstraction->Operation();
    refinedAbstraction->Operation2();
    cout << endl;
}

} } }