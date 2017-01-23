#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

Show::Show()
    : ShowBase("Command")
{
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }