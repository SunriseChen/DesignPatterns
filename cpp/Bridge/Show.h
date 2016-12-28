#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Bridge {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }