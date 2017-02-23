#pragma once

#include "AbstractExpression.h"

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

// 构建(或被给定)表示该文法定义的语言中一个特定的句子的抽象语法树。
// 该抽象语法树由 NonterminalExpression 和 TerminalExpression 的实例装配而成。
// 调用解释操作。
class Client
{
public:
    Client();

    void Run(const AbstractExpression &expression) const;
};

} } }