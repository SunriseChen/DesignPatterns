#pragma once

#include <memory>
#include "Component.h"

namespace Sunrise { namespace DesignPatterns { namespace Composite {

// 通过 Component 接口操纵组合部件的对象。
class Client
{
    std::shared_ptr<Component> component;

public:
    Client(const std::shared_ptr<Component> &component);

    void Run() const;
};

} } }