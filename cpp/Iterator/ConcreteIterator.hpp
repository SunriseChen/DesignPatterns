#pragma once

#include <iostream>

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

template<typename TItem>
ConcreteIterator<TItem>::ConcreteIterator(ConcreteAggregate<TItem> &aggregate)
    : Iterator<TItem>(), 
    aggregate_(aggregate), 
    currentIndex_(0)
{
    using namespace std;

    cout << "ConcreteIterator<TItem>::ConcreteIterator(aggregate = " << &aggregate << ")" << endl;
}

template<typename TItem>
void ConcreteIterator<TItem>::First()
{
    using namespace std;

    cout << "ConcreteIterator<TItem>::First()" << endl;

    currentIndex_ = aggregate_.Count() - 1;
}

template<typename TItem>
void ConcreteIterator<TItem>::Next()
{
    using namespace std;

    cout << "ConcreteIterator<TItem>::Next()" << endl;

    --currentIndex_;
}

template<typename TItem>
bool ConcreteIterator<TItem>::IsDone() const
{
    using namespace std;

    cout << "ConcreteIterator<TItem>::IsDone()" << endl;

    return currentIndex_ < 0;
}

template<typename TItem>
TItem & ConcreteIterator<TItem>::CurrentItem()
{
    using namespace std;

    cout << "ConcreteIterator<TItem>::CurrentItem()" << endl;

    return aggregate_.Get(currentIndex_);
}

} } }