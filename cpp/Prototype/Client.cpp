#include "Client.h"
#include <memory>
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

Client::Client(const shared_ptr<Prototype> &prototype)
    : prototype(prototype)
{
    cout << "Client::Client(" << prototype << ")" << endl;
}

void Client::Operation() const
{
    cout << "Client::Operation()" << endl;

    auto clone = prototype->Clone();
}

} } }