#include "Show.h"
#include "Client.h"
#include "ConcreteClass.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

Show::Show()
    : ShowBase("Template Method")
{
}

void Show::DoRun() const
{
    Client client;
    ConcreteClass concreteClass;
    client.Run(concreteClass);
}

} } }