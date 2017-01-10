#pragma once

#include <memory>
#include "Context.h"

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

// 声明一个抽象的解释操作，这个接口为抽象语法树中所有的节点所共享。
class AbstractExpression
{
public:
    AbstractExpression();

    virtual void Interpret(const std::shared_ptr<Context> &context) const;
};

} } }