#pragma once

#include "AbstractExpression.h"

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

// 对文法中的每一条规则 R ::= R1 R2 ... Rn 都需要一个 NonterminalExpression 类。
// 为从 R1 到 Rn 的每个符号都维护一个 AbstractExpression 类型的实例变量。
// 为文法中的非终结符实现解释(Interpret)操作。解释(Interpret)一般要递归地调用表示 R1 到 Rn 的那些对象的解释操作。
class NonterminalExpression : public AbstractExpression
{
    std::shared_ptr<AbstractExpression> left, right;

public:
    NonterminalExpression(const std::shared_ptr<AbstractExpression> &left, 
        const std::shared_ptr<AbstractExpression> &right);

    virtual void Interpret(const std::shared_ptr<Context> &context) const;
};

} } }