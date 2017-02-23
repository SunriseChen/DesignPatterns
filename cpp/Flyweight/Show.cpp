#include "Show.h"
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

Show::Show()
    : ShowBase("Flyweight")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }