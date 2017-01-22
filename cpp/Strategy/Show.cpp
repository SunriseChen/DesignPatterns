#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

Show::Show()
{
    cout << "Strategy Start:" << endl;
}

Show::~Show()
{
    cout << "Strategy Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }