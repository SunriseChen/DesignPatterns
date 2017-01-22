#include "ConcreteElementB.h"
#include <iostream>
#include "Visitor.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

ConcreteElementB::ConcreteElementB()
    : Element()
{
    cout << "ConcreteElementB::ConcreteElementB()" << endl;
}

void ConcreteElementB::Accept(const Visitor &visitor)
{
    cout << "ConcreteElementB::Accept(visitor = " << &visitor << ")" << endl;

    visitor.VisitConcreteElementB(*this);
}

void ConcreteElementB::OperationB() const
{
    cout << "ConcreteElementB::OperationB()" << endl;
}

} } }