#pragma once

#include "Creator.h"

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

template<class TProduct>
class StandardCreator : public Creator
{
public:
    StandardCreator();

protected:
    virtual std::shared_ptr<Product> FactoryMethod() const;
};

} } }

#include "StandardCreator.hpp"