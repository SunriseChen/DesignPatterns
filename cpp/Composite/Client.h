#pragma once

#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Composite {

class Component;

// 通过 Component 接口操纵组合部件的对象。
class Client
{
public:
    Client();

    void Run(const std::shared_ptr<Component> &component) const;
};

} } }