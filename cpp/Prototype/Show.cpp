#include "Show.h"
#include <iostream>
#include "Client.h"
#include "ConcretePrototype1.h"
#include "ConcretePrototype2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

Show::Show()
{
    cout << "Prototype Start:" << endl;
}

Show::~Show()
{
    cout << "Prototype Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
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