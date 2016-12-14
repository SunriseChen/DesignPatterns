#include "Prototype.h"
#include <memory>
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

Prototype::Prototype()
{
    cout << "Prototype::Prototype()" << endl;
}

Prototype::Prototype(const Prototype &other)
{
    cout << "Prototype::Prototype(" << &other << ")" << endl;
}

shared_ptr<Prototype> Prototype::Clone() const
{
    cout << "Prototype::Clone()" << endl;

    return make_shared<Prototype>(*this);
}

} } }