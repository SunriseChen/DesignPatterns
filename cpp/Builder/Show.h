#pragma once

#include "../ShowBase.h"

namespace Sunrise { namespace DesignPatterns { namespace Builder {

class Show : public ShowBase
{
public:
    Show();

    virtual void Run() const;
};

} } }