#pragma once

#include <string>

namespace Sunrise { namespace DesignPatterns { namespace Builder {

class Builder
{
public:
    Builder();

    virtual void BuildPart(const std::string &part);
};

} } }