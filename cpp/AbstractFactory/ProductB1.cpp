#include "ProductB1.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

ProductB1::ProductB1()
    : AbstractProductB()
{
    cout << "ProductB1::ProductB1()" << endl;
}

} } }