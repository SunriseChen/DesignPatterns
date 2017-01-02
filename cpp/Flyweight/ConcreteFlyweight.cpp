#include "ConcreteFlyweight.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

ConcreteFlyweight::ConcreteFlyweight(int intrinsicState)
    : Flyweight(), 
    intrinsicState(intrinsicState)
{
    cout << "ConcreteFlyweight::ConcreteFlyweight(" << intrinsicState << ")" << endl;
}

void ConcreteFlyweight::Operation(int extrinsicState) const
{
    cout << "ConcreteFlyweight::Operation(" << extrinsicState << ")" << endl;

    cout << intrinsicState << " + " << extrinsicState << " = " << intrinsicState + extrinsicState << endl;
}

} } }