#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Decorator {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }