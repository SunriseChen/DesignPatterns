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
}

void Show::Run()
{
    Client client;
    client.Run();
    cout << endl;
}

} } }