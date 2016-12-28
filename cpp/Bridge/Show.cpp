#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

Show::Show()
{
    cout << "Bridge Start:" << endl;
}

Show::~Show()
{
    cout << "Bridge Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }