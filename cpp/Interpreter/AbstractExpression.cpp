#include "AbstractExpression.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

AbstractExpression::AbstractExpression()
{
    cout << "AbstractExpression::AbstractExpression()" << endl;
}

void AbstractExpression::Interpret(const shared_ptr<Context> &context) const
{
    cout << "AbstractExpression::Interpret(context = " << context << ")" << endl;
}

} } }