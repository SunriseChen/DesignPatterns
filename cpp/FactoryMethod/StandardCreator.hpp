#pragma once

#include <iostream>

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

template<typename TProduct>
StandardCreator<TProduct>::StandardCreator()
    : Creator()
{
    using namespace std;

    cout << "StandardCreator<TProduct>::StandardCreator()" << endl;
}

template<typename TProduct>
std::shared_ptr<Product> StandardCreator<TProduct>::FactoryMethod() const
{
    using namespace std;

    cout << "StandardCreator<TProduct>::FactoryMethod()" << endl;

    return make_shared<TProduct>();
}

} } }