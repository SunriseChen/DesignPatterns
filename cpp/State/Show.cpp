#include "Show.h"
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace State {

Show::Show()
    : ShowBase("State")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }