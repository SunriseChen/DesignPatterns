#pragma once

namespace Sunrise { namespace DesignPatterns { namespace FactoryMethod {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }