#pragma once

#include "Aggregate.h"
#include <vector>

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

// 具体聚合实现创建相应迭代器的接口，该操作返回 ConcreteIterator 的一个适当的实例。
template<typename TItem>
class ConcreteAggregate : public Aggregate<TItem>
{
    typedef std::vector<TItem> DataType;

    DataType data_;

public:
    ConcreteAggregate(DataType &&data);

    virtual typename Aggregate<TItem>::IteratorPtr CreateIterator();
    virtual size_t Count() const;
    virtual TItem & Get(size_t index);
};

} } }

#include "ConcreteAggregate.hpp"