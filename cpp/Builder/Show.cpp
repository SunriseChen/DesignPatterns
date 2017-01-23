#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Show::Show()
    : ShowBase("Builder")
{
}

void Show::Run() const
{
    Client client;
    client.Run();
    cout << endl;
}

} } }