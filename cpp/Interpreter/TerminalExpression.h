#pragma once

#include "AbstractExpression.h"

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

// 实现与文法中的终结符相关联的解释操作。
// 一个句子中的每个终结符需要该类的一个实例。
class TerminalExpression : public AbstractExpression
{
public:
    TerminalExpression();

    virtual void Interpret(Context &context) const;
};

} } }