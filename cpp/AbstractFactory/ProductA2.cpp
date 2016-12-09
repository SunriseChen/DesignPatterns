#include "ProductA2.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

ProductA2::ProductA2()
    : AbstractProductA()
{
    cout << "ProductA2::ProductA2()" << endl;
}

} } }