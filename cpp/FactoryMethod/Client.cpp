#include "Client.h"
#include <memory>
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Client::Client(const shared_ptr<Creator> &creator)
    : creator(creator)
{
    cout << "Client::Client(" << creator << ")" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    creator->AnOperation();
    auto product = creator->GetProduct();
    product = creator->GetProduct();
}

} } }