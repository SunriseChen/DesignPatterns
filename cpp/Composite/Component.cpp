#include "Component.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Composite {

Component::Component()
{
    cout << "Component::Component()" << endl;
}

void Component::Operation() const
{
    cout << "Component::Operation()" << endl;
}

void Component::Add(shared_ptr<Component> component)
{
    cout << "Component::Add(" << component << ")" << endl;
}

void Component::Remove(shared_ptr<Component> component)
{
    cout << "Component::Remove(" << component << ")" << endl;
}

list<shared_ptr<Component>>::iterator Component::GetChildren()
{
    cout << "Component::GetChildren()" << endl;

    static list<shared_ptr<Component>> empty;
    return empty.begin();
}

shared_ptr<Component> Component::GetChild(int index) const
{
    cout << "Component::GetChild(" << index << ")" << endl;

    return nullptr;
}

} } }