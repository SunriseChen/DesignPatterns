#include "Client.h"
#include <memory>
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const shared_ptr<Handler> &handler) const
{
    cout << "Client::Run(handler = " << handler << ")" << endl;

    handler->HandleRequest();
}

} } }