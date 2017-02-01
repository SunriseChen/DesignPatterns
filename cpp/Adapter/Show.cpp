#include "Show.h"
#include <iostream>
#include "Client.h"
#include "Adaptee.h"
#include "Class/Adapter.h"
#include "Object/Adapter.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

Show::Show()
    : ShowBase("Adapter")
{
}

void Show::DoRun() const
{
    Client client;
    cout << endl;

    Class::Adapter classAdapter;
    client.Run(classAdapter);
    cout << endl;

    Adaptee adaptee;
    Object::Adapter objectAdapter(adaptee);
    client.Run(objectAdapter);
    cout << endl;
}

} } }