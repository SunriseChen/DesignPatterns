#include "Client.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

Client::Client(const shared_ptr<Target> &target)
    : target(target)
{
    cout << "Client::Client(" << target << ")" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    target->Request();
}

} } }