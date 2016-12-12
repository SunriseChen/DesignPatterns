#include "ConcreteCreator.h"
#include <iostream>
#include "ConcreteProduct.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

ConcreteCreator::ConcreteCreator()
    : Creator()
{
    cout << "ConcreteCreator::ConcreteCreator()" << endl;
}

shared_ptr<Product> ConcreteCreator::FactoryMethod() const
{
    cout << "ConcreteCreator::FactoryMethod()" << endl;

    return make_shared<ConcreteProduct>();
}

} } }