#pragma once

#include <string>

namespace Sunrise { namespace DesignPatterns {

class ShowBase
{
    const std::string name;

public:
    const std::string & Name() const;
    void Run() const;

protected:
    ShowBase(std::string &&name);
    virtual void DoRun() const = 0;
};

} }