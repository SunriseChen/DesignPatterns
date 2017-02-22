#include "TerminalExpression.h"
#include <iostream>
#include "Context.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

TerminalExpression::TerminalExpression()
    : AbstractExpression()
{
    cout << "TerminalExpression::TerminalExpression()" << endl;
}

void TerminalExpression::Interpret(Context &context) const
{
    cout << "TerminalExpression::Interpret(context = " << &context << ")" << endl;

    context.Add("TerminalExpression::Interpret");
}

} } }