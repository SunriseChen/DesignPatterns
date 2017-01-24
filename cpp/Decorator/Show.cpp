#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

Show::Show()
    : ShowBase("Decorator")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }