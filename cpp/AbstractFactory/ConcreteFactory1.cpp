#include "ConcreteFactory1.h"
#include "ProductA1.h"
#include "ProductB1.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

ConcreteFactory1::ConcreteFactory1()
    : AbstractFactory()
{
    cout << "ConcreteFactory1::ConcreteFactory1()" << endl;
}

shared_ptr<AbstractProductA> ConcreteFactory1::CreateProductA() const
{
    cout << "ConcreteFactory1::CreateProductA()" << endl;
    return make_shared<ProductA1>();
}

shared_ptr<AbstractProductB> ConcreteFactory1::CreateProductB() const
{
    cout << "ConcreteFactory1::CreateProductB()" << endl;
    return make_shared<ProductB1>();
}

} } }