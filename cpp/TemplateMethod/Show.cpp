#include "Show.h"
#include <iostream>
#include "Client.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

Show::Show()
    : ShowBase("Template Method")
{
}

void Show::Run() const
{
    Client client;
    client.Run();
}

} } }