#pragma once

#include <iostream>

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

template<typename TItem>
Iterator<TItem>::Iterator()
{
    using namespace std;

    cout << "Iterator<TItem>::Iterator()" << endl;
}

} } }