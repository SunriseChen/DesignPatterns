#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "Composite.h"
#include "Leaf.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Composite {

Show::Show()
    : ShowBase("Composite")
{
}

void Show::DoRun() const
{
    shared_ptr<Component> component = make_shared<Composite>();
    cout << endl;

    for (int i = 0; i < 3; ++i)
    {
        component->Add(make_shared<Leaf>());
        cout << endl;

        component->Add(make_shared<Composite>());
        cout << endl;
    }

    Client client;
    client.Run(component);
}

} } }