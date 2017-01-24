#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

Show::Show()
    : ShowBase("Mediator")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }