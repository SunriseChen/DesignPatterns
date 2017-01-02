#include "FlyweightFactory.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

FlyweightFactory::FlyweightFactory()
{
    cout << "FlyweightFactory::FlyweightFactory()" << endl;
}

const shared_ptr<ConcreteFlyweight> & FlyweightFactory::GetFlyweight(int key, int intrinsicState)
{
    cout << "FlyweightFactory::GetFlyweight(" << key << ", " << intrinsicState << ")" << endl;

    if (flyweights.count(key) == 0)
    {
        flyweights[key] = make_shared<ConcreteFlyweight>(intrinsicState);
    }

    return flyweights[key];
}

shared_ptr<UnsharedConcreteFlyweight> FlyweightFactory::CreateUnshared(int allState) const
{
    cout << "FlyweightFactory::CreateUnshared(" << allState << ")" << endl;

    return make_shared<UnsharedConcreteFlyweight>(allState);
}

} } }