#pragma once

#include "Iterator.h"
#include "ConcreteAggregate.h"

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

// 具体迭代器实现迭代器接口。
// 对该聚合遍历时跟踪当前位置。
template<typename TItem>
class ConcreteIterator : public Iterator<TItem>
{
    ConcreteAggregate<TItem> &aggregate_;
    long currentIndex_;

public:
    ConcreteIterator(ConcreteAggregate<TItem> &aggregate);

    virtual void First();
    virtual void Next();
    virtual bool IsDone() const;
    virtual TItem & CurrentItem();
};

} } }

#include "ConcreteIterator.hpp"