#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Builder {

Show::Show()
{
    cout << "Builder Start:" << endl;
}


Show::~Show()
{
    cout << "Builder Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
    cout << endl;
}

} } }