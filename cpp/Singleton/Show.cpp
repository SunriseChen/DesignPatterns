#include "Show.h"
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Singleton {

Show::Show()
    : ShowBase("Singleton")
{
}

void Show::DoRun() const
{
    {
        Client client;
        client.Run();
    }
    {
        Client client;
        client.Run();
    }
}

} } }