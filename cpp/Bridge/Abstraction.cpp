#include "Abstraction.h"
#include <iostream>
#include "Implementor.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

Abstraction::Abstraction(const Implementor &impl)
    : impl_(impl)
{
    cout << "Abstraction::Abstraction(impl = " << &impl << ")" << endl;
}

void Abstraction::Operation() const
{
    cout << "Abstraction::Operation()" << endl;

    impl_.OperationImpl();
}

} } }