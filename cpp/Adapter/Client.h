#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

class Target;

// 与符合 Target 接口的对象协同。
class Client
{
public:
    Client();

    void Run(const Target &target) const;
};

} } }