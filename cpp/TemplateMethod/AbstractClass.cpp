#include "AbstractClass.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

AbstractClass::AbstractClass()
{
    cout << "AbstractClass::AbstractClass()" << endl;
}

void AbstractClass::TemplateMethod() const
{
    cout << "AbstractClass::TemplateMethod()" << endl;

    cout << "..." << endl;
    PrimitiveOperation1();
    cout << "..." << endl;
    PrimitiveOperation2();
    cout << "..." << endl;
}

} } }