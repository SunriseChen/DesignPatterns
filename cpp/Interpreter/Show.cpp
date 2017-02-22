#include "Show.h"
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

void Show::DoRun() const
{
    TerminalExpression left;
    TerminalExpression right;
    NonterminalExpression expression(left, right);
    Client client;
    client.Run(expression);
}

} } }