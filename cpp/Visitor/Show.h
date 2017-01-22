#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }