#include "Colleague.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

Colleague::Colleague(const Mediator &mediator)
    : mediator_(mediator)
{
    cout << "Colleague::Colleague(mediator = " << &mediator << ")" << endl;
}

void Colleague::OperationD() const
{
    cout << "Colleague::OperationD()" << endl;
}

void Colleague::OperationE() const
{
    cout << "Colleague::OperationE()" << endl;
}

} } }