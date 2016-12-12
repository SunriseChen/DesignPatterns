#pragma once

#include <memory>
#include "Product.h"

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

class Creator
{
public:
    Creator();

    virtual std::shared_ptr<Product> FactoryMethod();
    void AnOperation();
};

} } }