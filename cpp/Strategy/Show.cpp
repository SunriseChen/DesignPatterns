#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

Show::Show()
    : ShowBase("Strategy")
{
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }