#pragma once

#include <list>

namespace Sunrise { namespace DesignPatterns { namespace Visitor {

class Element;
class Visitor;
typedef std::list<Element *> Elements;

// 能枚举它的元素。
// 可以提供一个高层的接口以允许该访问者访问它的元素。
// 可以是一个复合（参见 Composite）或是一个集合，如一个列表或一个无序集合。
class ObjectStructure
{
    Elements elements_;

public:
    ObjectStructure(Elements &&elements);

    void Visit(const Visitor &visitor) const;
};

} } }