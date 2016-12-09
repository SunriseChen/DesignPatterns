#include "ConcreteFactory2.h"
#include "ProductA2.h"
#include "ProductB2.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

ConcreteFactory2::ConcreteFactory2()
    : AbstractFactory()
{
    cout << "ConcreteFactory2::ConcreteFactory2()" << endl;
}

shared_ptr<AbstractProductA> ConcreteFactory2::CreateProductA() const
{
    cout << "ConcreteFactory2::CreateProductA()" << endl;
    return make_shared<ProductA2>();
}

shared_ptr<AbstractProductB> ConcreteFactory2::CreateProductB() const
{
    cout << "ConcreteFactory2::CreateProductB()" << endl;
    return make_shared<ProductB2>();
}

} } }