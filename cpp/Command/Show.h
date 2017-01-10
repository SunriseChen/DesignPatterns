#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Command {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }