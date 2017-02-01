#include "RefinedAbstraction.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

RefinedAbstraction::RefinedAbstraction(const Implementor &impl)
    : Abstraction(impl)
{
    cout << "RefinedAbstraction::RefinedAbstraction(impl = " << &impl << ")" << endl;
}

void RefinedAbstraction::Operation2() const
{
    cout << "RefinedAbstraction::Operation2()" << endl;

    Operation();
}

} } }