#pragma once

#include <memory>
#include "AbstractProductA.h"
#include "AbstractProductB.h"

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class AbstractFactory
{
public:
    AbstractFactory();

    virtual std::shared_ptr<AbstractProductA> CreateProductA() const;
    virtual std::shared_ptr<AbstractProductB> CreateProductB() const;
};

} } }