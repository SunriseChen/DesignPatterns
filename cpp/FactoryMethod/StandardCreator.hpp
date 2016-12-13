#pragma once

#include <iostream>

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

using namespace std;

template<class TProduct>
shared_ptr<Product> StandardCreator<TProduct>::FactoryMethod() const
{
    cout << "StandardCreator<TProduct>::FactoryMethod()" << endl;

    return make_shared<TProduct>();
}

} } }