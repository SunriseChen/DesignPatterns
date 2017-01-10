#pragma once

namespace Sunrise { namespace DesignPatterns { namespace ChainOfResponsibility {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }