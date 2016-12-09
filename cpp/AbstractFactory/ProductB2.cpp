#include "ProductB2.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

ProductB2::ProductB2()
    : AbstractProductB()
{
    cout << "ProductB2::ProductB2()" << endl;
}

} } }