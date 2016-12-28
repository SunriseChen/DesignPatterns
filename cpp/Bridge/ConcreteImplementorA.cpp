#include "ConcreteImplementorA.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

ConcreteImplementorA::ConcreteImplementorA()
{
    cout << "ConcreteImplementorA::ConcreteImplementorA()" << endl;
}

void ConcreteImplementorA::OperationImpl() const
{
    cout << "ConcreteImplementorA::OperationImpl()" << endl;
}

} } }