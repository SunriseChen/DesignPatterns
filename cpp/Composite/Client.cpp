#include "Client.h"
#include <iostream>
#include "Component.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Composite {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const shared_ptr<Component> &component) const
{
    cout << "Client::Run(component = " << component << ")" << endl;

    auto children = component->GetChildren();
    cout << "count = " << children.size() << endl;

    auto child = component->GetChild(2);
    component->Remove(child);
    cout << endl;

    component->Operation();
    cout << endl;
}

} } }