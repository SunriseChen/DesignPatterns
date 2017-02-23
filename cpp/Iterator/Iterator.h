#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

// 迭代器定义访问和遍历元素的接口。
template<typename TItem>
class Iterator
{
protected:
    Iterator();

public:
    virtual void First() = 0;
    virtual void Next() = 0;
    virtual bool IsDone() const = 0;
    virtual TItem & CurrentItem() = 0;
};

} } }

#include "Iterator.hpp"