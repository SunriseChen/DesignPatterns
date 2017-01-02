#include "Flyweight.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

Flyweight::Flyweight()
{
    cout << "Flyweight::Flyweight()" << endl;
}

void Flyweight::Operation(int extrinsicState) const
{
    cout << "Flyweight::Operation(" << extrinsicState << ")" << endl;
}

} } }