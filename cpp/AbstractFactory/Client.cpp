#include "Client.h"
#include <iostream>
#include "AbstractProductA.h"
#include "AbstractProductB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const AbstractFactory &abstractFactory) const
{
    cout << "Client::Run(" << &abstractFactory << ")" << endl;

    auto productA = abstractFactory.CreateProductA();
    auto productB = abstractFactory.CreateProductB();
}

} } }