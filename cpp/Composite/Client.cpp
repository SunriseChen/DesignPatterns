#include "Client.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Composite {

Client::Client(const shared_ptr<Component> &component)
{
    cout << "Client::Client(" << component << ")" << endl;
    this->component = component;
}

void Client::Run() const
{
    cout << "Client::Run()" << endl;

    auto children = component->GetChildren();
    children = children;    // pass unused warning
    auto child = component->GetChild(2);
    component->Remove(child);
    cout << endl;

    component->Operation();
    cout << endl;
}

} } }