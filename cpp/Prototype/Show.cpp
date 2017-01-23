#include "Show.h"
#include <iostream>
#include "Client.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

Show::Show()
    : ShowBase("Prototype")
{
}

void Show::Run() const
{
    shared_ptr<Prototype> prototype = make_shared<ConcretePrototype1>();
    auto client = make_shared<Client>(prototype);
    client->Operation();
    cout << endl;

    prototype = make_shared<ConcretePrototype2>();
    client = make_shared<Client>(prototype);
    client->Operation();
    cout << endl;
}

} } }