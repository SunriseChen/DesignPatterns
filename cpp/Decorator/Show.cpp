#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

Show::Show()
{
    cout << "Decorator Start:" << endl;
}

Show::~Show()
{
    cout << "Decorator Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }