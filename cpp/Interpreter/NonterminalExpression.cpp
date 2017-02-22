#include "NonterminalExpression.h"
#include <iostream>
#include "Context.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

NonterminalExpression::NonterminalExpression(const AbstractExpression &left, 
    const AbstractExpression &right)
    : AbstractExpression(), 
    left(left), 
    right(right)
{
    cout << "NonterminalExpression::NonterminalExpression(left = " << &left
         << ", right = " << &right << ")" << endl;
}

void NonterminalExpression::Interpret(Context &context) const
{
    cout << "NonterminalExpression::Interpret(context = " << &context << ")" << endl;

    context.Add("NonterminalExpression::Interpret");
    context.Add("left");
    left.Interpret(context);
    context.Add("right");
    right.Interpret(context);
}

} } }