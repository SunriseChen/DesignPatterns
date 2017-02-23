#include "ObjectStructure.h"
#include <iostream>
#include <algorithm>
#include "Element.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

ObjectStructure::ObjectStructure(Elements &&elements)
    : elements_(elements)
{
    cout << "ObjectStructure::ObjectStructure(elements = " << &elements << ")" << endl;
}

void ObjectStructure::Visit(const Visitor &visitor) const
{
    cout << "ObjectStructure::Visit(visitor = " << &visitor << ")" << endl;

    for_each(elements_.begin(), elements_.end(), [&](Element *element) {
        element->Accept(visitor);
    });
}

} } }