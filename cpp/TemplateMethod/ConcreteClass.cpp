#include "ConcreteClass.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

ConcreteClass::ConcreteClass()
    : AbstractClass()
{
    cout << "ConcreteClass::ConcreteClass()" << endl;
}

void ConcreteClass::PrimitiveOperation1() const
{
    cout << "ConcreteClass::PrimitiveOperation1()" << endl;
}

void ConcreteClass::PrimitiveOperation2() const
{
    cout << "ConcreteClass::PrimitiveOperation2()" << endl;
}

} } }