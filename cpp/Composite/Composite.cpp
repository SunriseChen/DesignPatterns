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

    for_each(children_.begin(), children_.end(), [](const ComponentPtr &component) {
        component->Operation();
    });
}

void Composite::Add(const ComponentPtr &component)
{
    cout << "Composite::Add(component = " << component << ")" << endl;

    children_.push_back(component);
}

void Composite::Remove(const ComponentPtr &component)
{
    cout << "Composite::Remove(component = " << component << ")" << endl;

    children_.remove(component);
}

const ComponentList & Composite::GetChildren() const
{
    cout << "Composite::GetChildren()" << endl;

    return children_;
}

const ComponentPtr & Composite::GetChild(int index) const
{
    cout << "Composite::GetChild(index = " << index << ")" << endl;

    return *next(children_.begin(), index);
}

} } }