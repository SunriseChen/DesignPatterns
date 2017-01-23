#pragma once

#include <string>

namespace Sunrise { namespace DesignPatterns {

class ShowBase
{
    std::string name;

public:
    virtual ~ShowBase();

    virtual void Run() const = 0;

protected:
    ShowBase(std::string &&name);
};

} }