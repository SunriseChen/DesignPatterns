#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace State {

Show::Show()
    : ShowBase("State")
{
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }