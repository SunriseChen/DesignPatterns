#include "Client.h"
#include <memory>
#include <iostream>
#include "Context.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

Client::Client()
{
    cout << "Client::Client()" << endl;
}

void Client::Run(const shared_ptr<AbstractExpression> &expression) const
{
    cout << "Client::Run()" << endl;

    auto context = make_shared<Context>();
    expression->Interpret(context);
    cout << "Context = " << context->GetResult() << endl;
}

} } }