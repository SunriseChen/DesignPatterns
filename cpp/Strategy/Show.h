#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Strategy {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }