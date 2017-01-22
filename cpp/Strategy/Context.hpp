#pragma once

#include <iostream>

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

template<class TStrategy>
ContextT<TStrategy>::ContextT()
{
    using namespace std;

    cout << "ContextT<TStrategy>::ContextT()" << endl;
}

template<class TStrategy>
void ContextT<TStrategy>::ContextInterface() const
{
    using namespace std;

    cout << "ContextT<TStrategy>::ContextInterface()" << endl;

    strategy.AlgorithmInterface();
}

} } }