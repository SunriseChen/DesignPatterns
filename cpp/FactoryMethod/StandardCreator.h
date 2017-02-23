#pragma once

#include "Creator.h"

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

template<typename TProduct>
class StandardCreator : public Creator
{
public:
    StandardCreator();

protected:
    virtual ProductPtr FactoryMethod() const;
};

} } }

#include "StandardCreator.hpp"