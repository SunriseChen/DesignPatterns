#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

Show::Show()
    : ShowBase("Bridge")
{
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }