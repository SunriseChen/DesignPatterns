#pragma once

#include "Builder.h"

namespace Sunrise { namespace DesignPatterns { namespace Builder {

class ConcreteBuilder : public Builder
{
    std::string result;

public:
    ConcreteBuilder();

    virtual void BuildPart(const std::string &part);
    const std::string & GetResult() const;
};

} } }