#include "Client.h"
#include <iostream>
#include "Target.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const Target &target) const
{
    cout << "Client::Run(target = " << &target << ")" << endl;

    target.Request();
}

} } }