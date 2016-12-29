#pragma once

#include <list>
#include <memory>

namespace Sunrise { namespace DesignPatterns { namespace Composite {

// 为组合中的对象声明接口。
// 在适当的情况下，实现所有类共有接口的缺省行为。
// 声明一个接口用于访问和管理 Component 的子组件。
// (可选)在递归结构中定义一个接口，用于访问一个父部件，并在合适的情况下实现它。
class Component
{
public:
    Component();

    virtual void Operation() const;
    virtual void Add(std::shared_ptr<Component> component);
    virtual void Remove(std::shared_ptr<Component> component);
    virtual std::list<std::shared_ptr<Component>>::iterator GetChildren();
    virtual std::shared_ptr<Component> GetChild(int index) const;
};

} } }