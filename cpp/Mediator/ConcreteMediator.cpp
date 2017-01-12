#include "ConcreteMediator.h"
#include <iostream>
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

ConcreteMediator::ConcreteMediator()
    : Mediator()
{
    cout << "ConcreteMediator::ConcreteMediator()" << endl;
}

void ConcreteMediator::OperationA() const
{
    cout << "ConcreteMediator::OperationA()" << endl;

    ConcreteColleague1 colleague(*this);
    colleague.OperationE();
    colleague.OperationF();
}

void ConcreteMediator::OperationB() const
{
    cout << "ConcreteMediator::OperationB()" << endl;

    ConcreteColleague2 colleague(*this);
    colleague.OperationD();
    colleague.OperationG();
}

} } }