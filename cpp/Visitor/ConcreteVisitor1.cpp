#include "ConcreteVisitor1.h"
#include <iostream>
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

ConcreteVisitor1::ConcreteVisitor1()
    : Visitor()
{
    cout << "ConcreteVisitor1::ConcreteVisitor1()" << endl;
}

void ConcreteVisitor1::VisitConcreteElementA(ConcreteElementA &element) const
{
    cout << "ConcreteVisitor1::VisitConcreteElementA(element = " << &element << ")" << endl;

    element.OperationA();
}

void ConcreteVisitor1::VisitConcreteElementB(ConcreteElementB &element) const
{
    cout << "ConcreteVisitor1::VisitConcreteElementB(element = " << &element << ")" << endl;

    element.OperationB();
}

} } }