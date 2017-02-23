#pragma once

#include <iostream>

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

template<typename TItem>
Aggregate<TItem>::Aggregate()
{
    using namespace std;

    cout << "Aggregate<TItem>::Aggregate()" << endl;
}

} } }