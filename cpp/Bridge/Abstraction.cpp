#include "Abstraction.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

Abstraction::Abstraction(const shared_ptr<Implementor> &impl)
    : impl(impl)
{
    cout << "Abstraction::Abstraction(" << impl << ")" << endl;
}

void Abstraction::Operation() const
{
    cout << "Abstraction::Operation()" << endl;

    impl->OperationImpl();
}

} } }