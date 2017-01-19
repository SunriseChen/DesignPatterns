#include "ConcreteStateB.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace State {

ConcreteStateB::ConcreteStateB()
    : State()
{
    cout << "ConcreteStateB::ConcreteStateB()" << endl;
}

void ConcreteStateB::Handle() const
{
    cout << "ConcreteStateB::Handle()" << endl;
}

} } }