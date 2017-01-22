#include "ConcreteElementA.h"
#include <iostream>
#include "Visitor.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

ConcreteElementA::ConcreteElementA()
    : Element()
{
    cout << "ConcreteElementA::ConcreteElementA()" << endl;
}

void ConcreteElementA::Accept(const Visitor &visitor)
{
    cout << "ConcreteElementA::Accept(visitor = " << &visitor << ")" << endl;

    visitor.VisitConcreteElementA(*this);
}

void ConcreteElementA::OperationA() const
{
    cout << "ConcreteElementA::OperationA()" << endl;
}

} } }