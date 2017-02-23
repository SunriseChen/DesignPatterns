#pragma once

#include <memory>
#include <list>

namespace Sunrise { namespace DesignPatterns { namespace Composite {

class Component;
typedef std::shared_ptr<Component> ComponentPtr;
typedef std::list<ComponentPtr> ComponentList;

// 为组合中的对象声明接口。
// 在适当的情况下，实现所有类共有接口的缺省行为。
// 声明一个接口用于访问和管理 Component 的子组件。
// (可选)在递归结构中定义一个接口，用于访问一个父部件，并在合适的情况下实现它。
class Component
{
protected:
    Component();

public:
    virtual void Operation() const = 0;

    virtual void Add(const ComponentPtr &component);
    virtual void Remove(const ComponentPtr &component);
    virtual const ComponentList & GetChildren() const;
    virtual const ComponentPtr & GetChild(int index) const;
};

} } }