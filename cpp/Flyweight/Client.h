#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Flyweight {

// 维持一个对 flyweight 的引用。
// 计算或存储一个（多个） flyweight 的外部状态。
class Client
{
public:
    Client();

    void Run() const;
};

} } }