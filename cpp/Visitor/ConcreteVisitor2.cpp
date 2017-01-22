#include "ConcreteVisitor2.h"
#include <iostream>
#include "ConcreteElementA.h"
#include "ConcreteElementB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

ConcreteVisitor2::ConcreteVisitor2()
    : Visitor()
{
    cout << "ConcreteVisitor2::ConcreteVisitor2()" << endl;
}

void ConcreteVisitor2::VisitConcreteElementA(ConcreteElementA &element) const
{
    cout << "ConcreteVisitor2::VisitConcreteElementA(element = " << &element << ")" << endl;

    element.OperationA();
}

void ConcreteVisitor2::VisitConcreteElementB(ConcreteElementB &element) const
{
    cout << "ConcreteVisitor2::VisitConcreteElementB(element = " << &element << ")" << endl;

    element.OperationB();
}

} } }