#include "ConcreteProduct.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

ConcreteProduct::ConcreteProduct()
    : Product()
{
    cout << "ConcreteProduct::ConcreteProduct()" << endl;
}

} } }