#pragma once

#include <iostream>
#include "ConcreteIterator.h"

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

template<typename TItem>
ConcreteAggregate<TItem>::ConcreteAggregate(DataType &&data)
    : Aggregate<TItem>(), 
    data_(data)
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::ConcreteAggregate(data = " << &data << ")" << endl;
}

template<typename TItem>
typename Aggregate<TItem>::IteratorPtr ConcreteAggregate<TItem>::CreateIterator()
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::CreateIterator()" << endl;

    return typename Aggregate<TItem>::IteratorPtr(new ConcreteIterator<TItem>(*this));
}

template<typename TItem>
long ConcreteAggregate<TItem>::Count() const
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::Count()" << endl;

    return data_.size();
}

template<typename TItem>
TItem & ConcreteAggregate<TItem>::Get(long index)
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::Get(index = " << index << ")" << endl;

    return data_[index];
}

} } }