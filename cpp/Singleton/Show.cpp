#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Singleton {

Show::Show()
{
    cout << "Singleton Start:" << endl;
}

Show::~Show()
{
    cout << "Singleton Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
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