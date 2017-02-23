#include "FlyweightFactory.h"
#include <iostream>
#include "ConcreteFlyweight.h"
#include "UnsharedConcreteFlyweight.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

FlyweightFactory::FlyweightFactory()
{
    cout << "FlyweightFactory::FlyweightFactory()" << endl;
}

const FlyweightPtr & FlyweightFactory::GetFlyweight(int key, int intrinsicState)
{
    cout << "FlyweightFactory::GetFlyweight(key = " << key
         << ", intrinsicState = " << intrinsicState << ")" << endl;

    auto iter = flyweights_.find(key);
    if (iter == flyweights_.end())
    {
        auto result = flyweights_.insert(make_pair(key, make_shared<ConcreteFlyweight>(intrinsicState)));
        iter = result.first;
    }

    return iter->second;
}

UnsharedFlyweightPtr FlyweightFactory::CreateUnshared(int allState) const
{
    cout << "FlyweightFactory::CreateUnshared(allState = " << allState << ")" << endl;

    return make_shared<UnsharedConcreteFlyweight>(allState);
}

} } }