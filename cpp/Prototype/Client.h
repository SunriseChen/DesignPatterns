#pragma once

#include "Prototype.h"

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

// 让一个原型克隆自身从而创建一个新的对象。
class Client
{
    std::shared_ptr<Prototype> prototype;

public:
    Client(const std::shared_ptr<Prototype> &prototype);

    void Operation() const;
};

} } }