#pragma once

#include <iostream>
#include "ConcreteIterator.h"

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

template<class TItem>
ConcreteAggregate<TItem>::ConcreteAggregate(DataType &&data)
    : Aggregate<TItem>(), 
    data(data)
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::ConcreteAggregate(data = " << &data << ")" << endl;
}

template<class TItem>
typename Aggregate<TItem>::IteratorPtr ConcreteAggregate<TItem>::CreateIterator()
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::CreateIterator()" << endl;

    return typename Aggregate<TItem>::IteratorPtr(new ConcreteIterator<TItem>(*this));
}

template<class TItem>
long ConcreteAggregate<TItem>::Count() const
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::Count()" << endl;

    return data.size();
}

template<class TItem>
TItem & ConcreteAggregate<TItem>::Get(long index)
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::Get(index = " << index << ")" << endl;

    return data[index];
}

} } }