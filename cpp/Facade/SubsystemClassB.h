#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Facade {

// 实现子系统的功能。
// 处理由 Facade 对象指派的任务。
// 没有 facade 的任何相关信息；即没有指向 facade 的指针。
class SubsystemClassB
{
public:
    SubsystemClassB();
};

} } }