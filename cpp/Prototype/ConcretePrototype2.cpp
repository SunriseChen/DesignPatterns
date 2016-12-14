#include "ConcretePrototype2.h"
#include <memory>
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

ConcretePrototype2::ConcretePrototype2()
    : Prototype()
{
    cout << "ConcretePrototype2::ConcretePrototype2()" << endl;
}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2 &other)
    : Prototype(other)
{
    cout << "ConcretePrototype2::ConcretePrototype2(" << &other << ")" << endl;
}

shared_ptr<Prototype> ConcretePrototype2::Clone() const
{
    cout << "ConcretePrototype2::Clone()" << endl;

    return make_shared<ConcretePrototype2>(*this);
}

} } }