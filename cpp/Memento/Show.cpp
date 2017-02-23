#include "Show.h"
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Memento {

Show::Show()
    : ShowBase("Memento")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }