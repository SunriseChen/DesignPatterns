#include "Client.h"
#include <iostream>
#include "Abstraction.h"
#include "RefinedAbstraction.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const Abstraction &abstraction, const RefinedAbstraction &refinedAbstraction) const
{
    cout << "Client::Run(abstraction = " << &abstraction << 
        ", refinedAbstraction = " << &refinedAbstraction << ")" << endl;

    abstraction.Operation();
    cout << endl;

    refinedAbstraction.Operation();
    cout << endl;

    refinedAbstraction.Operation2();
    cout << endl;
}

} } }