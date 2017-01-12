#include "Mediator.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

Mediator::Mediator()
{
    cout << "Mediator::Mediator()" << endl;
}

void Mediator::OperationA() const
{
    cout << "Mediator::OperationA()" << endl;
}

void Mediator::OperationB() const
{
    cout << "Mediator::OperationB()" << endl;
}

void Mediator::OperationC() const
{
    cout << "Mediator::OperationC()" << endl;
}

} } }