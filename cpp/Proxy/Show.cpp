#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "RealSubject.h"
#include "Proxy.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

Show::Show()
    : ShowBase("Proxy")
{
}

void Show::Run() const
{
    auto realSubject = make_shared<RealSubject>();
    auto proxy = make_shared<Proxy>(realSubject);
    Client client(proxy);
    client.Run();
}

} } }