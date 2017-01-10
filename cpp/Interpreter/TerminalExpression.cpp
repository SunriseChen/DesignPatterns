#include "TerminalExpression.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

TerminalExpression::TerminalExpression()
    : AbstractExpression()
{
    cout << "TerminalExpression::TerminalExpression()" << endl;
}

void TerminalExpression::Interpret(const shared_ptr<Context> &context) const
{
    cout << "TerminalExpression::Interpret(context = " << context << ")" << endl;

    context->Add("TerminalExpression::Interpret");
}

} } }