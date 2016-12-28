#include "ConcreteImplementorB.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

ConcreteImplementorB::ConcreteImplementorB()
{
    cout << "ConcreteImplementorB::ConcreteImplementorB()" << endl;
}

void ConcreteImplementorB::OperationImpl() const
{
    cout << "ConcreteImplementorB::OperationImpl()" << endl;
}

} } }