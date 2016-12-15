#include "Client.h"
#include <memory>
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Client::Client(const std::shared_ptr<Creator> &creator)
{
    cout << "Client::Client(" << creator << ")" << endl;
    this->creator = creator;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    creator->AnOperation();
    auto product = creator->GetProduct();
    product = creator->GetProduct();
}

} } }