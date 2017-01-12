#pragma once

#include <memory>
#include "Iterator.h"

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

// 聚合定义创建相应迭代器对象的接口。
template<class TItem>
class Aggregate
{
public:
    virtual std::unique_ptr<Iterator<TItem>> CreateIterator() = 0;

protected:
    Aggregate();
};

} } }

#include "Aggregate.hpp"