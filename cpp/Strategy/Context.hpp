#pragma once

#include <iostream>

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

template<typename TStrategy>
ContextT<TStrategy>::ContextT()
{
    using namespace std;

    cout << "ContextT<TStrategy>::ContextT()" << endl;
}

template<typename TStrategy>
void ContextT<TStrategy>::ContextInterface() const
{
    using namespace std;

    cout << "ContextT<TStrategy>::ContextInterface()" << endl;

    strategy.AlgorithmInterface();
}

} } }