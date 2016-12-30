#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "Leaf.h"
#include "Composite.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Composite {

Show::Show()
{
    cout << "Composite Start:" << endl;
}

Show::~Show()
{
    cout << "Composite Finished!" << endl << endl;
    cout << string(68, '=') << endl << endl;
}

void Show::Run() const
{
    auto component = make_shared<Component>();
    cout << endl;

    component = make_shared<Composite>();
    cout << endl;

    for (int i = 0; i < 3; ++i)
    {
        component->Add(make_shared<Leaf>());
        component->Add(make_shared<Composite>());
    }
    cout << endl;

    Client client(component);
    client.Run();
}

} } }