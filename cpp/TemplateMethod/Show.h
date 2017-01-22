#pragma once

namespace Sunrise { namespace DesignPatterns { namespace TemplateMethod {

class Show
{
public:
    Show();
    virtual ~Show();

    void Run() const;
};

} } }