#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Proxy {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }