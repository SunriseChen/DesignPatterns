#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Observer {

Show::Show()
{
    cout << "Observer Start:" << endl;
}

Show::~Show()
{
    cout << "Observer Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }