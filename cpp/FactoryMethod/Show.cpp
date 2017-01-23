#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "ConcreteCreator.h"
#include "ConcreteProduct.h"
#include "StandardCreator.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Show::Show()
    : ShowBase("Factory Method")
{
}

void Show::Run() const
{
    shared_ptr<Creator> creator = make_shared<ConcreteCreator>();
    auto client = make_shared<Client>(creator);
    client->Run();
    cout << endl;

    creator = make_shared<StandardCreator<ConcreteProduct>>();
    client = make_shared<Client>(creator);
    client->Run();
    cout << endl;
}

} } }