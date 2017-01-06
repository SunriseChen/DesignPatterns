#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "RealSubject.h"
#include "Proxy.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

Show::Show()
{
    cout << "Proxy Start:" << endl;
}

Show::~Show()
{
    cout << "Proxy Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    auto realSubject = make_shared<RealSubject>();
    auto proxy = make_shared<Proxy>(realSubject);
    Client client(proxy);
    client.Run();
}

} } }