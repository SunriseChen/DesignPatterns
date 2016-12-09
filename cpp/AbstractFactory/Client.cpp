#include "Client.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

Client::Client(shared_ptr<AbstractFactory> abstractFactory)
{
    cout << "Client::Client(" << abstractFactory << ")" << endl;
    this->abstractFactory = abstractFactory;
}

void Client::Run()
{
    cout << "Client::Run()" << endl;

    auto productA = abstractFactory->CreateProductA();
    auto productB = abstractFactory->CreateProductB();
}

} } }