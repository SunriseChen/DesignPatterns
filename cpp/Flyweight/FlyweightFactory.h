#pragma once

#include <map>
#include <memory>
#include "ConcreteFlyweight.h"
#include "UnsharedConcreteFlyweight.h"

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

// 创建并管理 flyweight 对象。
// 确保合理地共享 flyweight。当用户请求一个 flyweight 时，FlyweightFactory
// 对象提供一个已创建的实例或者创建一个（如果不存在的话）。
class FlyweightFactory
{
    std::map<int, std::shared_ptr<ConcreteFlyweight>> flyweights;

public:
    FlyweightFactory();

    const std::shared_ptr<ConcreteFlyweight> & GetFlyweight(int key, int intrinsicState = 0);
    std::shared_ptr<UnsharedConcreteFlyweight> CreateUnshared(int allState = 0) const;
};

} } }