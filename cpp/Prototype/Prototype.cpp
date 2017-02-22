#include "Prototype.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

Prototype::Prototype()
{
    cout << "Prototype::Prototype()" << endl;
}

Prototype::Prototype(const Prototype &other)
{
    cout << "Prototype::Prototype(other = " << &other << ")" << endl;
}

} } }