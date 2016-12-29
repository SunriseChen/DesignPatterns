#include "Leaf.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Composite {

Leaf::Leaf()
    : Component()
{
    cout << "Leaf::Leaf()" << endl;
}

void Leaf::Operation() const
{
    cout << "Leaf::Operation()" << endl;
}

} } }