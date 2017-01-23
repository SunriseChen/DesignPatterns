#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Singleton {

Show::Show()
    : ShowBase("Singleton")
{
}

void Show::Run() const
{
    auto client = make_shared<Client>();
    client->Run();
    cout << endl;

    client = make_shared<Client>();
    client->Run();
    cout << endl;
}

} } }