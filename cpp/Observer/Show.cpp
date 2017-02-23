#include "Show.h"
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

Show::Show()
    : ShowBase("Observer")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }