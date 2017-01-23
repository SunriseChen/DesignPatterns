#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "Target.h"
#include "Adaptee.h"
#include "Class/Adapter.h"
#include "Object/Adapter.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

Show::Show()
    : ShowBase("Adapter")
{
}

void Show::Run() const
{
    shared_ptr<Target> target = make_shared<Class::Adapter>();
    auto client = make_shared<Client>(target);
    client->Run();
    cout << endl;

    auto adaptee = make_shared<Adaptee>();
    target = make_shared<Object::Adapter>(adaptee);
    client = make_shared<Client>(target);
    client->Run();
    cout << endl;
}

} } }