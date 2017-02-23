#include "Show.h"
#include "Client.h"
#include "RealSubject.h"
#include "Proxy.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

Show::Show()
    : ShowBase("Proxy")
{
}

void Show::DoRun() const
{
    Client client;
    RealSubject realSubject;
    Proxy proxy(realSubject);
    client.Run(proxy);
}

} } }