#pragma once

#include "AbstractFactory.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class ConcreteFactory1 : public AbstractFactory
{
public:
    ConcreteFactory1();

    virtual shared_ptr<AbstractProductA> CreateProductA() const;
    virtual shared_ptr<AbstractProductB> CreateProductB() const;
};

} } }