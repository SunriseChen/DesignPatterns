#include "ConcreteColleague1.h"
#include <iostream>
#include "Mediator.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

ConcreteColleague1::ConcreteColleague1(const Mediator &mediator)
    : Colleague(mediator)
{
    cout << "ConcreteColleague1::ConcreteColleague1(mediator = " << &mediator << ")" << endl;
}

void ConcreteColleague1::OperationD() const
{
    cout << "ConcreteColleague1::OperationD()" << endl;

    mediator.OperationB();
}

void ConcreteColleague1::OperationF() const
{
    cout << "ConcreteColleague1::OperationF()" << endl;

    mediator.OperationC();
}

} } }