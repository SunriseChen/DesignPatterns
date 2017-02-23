#include "Creator.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Creator::Creator()
    : product_(nullptr)
{
    cout << "Creator::Creator()" << endl;
}

void Creator::AnOperation() const
{
    cout << "Creator::AnOperation()" << endl;

    auto product = FactoryMethod();
}

const ProductPtr & Creator::GetProduct()
{
    cout << "Creator::GetProduct()" << endl;

    if (!product_)
    {
        product_ = FactoryMethod();
    }

    return product_;
}

} } }