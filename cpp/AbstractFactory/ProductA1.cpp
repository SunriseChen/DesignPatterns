#include "ProductA1.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

ProductA1::ProductA1()
    : AbstractProductA()
{
    cout << "ProductA1::ProductA1()" << endl;
}

} } }