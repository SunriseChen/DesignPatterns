#pragma once

namespace Sunrise { namespace DesignPatterns { namespace State {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }