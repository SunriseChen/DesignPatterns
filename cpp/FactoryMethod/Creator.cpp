#include "Creator.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Creator::Creator()
{
    cout << "Creator::Creator()" << endl;
}

shared_ptr<Product> Creator::FactoryMethod() const
{
    cout << "Creator::FactoryMethod()" << endl;

    return make_shared<Product>();
}

void Creator::AnOperation() const
{
    cout << "Creator::AnOperation()" << endl;

    auto product = FactoryMethod();
}

const shared_ptr<Product> & Creator::GetProduct()
{
    cout << "Creator::GetProduct()" << endl;

    if (!product)
    {
        product = FactoryMethod();
    }

    return product;
}

} } }