#include "Client.h"
#include <iostream>
#include "Prototype.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Operation(const Prototype &prototype) const
{
    cout << "Client::Operation(prototype = " << &prototype << ")" << endl;

    auto clone = prototype.Clone();
    cout << "clone = " << clone << endl;
    cout << endl;
}

} } }