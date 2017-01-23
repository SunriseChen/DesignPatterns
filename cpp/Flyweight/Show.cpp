#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

Show::Show()
    : ShowBase("Flyweight")
{
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }