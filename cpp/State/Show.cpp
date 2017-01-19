#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace State {

Show::Show()
{
    cout << "State Start:" << endl;
}

Show::~Show()
{
    cout << "State Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }