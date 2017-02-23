#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

class Visitor;

// 定义一个 Accept 操作，它以一个访问者为参数。
class Element
{
protected:
    Element();

public:
    virtual void Accept(const Visitor &visitor) = 0;
};

} } }