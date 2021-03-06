#include "ConcreteFlyweight.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

ConcreteFlyweight::ConcreteFlyweight(int intrinsicState)
    : Flyweight(), 
    intrinsicState_(intrinsicState)
{
    cout << "ConcreteFlyweight::ConcreteFlyweight(intrinsicState = " << intrinsicState << ")" << endl;
}

void ConcreteFlyweight::Operation(int extrinsicState) const
{
    cout << "ConcreteFlyweight::Operation(extrinsicState = " << extrinsicState << ")" << endl;

    cout << intrinsicState_ << " + " << extrinsicState << " = " << intrinsicState_ + extrinsicState << endl;
}

} } }