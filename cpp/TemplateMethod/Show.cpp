#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

Show::Show()
{
    cout << "Template Method Start:" << endl;
}

Show::~Show()
{
    cout << "Template Method Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }