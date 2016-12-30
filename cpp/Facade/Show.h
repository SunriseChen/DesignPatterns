#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Facade {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }