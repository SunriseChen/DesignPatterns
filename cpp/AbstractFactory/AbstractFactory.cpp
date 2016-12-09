#include "AbstractFactory.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

AbstractFactory::AbstractFactory()
{
    cout << "AbstractFactory::AbstractFactory()" << endl;
}

shared_ptr<AbstractProductA> AbstractFactory::CreateProductA() const
{
    cout << "AbstractFactory::CreateProductA()" << endl;
    return make_shared<AbstractProductA>();
}

shared_ptr<AbstractProductB> AbstractFactory::CreateProductB() const
{
    cout << "AbstractFactory::CreateProductB()" << endl;
    return make_shared<AbstractProductB>();
}

} } }