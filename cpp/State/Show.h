#pragma once

#include "../ShowBase.h"

namespace Sunrise { namespace DesignPatterns { namespace State {

class Show : public ShowBase
{
public:
    Show();

protected:
    virtual void DoRun() const;
};

} } }