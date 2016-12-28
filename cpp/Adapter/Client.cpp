#include "Client.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

Client::Client(const shared_ptr<Target> &target)
{
    cout << "Client::Client(" << target << ")" << endl;
    this->target = target;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    target->Request();
}

} } }