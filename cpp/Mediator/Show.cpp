#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

Show::Show()
{
    cout << "Mediator Start:" << endl;
}

Show::~Show()
{
    cout << "Mediator Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }