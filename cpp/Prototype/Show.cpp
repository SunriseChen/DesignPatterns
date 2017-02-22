#include "Show.h"
#include "Client.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

Show::Show()
    : ShowBase("Prototype")
{
}

void Show::DoRun() const
{
    Client client;
    ConcretePrototype1 prototype1;
    client.Operation(prototype1);

    ConcretePrototype2 prototype2;
    client.Operation(prototype2);
}

} } }