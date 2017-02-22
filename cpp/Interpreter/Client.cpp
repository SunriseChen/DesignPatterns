#include "Client.h"
#include <iostream>
#include "Context.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const AbstractExpression &expression) const
{
    cout << "Client::Run(expression = " << &expression << ")" << endl;

    Context context;
    expression.Interpret(context);
    cout << "Context = " << context.GetResult() << endl;
    cout << endl;
}

} } }