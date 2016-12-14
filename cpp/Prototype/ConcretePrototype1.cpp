#include "ConcretePrototype1.h"
#include <memory>
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

ConcretePrototype1::ConcretePrototype1()
    : Prototype()
{
    cout << "ConcretePrototype1::ConcretePrototype1()" << endl;
}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1 &other)
    : Prototype(other)
{
    cout << "ConcretePrototype1::ConcretePrototype1(" << &other << ")" << endl;
}

shared_ptr<Prototype> ConcretePrototype1::Clone() const
{
    cout << "ConcretePrototype1::Clone()" << endl;

    return make_shared<ConcretePrototype1>(*this);
}

} } }