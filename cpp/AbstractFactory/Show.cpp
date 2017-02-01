#include "Show.h"
#include <iostream>
#include "Client.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

Show::Show()
    : ShowBase("Abstract Factory")
{
}

void Show::DoRun() const
{
    Client client;
    cout << endl;

    ConcreteFactory1 concreteFactory1;
    client.Run(concreteFactory1);
    cout << endl;

    ConcreteFactory2 concreteFactory2;
    client.Run(concreteFactory2);
    cout << endl;
}

} } }