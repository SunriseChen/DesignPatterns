#include "UnsharedConcreteFlyweight.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(int allState)
    : Flyweight(), 
    allState_(allState)
{
    cout << "UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(allState = " << allState << ")" << endl;
}

void UnsharedConcreteFlyweight::Operation(int extrinsicState) const
{
    cout << "UnsharedConcreteFlyweight::Operation(extrinsicState = " << extrinsicState << ")" << endl;

    cout << allState_ << " + " << extrinsicState << " = " << allState_ + extrinsicState << endl;
}

} } }