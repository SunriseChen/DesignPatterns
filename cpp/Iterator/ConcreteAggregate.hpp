#pragma once

#include <iostream>
#include "ConcreteIterator.h"

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

template<class TItem>
ConcreteAggregate<TItem>::ConcreteAggregate(std::vector<TItem> &&data)
    : Aggregate<TItem>(), 
    data(data)
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::ConcreteAggregate(data = " << &data << ")" << endl;
}

template<class TItem>
std::unique_ptr<Iterator<TItem>> ConcreteAggregate<TItem>::CreateIterator()
{
    using namespace std;

    cout << "ConcreteAggregate<TItem>::CreateIterator()" << endl;

    return unique_ptr<Iterator<TItem>>(new ConcreteIterator<TItem>(*this));
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