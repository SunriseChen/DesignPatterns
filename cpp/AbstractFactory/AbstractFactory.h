#pragma once

#include <memory>
#include "AbstractProductA.h"
#include "AbstractProductB.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace AbstractFactory {

class AbstractFactory
{
public:
    AbstractFactory();

    virtual shared_ptr<AbstractProductA> CreateProductA() const;
    virtual shared_ptr<AbstractProductB> CreateProductB() const;
};

} } }