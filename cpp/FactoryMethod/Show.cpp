#include "Show.h"
#include <iostream>
#include "Client.h"
#include "ConcreteCreator.h"
#include "StandardCreator.h"
#include "ConcreteProduct.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Show::Show()
    : ShowBase("Factory Method")
{
}

void Show::DoRun() const
{
    Client client;
    ConcreteCreator concreteCreator;
    client.Run(concreteCreator);
    cout << endl;

    StandardCreator<ConcreteProduct> standardCreator;
    client.Run(standardCreator);
    cout << endl;
}

} } }