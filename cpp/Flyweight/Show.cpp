#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

Show::Show()
{
    cout << "Flyweight Start:" << endl;
}

Show::~Show()
{
    cout << "Flyweight Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }