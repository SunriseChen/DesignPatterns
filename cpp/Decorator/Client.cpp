#include "Client.h"
#include <iostream>
#include "Component.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(Component &component) const
{
    cout << "Client::Run(component = " << &component << ")" << endl;

    component.Operation();
    cout << endl;
}

} } }