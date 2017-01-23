#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

Show::Show()
    : ShowBase("Abstract Factory")
{
}

void Show::Run() const
{
    auto abstractFactory = make_shared<AbstractFactory>();
    auto client = make_shared<Client>(abstractFactory);
    client->Run();
    cout << endl;

    abstractFactory = make_shared<ConcreteFactory1>();
    client = make_shared<Client>(abstractFactory);
    client->Run();
    cout << endl;

    abstractFactory = make_shared<ConcreteFactory2>();
    client = make_shared<Client>(abstractFactory);
    client->Run();
    cout << endl;
}

} } }