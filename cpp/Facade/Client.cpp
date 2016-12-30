#include "Client.h"
#include <iostream>
#include "Facade.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Facade {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    Facade facade;
}

} } }