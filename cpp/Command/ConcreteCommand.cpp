#include "ConcreteCommand.h"
#include <iostream>

using namespace std;

namespace Sunrise { namespace DesignPatterns { namespace Command {

ConcreteCommand::ConcreteCommand(const shared_ptr<Receiver> &receiver)
    : Command(), 
    receiver(receiver), 
    state(0)
{
    cout << "ConcreteCommand::ConcreteCommand(receiver = " << receiver << ")" << endl;
}

void ConcreteCommand::Execute() const
{
    cout << "ConcreteCommand::Execute()" << endl;

    receiver->Action();
}

} } }