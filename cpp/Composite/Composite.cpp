#include "Composite.h"
#include <iostream>
#include <algorithm>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Composite {

Composite::Composite()
    : Component()
{
    cout << "Composite::Composite()" << endl;
}

void Composite::Operation() const
{
    cout << "Composite::Operation()" << endl;

    for_each(children.begin(), children.end(), 
        [](const shared_ptr<Component> &component){ component->Operation(); });
}

void Composite::Add(shared_ptr<Component> component)
{
    cout << "Composite::Add(" << component << ")" << endl;

    children.push_back(component);
}

void Composite::Remove(shared_ptr<Component> component)
{
    cout << "Composite::Remove(" << component << ")" << endl;

    children.remove(component);
}

list<shared_ptr<Component>>::iterator Composite::GetChildren()
{
    cout << "Composite::GetChildren()" << endl;

    return children.begin();
}

shared_ptr<Component> Composite::GetChild(int index) const
{
    cout << "Composite::GetChild(" << index << ")" << endl;

    return *next(children.begin(), index);
}

} } }