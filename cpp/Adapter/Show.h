#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }