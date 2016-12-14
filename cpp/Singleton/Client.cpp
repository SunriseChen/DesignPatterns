#include "Client.h"
#include <memory>
#include <iostream>
#include "Singleton.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Singleton {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    auto singleton = Singleton::Instance();
    cout << &singleton << endl;
    singleton.SingletonOperation();
    auto data = singleton.GetSingletonData();
    cout << data << endl;
}

} } }