#pragma once

#include <memory>
#include <string>

namespace Sunrise { namespace DesignPatterns { namespace Singleton {

// 定义一个 Instance 操作，允许客户访问它的唯一实例。Instance 是一个类操作（即 Smalltalk 中的一个类方法和 C++ 中的一个静态成员函数）。
// 可能负责创建它自己的唯一实例。
class Singleton
{
    static std::unique_ptr<Singleton> instance;

protected:
    Singleton();

public:
    static Singleton & Instance();
    virtual void SingletonOperation() const;
    virtual const std::string & GetSingletonData() const;
};

} } }