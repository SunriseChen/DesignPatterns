#include "Client.h"
#include <iostream>
#include "FlyweightFactory.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    FlyweightFactory factory;
    auto flyweight = factory.GetFlyweight(1, 2);
    flyweight->Operation(3);
    auto unshared = factory.CreateUnshared(4);
    unshared->Operation(5);
    flyweight = factory.GetFlyweight(1, 6);
    flyweight->Operation(7);
    flyweight = factory.GetFlyweight(8, 9);
    flyweight->Operation(10);
}

} } }