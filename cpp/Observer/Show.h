#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Observer {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }