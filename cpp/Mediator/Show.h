#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Mediator {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }