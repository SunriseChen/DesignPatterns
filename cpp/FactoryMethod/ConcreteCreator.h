#pragma once

#include <memory>
#include "Creator.h"

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

class ConcreteCreator : public Creator
{
public:
    ConcreteCreator();

    virtual std::shared_ptr<Product> FactoryMethod() const;
};

} } }