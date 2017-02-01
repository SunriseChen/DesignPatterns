#include "Component.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Composite {

Component::Component()
{
    cout << "Component::Component()" << endl;
}

void Component::Add(const ComponentPtr &component)
{
    cout << "Component::Add(component = " << component << ")" << endl;
}

void Component::Remove(const ComponentPtr &component)
{
    cout << "Component::Remove(component = " << component << ")" << endl;
}

const ComponentList & Component::GetChildren() const
{
    cout << "Component::GetChildren()" << endl;

    static ComponentList empty;
    return empty;
}

const ComponentPtr & Component::GetChild(int index) const
{
    cout << "Component::GetChild(index = " << index << ")" << endl;

    static ComponentPtr empty;
    return empty;
}

} } }