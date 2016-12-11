#pragma once

#include <memory>
#include "Builder.h"

namespace Sunrise { namespace DesignPatterns { namespace Builder {

class Director
{
    std::shared_ptr<Builder> builder;

public:
    Director(std::shared_ptr<Builder> builder);

    void Construct();
};

} } }