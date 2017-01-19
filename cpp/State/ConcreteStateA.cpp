#include "ConcreteStateA.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace State {

ConcreteStateA::ConcreteStateA()
    : State()
{
    cout << "ConcreteStateA::ConcreteStateA()" << endl;
}

void ConcreteStateA::Handle() const
{
    cout << "ConcreteStateA::Handle()" << endl;
}

} } }