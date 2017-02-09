#include "Client.h"
#include <iostream>
#include "Creator.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(Creator &creator) const
{
    cout << "Client::Run(creator = " << &creator << ")" << endl;

    creator.AnOperation();
    auto product = creator.GetProduct();
    product = creator.GetProduct();
}

} } }