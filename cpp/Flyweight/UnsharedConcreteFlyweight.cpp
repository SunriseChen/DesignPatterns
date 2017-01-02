#include "UnsharedConcreteFlyweight.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(int allState)
    : Flyweight(), 
    allState(allState)
{
    cout << "UnsharedConcreteFlyweight::UnsharedConcreteFlyweight(" << allState << ")" << endl;
}

void UnsharedConcreteFlyweight::Operation(int extrinsicState) const
{
    cout << "UnsharedConcreteFlyweight::Operation(" << extrinsicState << ")" << endl;

    cout << allState << " + " << extrinsicState << " = " << allState + extrinsicState << endl;
}

} } }