#pragma once

#include "../ShowBase.h"

namespace Sunrise { namespace DesignPatterns { namespace Iterator {

class Show : public ShowBase
{
public:
    Show();

    virtual void Run() const;
};

} } }