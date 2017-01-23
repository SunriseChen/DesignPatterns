#include "Show.h"
#include <memory>
#include <iostream>
#include "Client.h"
#include "TerminalExpression.h"
#include "NonterminalExpression.h"

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Interpreter {

Show::Show()
    : ShowBase("Interpreter")
{
}

void Show::Run() const
{
    auto left = make_shared<TerminalExpression>();
    auto right = make_shared<TerminalExpression>();
    auto expression = make_shared<NonterminalExpression>(left, right);
    Client client;
    client.Run(expression);
}

} } }