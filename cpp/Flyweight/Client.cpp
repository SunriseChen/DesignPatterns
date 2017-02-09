#include "Client.h"
#include <iostream>
#include "FlyweightFactory.h"
#include "ConcreteFlyweight.h"
#include "UnsharedConcreteFlyweight.h"

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
    auto flyweight = factory.GetFlyweight(1, 2);    // 1: 2
    flyweight->Operation(3);                        // 2 + 3 = 5
    cout << endl;

    auto unshared = factory.CreateUnshared(4);      // allState: 4
    unshared->Operation(5);                         // 4 + 5 = 9
    cout << endl;

    flyweight = factory.GetFlyweight(1, 6);         // 1: 2
    flyweight->Operation(7);                        // 2 + 7 = 9
    cout << endl;

    flyweight = factory.GetFlyweight(8, 9);         // 8: 9
    flyweight->Operation(10);                       // 9 + 10 = 19
    cout << endl;
}

} } }