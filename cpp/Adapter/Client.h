#pragma once

#include <memory>
#include "Target.h"

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

// 与符合 Target 接口的对象协同。
class Client
{
    std::shared_ptr<Target> target;

public:
    Client(const std::shared_ptr<Target> &target);

    void Run() const;
};

} } }