#include "ObjectStructure.h"
#include <iostream>
#include <algorithm>
#include "Element.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

ObjectStructure::ObjectStructure(list<Element *> &&elements)
    : elements(elements)
{
    cout << "ObjectStructure::ObjectStructure(elements = " << &elements << ")" << endl;
}

void ObjectStructure::Visit(const Visitor &visitor) const
{
    cout << "ObjectStructure::Visit(visitor = " << &visitor << ")" << endl;

    for_each(elements.begin(), elements.end(), [&](Element *e){ e->Accept(visitor); });
}

} } }