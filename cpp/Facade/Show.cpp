#include "Show.h"
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Facade {

Show::Show()
    : ShowBase("Facade")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }