#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Facade {

Show::Show()
    : ShowBase("Facade")
{
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }