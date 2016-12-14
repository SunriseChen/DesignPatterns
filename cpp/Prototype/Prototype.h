#pragma once

#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Prototype {

// 声明一个克隆自身的接口。
class Prototype
{
public:
    Prototype();
    Prototype(const Prototype &other);

    virtual std::shared_ptr<Prototype> Clone() const;
};

} } }