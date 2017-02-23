#include "Show.h"
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Show::Show()
    : ShowBase("Builder")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }