#include "Client.h"
#include <iostream>
#include "Handler.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const Handler *handler) const
{
    cout << "Client::Run(handler = " << handler << ")" << endl;

    handler->HandleRequest();
    cout << endl;
}

} } }