#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

class Prototype;

// 让一个原型克隆自身从而创建一个新的对象。
class Client
{
public:
    Client();

    void Operation(const Prototype &prototype) const;
};

} } }