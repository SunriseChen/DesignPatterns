#pragma once

#include "AbstractFactory.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();

    virtual shared_ptr<AbstractProductA> CreateProductA() const;
    virtual shared_ptr<AbstractProductB> CreateProductB() const;
};

} } }