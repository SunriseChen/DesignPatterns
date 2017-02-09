#pragma once

#include <iostream>

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

template<class TProduct>
StandardCreator<TProduct>::StandardCreator()
    : Creator()
{
    using namespace std;

    cout << "StandardCreator<TProduct>::StandardCreator()" << endl;
}

template<class TProduct>
std::shared_ptr<Product> StandardCreator<TProduct>::FactoryMethod() const
{
    using namespace std;

    cout << "StandardCreator<TProduct>::FactoryMethod()" << endl;

    return make_shared<TProduct>();
}

} } }