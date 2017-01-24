#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

Show::Show()
    : ShowBase("Template Method")
{
}

void Show::DoRun() const
{
    Client client;
    client.Run();
}

} } }