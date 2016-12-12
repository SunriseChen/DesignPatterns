#include "Creator.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

Creator::Creator()
{
    cout << "Creator::Creator()" << endl;
}

shared_ptr<Product> Creator::FactoryMethod()
{
    cout << "Creator::FactoryMethod()" << endl;

    return make_shared<Product>();
}

void Creator::AnOperation()
{
    cout << "Creator::AnOperation()" << endl;

    auto product = FactoryMethod();
}

} } }