#include "NonterminalExpression.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

NonterminalExpression::NonterminalExpression(const shared_ptr<AbstractExpression> &left, 
    const shared_ptr<AbstractExpression> &right)
    : AbstractExpression(), 
    left(left), 
    right(right)
{
    cout << "NonterminalExpression::NonterminalExpression(left = " << left
         << ", right = " << right << ")" << endl;
}

void NonterminalExpression::Interpret(const shared_ptr<Context> &context) const
{
    cout << "NonterminalExpression::Interpret(context = " << context << ")" << endl;

    context->Add("NonterminalExpression::Interpret");
    context->Add("left");
    left->Interpret(context);
    context->Add("right");
    right->Interpret(context);
}

} } }