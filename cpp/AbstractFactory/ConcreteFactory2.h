#pragma once

#include "AbstractFactory.h"

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class ConcreteFactory2 : public AbstractFactory
{
public:
    ConcreteFactory2();

    virtual std::shared_ptr<AbstractProductA> CreateProductA() const;
    virtual std::shared_ptr<AbstractProductB> CreateProductB() const;
};

} } }