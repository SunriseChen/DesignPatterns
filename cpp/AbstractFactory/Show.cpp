#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

Show::Show()
{
    cout << "Abstract Factory Start:" << endl;
}

Show::~Show()
{
    cout << "Abstract Factory Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
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