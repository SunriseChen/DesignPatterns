#include "ConcreteColleague2.h"
#include <iostream>
#include "Mediator.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

ConcreteColleague2::ConcreteColleague2(const Mediator &mediator)
    : Colleague(mediator)
{
    cout << "ConcreteColleague2::ConcreteColleague2(mediator = " << &mediator << ")" << endl;
}

void ConcreteColleague2::OperationE() const
{
    cout << "ConcreteColleague2::OperationE()" << endl;

    mediator.OperationA();
}

void ConcreteColleague2::OperationG() const
{
    cout << "ConcreteColleague2::OperationG()" << endl;

    mediator.OperationC();
}

} } }