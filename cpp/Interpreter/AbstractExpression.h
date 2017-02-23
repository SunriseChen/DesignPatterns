#pragma once

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

class Context;

// 声明一个抽象的解释操作，这个接口为抽象语法树中所有的节点所共享。
class AbstractExpression
{
protected:
    AbstractExpression();

public:
    virtual void Interpret(Context &context) const = 0;
};

} } }