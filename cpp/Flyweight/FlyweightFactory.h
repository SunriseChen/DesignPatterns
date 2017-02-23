#pragma once

#include <memory>
#include <unordered_map>

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

class ConcreteFlyweight;
class UnsharedConcreteFlyweight;
typedef std::shared_ptr<ConcreteFlyweight> FlyweightPtr;
typedef std::unordered_map<int, FlyweightPtr> FlyweightMap;
typedef std::shared_ptr<UnsharedConcreteFlyweight> UnsharedFlyweightPtr;

// 创建并管理 flyweight 对象。
// 确保合理地共享 flyweight。当用户请求一个 flyweight 时，FlyweightFactory
// 对象提供一个已创建的实例或者创建一个（如果不存在的话）。
class FlyweightFactory
{
    FlyweightMap flyweights_;

public:
    FlyweightFactory();

    const FlyweightPtr & GetFlyweight(int key, int intrinsicState = 0);
    UnsharedFlyweightPtr CreateUnshared(int allState = 0) const;
};

} } }