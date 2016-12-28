#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Adapter {

// 定义一个已经存在的接口，这个接口需要适配。
class Adaptee
{
public:
    Adaptee();

    virtual void SpecificRequest() const;
};

} } }